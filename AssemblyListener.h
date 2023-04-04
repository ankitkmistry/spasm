
// Generated from H:/Programming (Ankit)/Projects/spade/1.0/spasm\Assembly.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "AssemblyParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by AssemblyParser.
 */
class  AssemblyListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterAssembly(AssemblyParser::AssemblyContext *ctx) = 0;
  virtual void exitAssembly(AssemblyParser::AssemblyContext *ctx) = 0;

  virtual void enterGlobal(AssemblyParser::GlobalContext *ctx) = 0;
  virtual void exitGlobal(AssemblyParser::GlobalContext *ctx) = 0;

  virtual void enterMethod(AssemblyParser::MethodContext *ctx) = 0;
  virtual void exitMethod(AssemblyParser::MethodContext *ctx) = 0;

  virtual void enterArg(AssemblyParser::ArgContext *ctx) = 0;
  virtual void exitArg(AssemblyParser::ArgContext *ctx) = 0;

  virtual void enterLocal(AssemblyParser::LocalContext *ctx) = 0;
  virtual void exitLocal(AssemblyParser::LocalContext *ctx) = 0;

  virtual void enterLine(AssemblyParser::LineContext *ctx) = 0;
  virtual void exitLine(AssemblyParser::LineContext *ctx) = 0;

  virtual void enterExceptionItem(AssemblyParser::ExceptionItemContext *ctx) = 0;
  virtual void exitExceptionItem(AssemblyParser::ExceptionItemContext *ctx) = 0;

  virtual void enterClass(AssemblyParser::ClassContext *ctx) = 0;
  virtual void exitClass(AssemblyParser::ClassContext *ctx) = 0;

  virtual void enterAccessor(AssemblyParser::AccessorContext *ctx) = 0;
  virtual void exitAccessor(AssemblyParser::AccessorContext *ctx) = 0;

  virtual void enterField(AssemblyParser::FieldContext *ctx) = 0;
  virtual void exitField(AssemblyParser::FieldContext *ctx) = 0;

  virtual void enterValue(AssemblyParser::ValueContext *ctx) = 0;
  virtual void exitValue(AssemblyParser::ValueContext *ctx) = 0;

  virtual void enterArray(AssemblyParser::ArrayContext *ctx) = 0;
  virtual void exitArray(AssemblyParser::ArrayContext *ctx) = 0;

  virtual void enterFloat(AssemblyParser::FloatContext *ctx) = 0;
  virtual void exitFloat(AssemblyParser::FloatContext *ctx) = 0;


};

