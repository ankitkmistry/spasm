
// Generated from H:/Programming (Ankit)/Projects/spade/1.0/spasm\Assembly.g4 by ANTLR 4.11.1

#pragma once

#include <stack>

#include "antlr4-runtime.h"
#include "AssemblyVisitor.h"
#include "elp/elpdef.hpp"
#include "utils/exceptions.hpp"
#include "utils/opcode.hpp"
#include "utils/utils.hpp"


/**
 * This class provides an empty implementation of AssemblyVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class AssemblyBaseVisitor : public AssemblyVisitor {
private:
    class State {
    private:
        vector<CpInfo> constantPool = {};
        vector<uint8> code = {};
        map<string, uint32> labels = {};
        map<string, vector<uint32>> unresolvedLabels = {};
        map<uint32, size_t> lineTable = {};
        vector<uint32> marks = {};
        uint32 pc = 0;

    public:
        enum class Type {
            METHOD, CLASS, TOP
        } type;

        explicit State(Type type) : type(type) {}

        void addByte(uint8 byte, size_t line);

        uint32 codeCount() { return code.size(); }

        uint8 *getCode() { return code.data(); }

        void optimizeLineTable();

        uint32 lineCount() { return lineTable.size(); }

        MethodInfo::LineInfo *getLineTable();

        void addLabel(const string &label);

        uint32 getLabel(const string &label) { return labels[label]; }

        void resolveLabels();

        static uint16 computeJump(uint32 labelLoc, uint32 cur);

        uint16 getJump(const string &label);

        void mark() { marks.push_back(pc); }

        uint32 getMark(uint32 location);

        const vector<CpInfo> &getConstantPool() const { return constantPool; }
    };

    ElpInfo elp = {};
    const string compiledFrom;
    vector<State> states = {};
    string entry;
    uint32 classLevel = 0;

    /**
     * @returns A state nearest to the top of the state stack which as a populated constant pool
     * */
    bool getStateWithPool(State &state) {
        for (auto it = states.end() - 1; it >= states.begin(); it--)
            if (it->type == State::Type::TOP || it->type == State::Type::CLASS) {
                state = *it;
                return true;
            }
        return false;
    }

public:
    explicit AssemblyBaseVisitor(const string &compiledFrom) : elp(), compiledFrom(compiledFrom) {}

    void newLevel(State::Type type) { states.emplace_back(type); }

    void endLevel() { states.pop_back(); }

    cpidx fromConstants(const CpInfo cp) {
        State state{State::Type::TOP};
        if (!getStateWithPool(state))
            throw Unreachable();

        auto pool = state.getConstantPool();
        cpidx i = 0;
        for (; i < pool.size(); i++)
            if (pool[i] == cp)
                return i;
        pool.push_back(cp);
        return i;
    }

    cpidx fromConstants(const string &str) {
        return fromConstants(CpInfo::fromString(str));
    }

    cpidx fromConstants(const vector<CpInfo> &array) {
        return fromConstants(CpInfo::fromArray(array));
    }

    virtual std::any visitAssembly(AssemblyParser::AssemblyContext *ctx) override {
        newLevel(State::Type::TOP);
        visitMetadata(ctx->metadata());
        elp.globalsCount = ctx->global().size();
        elp.globals = new GlobalInfo[elp.globalsCount];
        for (int i = 0; i < elp.globalsCount; ++i) {
            elp.globals[i] = any_cast<GlobalInfo>(visitGlobal(ctx->global(i)));
        }
        elp.objectsCount = ctx->method().size() + ctx->class_().size();
        elp.objects = new ObjInfo[elp.objectsCount];
        uint16 i = 0;
        for (auto method: ctx->method()) {
            ObjInfo obj{};
            obj.type = 0x02;
            obj._method = any_cast<MethodInfo>(visitMethod(method));
            elp.objects[i] = obj;
            i++;
        }
        for (auto klass: ctx->class_()) {
            ObjInfo obj{};
            obj.type = 0x02;
            obj._class = any_cast<ClassInfo>(visitClass(klass));
            elp.objects[i] = obj;
            i++;
        }
        elp.entry = !entry.empty() ? fromConstants(entry) : -1;
        endLevel();
        return elp;
    }

    virtual std::any visitMetadata(AssemblyParser::MetadataContext *ctx) override {
        auto type = ctx->type->toString();
        if (type == "XP") {
            elp.magic = 0xC0FFEEDE;
            elp.type = 0x01;
        }
        if (type == "SLL") {
            elp.magic = 0x6020CAFE;
            elp.type = 0x02;
        }
        elp.minorVersion = stoi(ctx->NUMBER()[0]->toString());
        elp.majorVersion = stoi(ctx->NUMBER()[1]->toString());
        elp.compiledFrom = fromConstants(compiledFrom);
        elp.imports = fromConstants(any_cast<vector<CpInfo>>(visitArray(ctx->array())));
        return visitChildren(ctx);
    }

    virtual std::any visitGlobal(AssemblyParser::GlobalContext *ctx) override {
        GlobalInfo global{};
        auto type = ctx->type->toString();
        if (type == "VAR") global.flags = 0x01;
        if (type == "CONST") global.flags = 0x02;
        global.thisGlobal = fromConstants(ctx->ID()->toString());
        global.type = fromConstants(ctx->STRING()->toString());
        return global;
    }

    virtual std::any visitMethod(AssemblyParser::MethodContext *ctx) override {
        newLevel(State::Type::METHOD);
        auto state = getState();
        MethodInfo method{};
        if (ctx->entry != null) {
            entry = ctx->STRING()->toString();
        }
        method.type = classLevel == 0 ? 0x01 : 0x02;
        method.thisMethod = fromConstants(ctx->STRING()->toString());

        method.argsCount = ctx->arg().size();
        method.args = new MethodInfo::ArgInfo[method.argsCount];
        for (int i = 0; i < method.argsCount; ++i) {
            method.args[i] = any_cast<MethodInfo::ArgInfo>(visit(ctx->arg(i)));
        }

        method.localsCount = ctx->local().size();
        method.closureStart = ctx->NUMBER().size() == 2 ? stoi(ctx->NUMBER(0)->toString()) : 0;
        method.locals = new MethodInfo::LocalInfo[method.localsCount];
        for (int i = 0; i < method.localsCount; ++i) {
            method.locals[i] = any_cast<MethodInfo::LocalInfo>(visit(ctx->local(i)));
        }

        method.maxStack = ctx->NUMBER().size() == 2
                          ? stoi(ctx->NUMBER(1)->toString())
                          : stoi(ctx->NUMBER(0)->toString());
        for (auto line: ctx->line()) visitLine(line);
        state.resolveLabels();
        method.codeCount = state.codeCount();
        method.code = state.getCode();

        method.exceptionTableCount = ctx->exceptionItem().size();
        method.exceptionTable = new MethodInfo::ExceptionTableInfo[method.exceptionTableCount];
        for (int i = 0; i < method.exceptionTableCount; ++i) {
            method.exceptionTable[i] = any_cast<MethodInfo::ExceptionTableInfo>(
                    visitExceptionItem(ctx->exceptionItem(i)));
        }

        state.optimizeLineTable();
        method.lineNumberTableCount = state.lineCount();
        method.lineNumberTable = state.getLineTable();
        endLevel();
        return method;
    }

    /**
     * @returns The current state which present on the top of the states stack
     * */
    State getState() { return states.end()[-1]; }

    virtual std::any visitArg(AssemblyParser::ArgContext *ctx) override {
        MethodInfo::ArgInfo arg{};
        auto type = ctx->type->toString();
        if (type == "VALUE")arg.flags = 0x01;
        if (type == "REF")arg.flags = 0x02;
        arg.thisArg = fromConstants(ctx->ID()->toString());
        arg.type = fromConstants(ctx->STRING()->toString());
        return arg;
    }

    virtual std::any visitLocal(AssemblyParser::LocalContext *ctx) override {
        MethodInfo::LocalInfo local{};
        auto type = ctx->type->toString();
        if (type == "VAR")local.flags = 0x01;
        if (type == "CONST")local.flags = 0x02;
        local.thisLocal = fromConstants(ctx->ID()->toString());
        local.type = fromConstants(ctx->STRING()->toString());
        return local;
    }

    virtual std::any visitLine(AssemblyParser::LineContext *ctx) override {
        auto state = getState();
        string label = ctx->label != null ? ctx->label->toString() : "";
        Opcode opcode = OpcodeInfo::fromString(ctx->opcode->toString());
        auto params = OpcodeInfo::getParams(opcode);

        // Mark the line
        state.mark();
        // Register the label
        if (!label.empty()) {
            state.addLabel(label);
        }
        // Append the opcode
        state.addByte(static_cast<uint8>(opcode), ctx->opcode->getLine());
        // Check the params
        if (ctx->value() != null) {
            // Get the index from constant pool, if any
            auto operand = any_cast<CpInfo>(visitValue(ctx->value()));
            cpidx value;
            if (OpcodeInfo::takeFromConstPool(opcode))
                value = fromConstants(operand);
            else {
                if (operand.tag != 0x04 /* int */)
                    throw AssemblerError("expected integral value");
                value = operand._int;
            }
            switch (params) {
                case 2: {
                    // Slice the number and add it
                    state.addByte(value >> 8, ctx->value()->getStart()->getLine());
                    state.addByte(value & 0xFF, ctx->value()->getStart()->getLine());
                    break;
                }
                case 1:
                    state.addByte(value & 0xFF, ctx->value()->getStart()->getLine());
                    break;
                default:
                    throw AssemblerError(format("opcode expects %d parameters", params),
                                         OpcodeInfo::toString(opcode));
            }
        } else if (ctx->dest != null) {
            // Calculate the jump
            auto jump = state.getJump(ctx->dest->toString());
            switch (params) {
                case 2: {
                    // Slice the number and add it
                    state.addByte(jump >> 8, ctx->dest->getLine());
                    state.addByte(jump & 0xFF, ctx->dest->getLine());
                    break;
                }
                case 1:
                    state.addByte(jump & 0xFF, ctx->dest->getLine());
                    break;
                default:
                    throw AssemblerError(format("opcode expects %d parameters", params),
                                         OpcodeInfo::toString(opcode));
            }
        } else if (params > 0)
            throw AssemblerError("opcode expects 1 parameter");
        return null;
    }

    virtual std::any visitExceptionItem(AssemblyParser::ExceptionItemContext *ctx) override {
        auto state = getState();
        MethodInfo::ExceptionTableInfo info{};
        info.startPc = state.getLabel(ctx->ID(0)->toString());
        info.endPc = state.getLabel(ctx->ID(1)->toString());
        info.targetPc = state.getLabel(ctx->ID(2)->toString());
        info.exception = fromConstants(ctx->ID(0)->toString());
        return info;
    }

    uint16 getAccessFlag(const vector<AssemblyParser::AccessorContext *> &accessors) {
        uint16 accessFlag = 0;
        for (auto accessor: accessors) {
            accessFlag |= any_cast<uint16>(visitAccessor(accessor));
        }
        return accessFlag;
    }

    virtual std::any visitClass(AssemblyParser::ClassContext *ctx) override {
        classLevel++;
        newLevel(State::Type::CLASS);

        ClassInfo klass{};

        auto type = ctx->type->toString();
        if (type == "CLASS")klass.type = 0x01;
        if (type == "INTERFACE")klass.type = 0x02;
        if (type == "ENUM")klass.type = 0x03;
        if (type == "ANNOTATION")klass.type = 0x04;

        klass.accessFlags = getAccessFlag(ctx->accessor());
        klass.thisClass = fromConstants(ctx->STRING()->toString());
        // TODO: Add type parameter support
        klass.typeParams = fromConstants(CpInfo::fromArray({}));
        klass.supers = ctx->supers != null
                       ? fromConstants(any_cast<vector<CpInfo>>(visitArray(ctx->supers)))
                       : fromConstants(CpInfo::fromArray({}));

        klass.fieldsCount = ctx->field().size();
        klass.fields = new FieldInfo[klass.fieldsCount];
        for (int i = 0; i < klass.fieldsCount; ++i) {
            klass.fields[i] = any_cast<FieldInfo>(visitField(ctx->field(i)));
        }

        klass.methodsCount = ctx->method().size();
        klass.methods = new MethodInfo[klass.methodsCount];
        for (int i = 0; i < klass.methodsCount; ++i) {
            klass.methods[i] = any_cast<MethodInfo>(visitMethod(ctx->method(i)));
        }

        klass.objectsCount = ctx->class_().size();
        klass.objects = new ObjInfo[klass.objectsCount];
        for (int i = 0; i < klass.objectsCount; ++i) {
            klass.objects[i] = any_cast<ObjInfo>(visitClass(ctx->class_(i)));
        }

        endLevel();
        classLevel--;
        return klass;
    }

    virtual std::any visitAccessor(AssemblyParser::AccessorContext *ctx) override {
        auto text = ctx->modifier->toString();
        const map<string, uint16> MODIFIER_TABLE = {
                {"PRIVATE",         0x0001},
                {"INTERNAL",        0x0002},
                {"PACKAGE_PRIVATE", 0x0004},
                {"PROTECTED",       0x0008},
                {"PUBLIC",          0x0010},
                {"ABSTRACT",        0x0020},
                {"FINAL",           0x0040},
                {"STATIC",          0x0080},
                {"INLINE",          0x0100},
        };
        return MODIFIER_TABLE.at(text);
    }

    virtual std::any visitField(AssemblyParser::FieldContext *ctx) override {
        FieldInfo field{};
        field.accessFlags = getAccessFlag(ctx->accessor());
        field.thisField = fromConstants(ctx->STRING(0)->toString());
        field.type = fromConstants(ctx->STRING(1)->toString());
        return field;
    }

    virtual std::any visitValue(AssemblyParser::ValueContext *ctx) override {
        CpInfo info{};
        if (ctx->NUMBER() != null) {
            info.tag = 0x04;
            info._int = stoi(ctx->NUMBER()->toString());
        } else if (ctx->STRING() != null) {
            return CpInfo::fromString(ctx->STRING()->toString());
        } else if (ctx->CSTRING() != null) {
            info.tag = 0x03;
            info._char = static_cast<uint8>(ctx->CSTRING()->toString()[1]);
        } else if (ctx->array() != null) {
            return CpInfo::fromArray(any_cast<vector<CpInfo>>(visitArray(ctx->array())));
        } else if (ctx->float_() != null) {
            info.tag = 0x05;
            auto d = any_cast<double>(visitFloat(ctx->float_()));
            info._float = reinterpret_cast<uint64 &>(d);
        }
        return info;
    }

    virtual std::any visitArray(AssemblyParser::ArrayContext *ctx) override {
        vector<CpInfo> array;
        for (auto value: ctx->value()) {
            array.push_back(any_cast<CpInfo>(visitValue(value)));
        }
        return array;
    }


    virtual std::any visitFloat(AssemblyParser::FloatContext *ctx) override {
        return stod(ctx->toString());
    }
};

