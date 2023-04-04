
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

        vector<CpInfo> &getConstantPool() { return constantPool; }
    };

    const string compiledFrom;
    vector<State> states;
    string entry;
    uint32 classLevel;

    /**
     * @returns A state nearest to the top of the state stack which as a populated constant pool
     * */
    State *getStateWithPool() {
        for (auto i = states.size() - 1; i >= 0; i--) {
            auto &state = states[i];
            if (state.type == State::Type::TOP || state.type == State::Type::CLASS) {
                return &state;
            }
        }
        throw Unreachable();
    }

public:
    explicit AssemblyBaseVisitor(const string &compiledFrom)
            : compiledFrom(compiledFrom), states(), entry(),
              classLevel(0) {}

    void newLevel(State::Type type) { states.emplace_back(type); }

    void endLevel() { states.pop_back(); }

    cpidx fromConstants(CpInfo cp);

    cpidx fromConstants(const string &str) { return fromConstants(CpInfo::fromString(str)); }

    cpidx fromConstants(const vector<CpInfo> &array) { return fromConstants(CpInfo::fromArray(array)); }

    /**
     * @returns The current state which present on the top of the states stack
     * */
    State &getState() { return states.end()[-1]; }

    std::any visitAssembly(AssemblyParser::AssemblyContext *ctx) override;

    std::any visitGlobal(AssemblyParser::GlobalContext *ctx) override;

    std::any visitMethod(AssemblyParser::MethodContext *ctx) override;

    std::any visitArg(AssemblyParser::ArgContext *ctx) override;

    std::any visitLocal(AssemblyParser::LocalContext *ctx) override;

    std::any visitLine(AssemblyParser::LineContext *ctx) override;

    std::any visitExceptionItem(AssemblyParser::ExceptionItemContext *ctx) override;

    uint16 getAccessFlag(const vector<AssemblyParser::AccessorContext *> &accessors);

    std::any visitClass(AssemblyParser::ClassContext *ctx) override;

    std::any visitAccessor(AssemblyParser::AccessorContext *ctx) override;

    std::any visitField(AssemblyParser::FieldContext *ctx) override;

    std::any visitValue(AssemblyParser::ValueContext *ctx) override;

    std::any visitArray(AssemblyParser::ArrayContext *ctx) override;

    std::any visitFloat(AssemblyParser::FloatContext *ctx) override;
};

