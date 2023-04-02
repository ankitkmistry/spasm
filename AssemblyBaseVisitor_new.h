
// Generated from H:/Programming (Ankit)/Projects/spade/1.0/spasm\Assembly.g4 by ANTLR 4.11.1

#pragma once

#include <stack>

#include "antlr4-runtime.h"
#include "AssemblyVisitor.h"
#include "loader/elfdef.hpp"
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
        vector<uint32> marks = {};
        uint32 pc;

    public:
        void addByte(uint8 byte);

        void addLabel(string label);

        void resolveLabels();

        uint16 computeJump(uint32 labelLoc, uint32 cur);

        uint16 getJump(string label);

        void mark() { marks.push_back(pc); }

        int getMark(uint32 location);

        const vector<CpInfo> &getConstantPool() const { return constantPool; }
    };

    ElpInfo elp = {};
    const string compiledFrom;
    stack<State> states = {};
    string entry;
    uint32 classLevel = 0;

public:
    explicit AssemblyBaseVisitor(const string &compiledFrom) : elp(), compiledFrom(compiledFrom) {}

    void newLevel() {
        states.push({});
    }

    cpidx fromConstants(const CpInfo cp) {
        auto pool = states.top().getConstantPool();
        cpidx i = 0;
        for (; i < pool.size(); i++)
            if (pool[i] == cp)
                return i;
        pool.push_back(cp);
        return i;
    }

    cpidx fromConstants(const string str) {
        return fromConstants(CpInfo::fromString(str));
    }

    cpidx fromConstants(const vector<CpInfo> array) {
        return fromConstants(CpInfo::fromArray(array));
    }

    virtual std::any visitAssembly(AssemblyParser::AssemblyContext *ctx) override {
        visitMetadata(ctx->metadata());
        visitGlobals(ctx->globals());
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
        // TODO: set entry of elp
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

    virtual std::any visitGlobals(AssemblyParser::GlobalsContext *ctx) override {
        elp.globalsCount = ctx->global().size();
        elp.globals = new GlobalInfo[elp.globalsCount];
        for (int i = 0; i < elp.globalsCount; ++i) {
            elp.globals[i] = any_cast<GlobalInfo>(visitGlobal(ctx->global(i)));
        }
        return null;
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
        auto state = states.top();
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

        method.exceptionTableCount = ctx->exceptionItem().size();
        method.exceptionTable = new MethodInfo::ExceptionTableInfo[method.exceptionTableCount];
        for (int i = 0; i < method.exceptionTableCount; ++i) {
            method.exceptionTable[i] = any_cast<MethodInfo::ExceptionTableInfo>(
                    visitExceptionItem(ctx->exceptionItem(i)));
        }

        return method;
    }

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
        auto state = states.top();
        string label = ctx->ID().size() == 2 ? ctx->ID(0)->toString() : "";
        Opcode opcode = ctx->ID().size() == 2
                        ? OpcodeInfo::fromString(ctx->ID(1)->toString())
                        : OpcodeInfo::fromString(ctx->ID(0)->toString());
        auto params = OpcodeInfo::getParams(opcode);

        // Mark the line
        state.mark();
        // Register the label
        if (!label.empty()) {
            state.addLabel(label);
        }
        // Append the opcode
        state.addByte(static_cast<uint8>(opcode));
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

        }
        return visitChildren(ctx);
    }

    virtual std::any visitExceptionItem(AssemblyParser::ExceptionItemContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitClass(AssemblyParser::ClassContext *ctx) override {
        classLevel++;
        classLevel--;
        return visitChildren(ctx);
    }

    virtual std::any visitAccessor(AssemblyParser::AccessorContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitFields(AssemblyParser::FieldsContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitField(AssemblyParser::FieldContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitValue(AssemblyParser::ValueContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitArray(AssemblyParser::ArrayContext *ctx) override {
        return visitChildren(ctx);
    }


    virtual std::any visitFloat(AssemblyParser::FloatContext *ctx) override {
        return visitChildren(ctx);
    }
};

