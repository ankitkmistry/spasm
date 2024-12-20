
// Generated from src/assembler/Assembly.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  AssemblyParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, NUMBER = 46, STRING = 47, CSTRING = 48, ID = 49, LABEL = 50, 
    WS = 51, COMMENT = 52
  };

  enum {
    RuleAssembly = 0, RuleGlobal = 1, RuleMethod = 2, RuleArg = 3, RuleLocal = 4, 
    RuleLine = 5, RuleExceptionItem = 6, RuleClass = 7, RuleAccessor = 8, 
    RuleField = 9, RuleValue = 10, RuleArray = 11, RuleFloat = 12, RuleName = 13, 
    RuleSignature = 14, RuleSignModule = 15, RuleSignClass = 16, RuleSignMethod = 17, 
    RuleSignParams = 18, RuleSignParam = 19, RuleSignTypeParams = 20
  };

  explicit AssemblyParser(antlr4::TokenStream *input);

  AssemblyParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~AssemblyParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class AssemblyContext;
  class GlobalContext;
  class MethodContext;
  class ArgContext;
  class LocalContext;
  class LineContext;
  class ExceptionItemContext;
  class ClassContext;
  class AccessorContext;
  class FieldContext;
  class ValueContext;
  class ArrayContext;
  class FloatContext;
  class NameContext;
  class SignatureContext;
  class SignModuleContext;
  class SignClassContext;
  class SignMethodContext;
  class SignParamsContext;
  class SignParamContext;
  class SignTypeParamsContext; 

  class  AssemblyContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *module = nullptr;
    AssemblyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *ID();
    ArrayContext *array();
    std::vector<MethodContext *> method();
    MethodContext* method(size_t i);
    std::vector<ClassContext *> class_();
    ClassContext* class_(size_t i);
    std::vector<GlobalContext *> global();
    GlobalContext* global(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyContext* assembly();

  class  GlobalContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    GlobalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    SignatureContext *signature();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalContext* global();

  class  MethodContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *kind = nullptr;
    MethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignatureContext *signature();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    std::vector<ArgContext *> arg();
    ArgContext* arg(size_t i);
    std::vector<LocalContext *> local();
    LocalContext* local(size_t i);
    std::vector<LineContext *> line();
    LineContext* line(size_t i);
    std::vector<ExceptionItemContext *> exceptionItem();
    ExceptionItemContext* exceptionItem(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodContext* method();

  class  ArgContext : public antlr4::ParserRuleContext {
  public:
    ArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    SignatureContext *signature();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgContext* arg();

  class  LocalContext : public antlr4::ParserRuleContext {
  public:
    LocalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    SignatureContext *signature();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalContext* local();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *label = nullptr;
    antlr4::Token *opcode = nullptr;
    antlr4::Token *dest = nullptr;
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ValueContext *value();
    std::vector<antlr4::tree::TerminalNode *> LABEL();
    antlr4::tree::TerminalNode* LABEL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

  class  ExceptionItemContext : public antlr4::ParserRuleContext {
  public:
    ExceptionItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    SignatureContext *signature();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionItemContext* exceptionItem();

  class  ClassContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    AssemblyParser::ArrayContext *supers = nullptr;
    ClassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignatureContext *signature();
    std::vector<AccessorContext *> accessor();
    AccessorContext* accessor(size_t i);
    std::vector<MethodContext *> method();
    MethodContext* method(size_t i);
    std::vector<ClassContext *> class_();
    ClassContext* class_(size_t i);
    ArrayContext *array();
    std::vector<FieldContext *> field();
    FieldContext* field(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassContext* class_();

  class  AccessorContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *modifier = nullptr;
    AccessorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessorContext* accessor();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    SignatureContext *signature();
    std::vector<AccessorContext *> accessor();
    AccessorContext* accessor(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldContext* field();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *CSTRING();
    ArrayContext *array();
    FloatContext *float_();
    SignatureContext *signature();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  ArrayContext : public antlr4::ParserRuleContext {
  public:
    ArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayContext* array();

  class  FloatContext : public antlr4::ParserRuleContext {
  public:
    FloatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatContext* float_();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  SignatureContext : public antlr4::ParserRuleContext {
  public:
    SignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignModuleContext *signModule();
    std::vector<SignClassContext *> signClass();
    SignClassContext* signClass(size_t i);
    std::vector<SignMethodContext *> signMethod();
    SignMethodContext* signMethod(size_t i);
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignatureContext* signature();

  class  SignModuleContext : public antlr4::ParserRuleContext {
  public:
    SignModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignModuleContext* signModule();

  class  SignClassContext : public antlr4::ParserRuleContext {
  public:
    SignClassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    SignTypeParamsContext *signTypeParams();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignClassContext* signClass();

  class  SignMethodContext : public antlr4::ParserRuleContext {
  public:
    SignMethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    SignParamsContext *signParams();
    SignTypeParamsContext *signTypeParams();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignMethodContext* signMethod();

  class  SignParamsContext : public antlr4::ParserRuleContext {
  public:
    SignParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SignParamContext *> signParam();
    SignParamContext* signParam(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignParamsContext* signParams();

  class  SignParamContext : public antlr4::ParserRuleContext {
  public:
    SignParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    SignParamsContext *signParams();
    SignModuleContext *signModule();
    std::vector<SignClassContext *> signClass();
    SignClassContext* signClass(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignParamContext* signParam();

  class  SignTypeParamsContext : public antlr4::ParserRuleContext {
  public:
    SignTypeParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignTypeParamsContext* signTypeParams();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

