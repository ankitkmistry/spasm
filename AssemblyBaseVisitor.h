
// Generated from H:/Programming (Ankit)/Projects/spade/1.0/spasm\Assembly.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "AssemblyVisitor.h"


/**
 * This class provides an empty implementation of AssemblyVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  AssemblyBaseVisitor : public AssemblyVisitor {
public:

  virtual std::any visitAssembly(AssemblyParser::AssemblyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMetadata(AssemblyParser::MetadataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGlobals(AssemblyParser::GlobalsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGlobal(AssemblyParser::GlobalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod(AssemblyParser::MethodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg(AssemblyParser::ArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocal(AssemblyParser::LocalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine(AssemblyParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptionItem(AssemblyParser::ExceptionItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass(AssemblyParser::ClassContext *ctx) override {
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

