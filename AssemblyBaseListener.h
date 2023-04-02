
// Generated from H:/Programming (Ankit)/Projects/spade/1.0/spasm\Assembly.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "AssemblyListener.h"


/**
 * This class provides an empty implementation of AssemblyListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  AssemblyBaseListener : public AssemblyListener {
public:

  virtual void enterAssembly(AssemblyParser::AssemblyContext * /*ctx*/) override { }
  virtual void exitAssembly(AssemblyParser::AssemblyContext * /*ctx*/) override { }

  virtual void enterMetadata(AssemblyParser::MetadataContext * /*ctx*/) override { }
  virtual void exitMetadata(AssemblyParser::MetadataContext * /*ctx*/) override { }

  virtual void enterGlobals(AssemblyParser::GlobalsContext * /*ctx*/) override { }
  virtual void exitGlobals(AssemblyParser::GlobalsContext * /*ctx*/) override { }

  virtual void enterGlobal(AssemblyParser::GlobalContext * /*ctx*/) override { }
  virtual void exitGlobal(AssemblyParser::GlobalContext * /*ctx*/) override { }

  virtual void enterMethod(AssemblyParser::MethodContext * /*ctx*/) override { }
  virtual void exitMethod(AssemblyParser::MethodContext * /*ctx*/) override { }

  virtual void enterArg(AssemblyParser::ArgContext * /*ctx*/) override { }
  virtual void exitArg(AssemblyParser::ArgContext * /*ctx*/) override { }

  virtual void enterLocal(AssemblyParser::LocalContext * /*ctx*/) override { }
  virtual void exitLocal(AssemblyParser::LocalContext * /*ctx*/) override { }

  virtual void enterLine(AssemblyParser::LineContext * /*ctx*/) override { }
  virtual void exitLine(AssemblyParser::LineContext * /*ctx*/) override { }

  virtual void enterExceptionItem(AssemblyParser::ExceptionItemContext * /*ctx*/) override { }
  virtual void exitExceptionItem(AssemblyParser::ExceptionItemContext * /*ctx*/) override { }

  virtual void enterClass(AssemblyParser::ClassContext * /*ctx*/) override { }
  virtual void exitClass(AssemblyParser::ClassContext * /*ctx*/) override { }

  virtual void enterAccessor(AssemblyParser::AccessorContext * /*ctx*/) override { }
  virtual void exitAccessor(AssemblyParser::AccessorContext * /*ctx*/) override { }

  virtual void enterFields(AssemblyParser::FieldsContext * /*ctx*/) override { }
  virtual void exitFields(AssemblyParser::FieldsContext * /*ctx*/) override { }

  virtual void enterField(AssemblyParser::FieldContext * /*ctx*/) override { }
  virtual void exitField(AssemblyParser::FieldContext * /*ctx*/) override { }

  virtual void enterValue(AssemblyParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(AssemblyParser::ValueContext * /*ctx*/) override { }

  virtual void enterArray(AssemblyParser::ArrayContext * /*ctx*/) override { }
  virtual void exitArray(AssemblyParser::ArrayContext * /*ctx*/) override { }

  virtual void enterFloat(AssemblyParser::FloatContext * /*ctx*/) override { }
  virtual void exitFloat(AssemblyParser::FloatContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

