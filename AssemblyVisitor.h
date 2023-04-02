
// Generated from H:/Programming (Ankit)/Projects/spade/1.0/spasm\Assembly.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "AssemblyParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by AssemblyParser.
 */
class  AssemblyVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by AssemblyParser.
   */
    virtual std::any visitAssembly(AssemblyParser::AssemblyContext *context) = 0;

    virtual std::any visitMetadata(AssemblyParser::MetadataContext *context) = 0;

    virtual std::any visitGlobals(AssemblyParser::GlobalsContext *context) = 0;

    virtual std::any visitGlobal(AssemblyParser::GlobalContext *context) = 0;

    virtual std::any visitMethod(AssemblyParser::MethodContext *context) = 0;

    virtual std::any visitArg(AssemblyParser::ArgContext *context) = 0;

    virtual std::any visitLocal(AssemblyParser::LocalContext *context) = 0;

    virtual std::any visitLine(AssemblyParser::LineContext *context) = 0;

    virtual std::any visitExceptionItem(AssemblyParser::ExceptionItemContext *context) = 0;

    virtual std::any visitClass(AssemblyParser::ClassContext *context) = 0;

    virtual std::any visitAccessor(AssemblyParser::AccessorContext *context) = 0;

    virtual std::any visitFields(AssemblyParser::FieldsContext *context) = 0;

    virtual std::any visitField(AssemblyParser::FieldContext *context) = 0;

    virtual std::any visitValue(AssemblyParser::ValueContext *context) = 0;

    virtual std::any visitArray(AssemblyParser::ArrayContext *context) = 0;

    virtual std::any visitFloat(AssemblyParser::FloatContext *context) = 0;


};

