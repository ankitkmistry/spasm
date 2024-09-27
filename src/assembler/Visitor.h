
// Generated from H:/Programming (Ankit)/Projects/spade/1.0/spasm\Assembly.g4 by ANTLR 4.11.1

#pragma once

#include "../utils/exceptions.hpp"
#include "../utils/utils.hpp"
#include "antlr4-runtime.h"
#include "AssemblyVisitor.h"

/**
 * This class provides an empty implementation of AssemblyVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class AssemblyBaseVisitor : public AssemblyVisitor {
  private:
    class State {
      private:
        vector<uint8> code = {};
        std::map<string, uint32> labels = {};
        std::map<string, vector<uint32>> unresolvedLabels = {};
        vector<uint32> sourceLines = {};
        vector<uint32> marks = {};
        uint32 pc = 0;

      public:
        enum class Type { METHOD, CLASS, TOP } type;

        explicit State(Type type) : type(type) {}

        void addByte(uint8 byte, uint32 line);

        uint32 codeCount() { return code.size(); }

        uint8 *getCode() { return code.data(); }

        uint32 lineCount() { return sourceLines.size(); }

        MethodInfo::LineInfo getLineTable();

        void addLabel(const string &label);

        uint32 getLabel(const string &label) { return labels[label]; }

        void resolveLabels();

        static uint16 computeJump(uint32 labelLoc, uint32 cur);

        uint16 getJump(const string &label);

        void mark() { marks.push_back(pc); }

        uint32 getMark(uint32 location);
    };

    string compiledFrom;
    vector<State> states;
    string entry;
    string init;
    vector<CpInfo> constantPool = {};
    uint32 classLevel;

  public:
    explicit AssemblyBaseVisitor(string compiledFrom)
        : compiledFrom(std::move(compiledFrom)), states(), entry(), classLevel(0) {}

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
    std::any visitName(AssemblyParser::NameContext *context) override;
    std::any visitSignature(AssemblyParser::SignatureContext *context) override;
    std::any visitSignModule(AssemblyParser::SignModuleContext *context) override;
    std::any visitSignClass(AssemblyParser::SignClassContext *context) override;
    std::any visitSignMethod(AssemblyParser::SignMethodContext *context) override;
    std::any visitSignTypeParams(AssemblyParser::SignTypeParamsContext *context) override;
    std::any visitSignParams(AssemblyParser::SignParamsContext *context) override;
    std::any visitSignParam(AssemblyParser::SignParamContext *context) override;
};
