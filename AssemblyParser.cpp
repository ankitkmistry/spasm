
// Generated from Assembly.g4 by ANTLR 4.12.0


#include "AssemblyVisitor.h"

#include "AssemblyParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct AssemblyParserStaticData final {
  AssemblyParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  AssemblyParserStaticData(const AssemblyParserStaticData&) = delete;
  AssemblyParserStaticData(AssemblyParserStaticData&&) = delete;
  AssemblyParserStaticData& operator=(const AssemblyParserStaticData&) = delete;
  AssemblyParserStaticData& operator=(AssemblyParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag assemblyParserOnceFlag;
AssemblyParserStaticData *assemblyParserStaticData = nullptr;

void assemblyParserInitialize() {
  assert(assemblyParserStaticData == nullptr);
  auto staticData = std::make_unique<AssemblyParserStaticData>(
    std::vector<std::string>{
      "assembly", "global", "method", "arg", "local", "line", "exceptionItem", 
      "class", "accessor", "field", "value", "array", "float"
    },
    std::vector<std::string>{
      "", "'imports'", "':'", "'globals'", "';'", "'VAR'", "'CONST'", "'entry'", 
      "'method'", "'args'", "'locals'", "'['", "'closureStart'", "']'", 
      "'maxstack'", "'code'", "'exceptionTable'", "'-'", "'->'", "'class'", 
      "'type'", "'CLASS'", "'INTERFACE'", "'ENUM'", "'ANNOTATION'", "'accessors'", 
      "'supers'", "'fields'", "'PRIVATE'", "'INTERNAL'", "'PACKAGE_PRIVATE'", 
      "'PROTECTED'", "'PUBLIC'", "'ABSTRACT'", "'FINAL'", "'STATIC'", "'INLINE'", 
      "','", "'.'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "NUMBER", "STRING", "CSTRING", "ID", "LABEL", 
      "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,45,237,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,0,3,0,30,
  	8,0,1,0,1,0,1,0,5,0,35,8,0,10,0,12,0,38,9,0,1,0,3,0,41,8,0,1,0,5,0,44,
  	8,0,10,0,12,0,47,9,0,1,0,5,0,50,8,0,10,0,12,0,53,9,0,1,0,1,0,1,1,1,1,
  	1,1,1,1,1,1,1,2,3,2,63,8,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,71,8,2,10,2,12,
  	2,74,9,2,1,2,3,2,77,8,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,85,8,2,1,2,1,2,5,
  	2,89,8,2,10,2,12,2,92,9,2,1,2,3,2,95,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	5,2,104,8,2,10,2,12,2,107,9,2,1,2,3,2,110,8,2,1,2,1,2,1,2,5,2,115,8,2,
  	10,2,12,2,118,9,2,1,2,3,2,121,8,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,
  	1,4,1,5,1,5,3,5,135,8,5,1,5,1,5,1,5,3,5,140,8,5,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,5,7,160,8,7,10,7,12,
  	7,163,9,7,1,7,1,7,1,7,3,7,168,8,7,1,7,1,7,1,7,5,7,173,8,7,10,7,12,7,176,
  	9,7,1,7,3,7,179,8,7,1,7,5,7,182,8,7,10,7,12,7,185,9,7,1,7,5,7,188,8,7,
  	10,7,12,7,191,9,7,1,7,1,7,1,8,1,8,1,9,5,9,198,8,9,10,9,12,9,201,9,9,1,
  	9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,3,10,213,8,10,1,11,1,11,1,
  	11,1,11,5,11,219,8,11,10,11,12,11,222,9,11,3,11,224,8,11,1,11,1,11,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,235,8,12,1,12,0,0,13,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,0,3,1,0,5,6,1,0,21,24,1,0,28,36,256,0,29,1,0,
  	0,0,2,56,1,0,0,0,4,62,1,0,0,0,6,124,1,0,0,0,8,128,1,0,0,0,10,134,1,0,
  	0,0,12,141,1,0,0,0,14,149,1,0,0,0,16,194,1,0,0,0,18,199,1,0,0,0,20,212,
  	1,0,0,0,22,214,1,0,0,0,24,234,1,0,0,0,26,27,5,1,0,0,27,28,5,2,0,0,28,
  	30,3,22,11,0,29,26,1,0,0,0,29,30,1,0,0,0,30,40,1,0,0,0,31,32,5,3,0,0,
  	32,36,5,2,0,0,33,35,3,2,1,0,34,33,1,0,0,0,35,38,1,0,0,0,36,34,1,0,0,0,
  	36,37,1,0,0,0,37,39,1,0,0,0,38,36,1,0,0,0,39,41,5,4,0,0,40,31,1,0,0,0,
  	40,41,1,0,0,0,41,45,1,0,0,0,42,44,3,4,2,0,43,42,1,0,0,0,44,47,1,0,0,0,
  	45,43,1,0,0,0,45,46,1,0,0,0,46,51,1,0,0,0,47,45,1,0,0,0,48,50,3,14,7,
  	0,49,48,1,0,0,0,50,53,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,52,54,1,0,0,
  	0,53,51,1,0,0,0,54,55,5,0,0,1,55,1,1,0,0,0,56,57,7,0,0,0,57,58,5,40,0,
  	0,58,59,5,2,0,0,59,60,5,40,0,0,60,3,1,0,0,0,61,63,5,7,0,0,62,61,1,0,0,
  	0,62,63,1,0,0,0,63,64,1,0,0,0,64,65,5,8,0,0,65,66,5,40,0,0,66,76,5,2,
  	0,0,67,68,5,9,0,0,68,72,5,2,0,0,69,71,3,6,3,0,70,69,1,0,0,0,71,74,1,0,
  	0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,75,1,0,0,0,74,72,1,0,0,0,75,77,5,4,
  	0,0,76,67,1,0,0,0,76,77,1,0,0,0,77,94,1,0,0,0,78,84,5,10,0,0,79,80,5,
  	11,0,0,80,81,5,12,0,0,81,82,5,2,0,0,82,83,5,39,0,0,83,85,5,13,0,0,84,
  	79,1,0,0,0,84,85,1,0,0,0,85,86,1,0,0,0,86,90,5,2,0,0,87,89,3,8,4,0,88,
  	87,1,0,0,0,89,92,1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,93,1,0,0,0,92,
  	90,1,0,0,0,93,95,5,4,0,0,94,78,1,0,0,0,94,95,1,0,0,0,95,96,1,0,0,0,96,
  	97,5,14,0,0,97,98,5,2,0,0,98,99,5,39,0,0,99,109,5,4,0,0,100,101,5,15,
  	0,0,101,105,5,2,0,0,102,104,3,10,5,0,103,102,1,0,0,0,104,107,1,0,0,0,
  	105,103,1,0,0,0,105,106,1,0,0,0,106,108,1,0,0,0,107,105,1,0,0,0,108,110,
  	5,4,0,0,109,100,1,0,0,0,109,110,1,0,0,0,110,120,1,0,0,0,111,112,5,16,
  	0,0,112,116,5,2,0,0,113,115,3,12,6,0,114,113,1,0,0,0,115,118,1,0,0,0,
  	116,114,1,0,0,0,116,117,1,0,0,0,117,119,1,0,0,0,118,116,1,0,0,0,119,121,
  	5,4,0,0,120,111,1,0,0,0,120,121,1,0,0,0,121,122,1,0,0,0,122,123,5,4,0,
  	0,123,5,1,0,0,0,124,125,5,40,0,0,125,126,5,2,0,0,126,127,5,40,0,0,127,
  	7,1,0,0,0,128,129,5,40,0,0,129,130,5,2,0,0,130,131,5,40,0,0,131,9,1,0,
  	0,0,132,133,5,43,0,0,133,135,5,2,0,0,134,132,1,0,0,0,134,135,1,0,0,0,
  	135,136,1,0,0,0,136,139,5,42,0,0,137,140,3,20,10,0,138,140,5,43,0,0,139,
  	137,1,0,0,0,139,138,1,0,0,0,139,140,1,0,0,0,140,11,1,0,0,0,141,142,5,
  	42,0,0,142,143,5,17,0,0,143,144,5,42,0,0,144,145,5,18,0,0,145,146,5,42,
  	0,0,146,147,5,2,0,0,147,148,5,40,0,0,148,13,1,0,0,0,149,150,5,19,0,0,
  	150,151,5,40,0,0,151,152,5,2,0,0,152,153,5,20,0,0,153,154,5,2,0,0,154,
  	155,7,1,0,0,155,156,5,4,0,0,156,157,5,25,0,0,157,161,5,2,0,0,158,160,
  	3,16,8,0,159,158,1,0,0,0,160,163,1,0,0,0,161,159,1,0,0,0,161,162,1,0,
  	0,0,162,167,1,0,0,0,163,161,1,0,0,0,164,165,5,26,0,0,165,166,5,2,0,0,
  	166,168,3,22,11,0,167,164,1,0,0,0,167,168,1,0,0,0,168,178,1,0,0,0,169,
  	170,5,27,0,0,170,174,5,2,0,0,171,173,3,18,9,0,172,171,1,0,0,0,173,176,
  	1,0,0,0,174,172,1,0,0,0,174,175,1,0,0,0,175,177,1,0,0,0,176,174,1,0,0,
  	0,177,179,5,4,0,0,178,169,1,0,0,0,178,179,1,0,0,0,179,183,1,0,0,0,180,
  	182,3,4,2,0,181,180,1,0,0,0,182,185,1,0,0,0,183,181,1,0,0,0,183,184,1,
  	0,0,0,184,189,1,0,0,0,185,183,1,0,0,0,186,188,3,14,7,0,187,186,1,0,0,
  	0,188,191,1,0,0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,192,1,0,0,0,191,
  	189,1,0,0,0,192,193,5,4,0,0,193,15,1,0,0,0,194,195,7,2,0,0,195,17,1,0,
  	0,0,196,198,3,16,8,0,197,196,1,0,0,0,198,201,1,0,0,0,199,197,1,0,0,0,
  	199,200,1,0,0,0,200,202,1,0,0,0,201,199,1,0,0,0,202,203,7,0,0,0,203,204,
  	5,40,0,0,204,205,5,2,0,0,205,206,5,40,0,0,206,19,1,0,0,0,207,213,5,39,
  	0,0,208,213,5,40,0,0,209,213,5,41,0,0,210,213,3,22,11,0,211,213,3,24,
  	12,0,212,207,1,0,0,0,212,208,1,0,0,0,212,209,1,0,0,0,212,210,1,0,0,0,
  	212,211,1,0,0,0,213,21,1,0,0,0,214,223,5,11,0,0,215,220,3,20,10,0,216,
  	217,5,37,0,0,217,219,3,20,10,0,218,216,1,0,0,0,219,222,1,0,0,0,220,218,
  	1,0,0,0,220,221,1,0,0,0,221,224,1,0,0,0,222,220,1,0,0,0,223,215,1,0,0,
  	0,223,224,1,0,0,0,224,225,1,0,0,0,225,226,5,13,0,0,226,23,1,0,0,0,227,
  	228,5,39,0,0,228,229,5,38,0,0,229,235,5,39,0,0,230,231,5,39,0,0,231,235,
  	5,38,0,0,232,233,5,38,0,0,233,235,5,39,0,0,234,227,1,0,0,0,234,230,1,
  	0,0,0,234,232,1,0,0,0,235,25,1,0,0,0,28,29,36,40,45,51,62,72,76,84,90,
  	94,105,109,116,120,134,139,161,167,174,178,183,189,199,212,220,223,234
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  assemblyParserStaticData = staticData.release();
}

}

AssemblyParser::AssemblyParser(TokenStream *input) : AssemblyParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

AssemblyParser::AssemblyParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  AssemblyParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *assemblyParserStaticData->atn, assemblyParserStaticData->decisionToDFA, assemblyParserStaticData->sharedContextCache, options);
}

AssemblyParser::~AssemblyParser() {
  delete _interpreter;
}

const atn::ATN& AssemblyParser::getATN() const {
  return *assemblyParserStaticData->atn;
}

std::string AssemblyParser::getGrammarFileName() const {
  return "Assembly.g4";
}

const std::vector<std::string>& AssemblyParser::getRuleNames() const {
  return assemblyParserStaticData->ruleNames;
}

const dfa::Vocabulary& AssemblyParser::getVocabulary() const {
  return assemblyParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView AssemblyParser::getSerializedATN() const {
  return assemblyParserStaticData->serializedATN;
}


//----------------- AssemblyContext ------------------------------------------------------------------

AssemblyParser::AssemblyContext::AssemblyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AssemblyParser::AssemblyContext::EOF() {
  return getToken(AssemblyParser::EOF, 0);
}

AssemblyParser::ArrayContext* AssemblyParser::AssemblyContext::array() {
  return getRuleContext<AssemblyParser::ArrayContext>(0);
}

std::vector<AssemblyParser::MethodContext *> AssemblyParser::AssemblyContext::method() {
  return getRuleContexts<AssemblyParser::MethodContext>();
}

AssemblyParser::MethodContext* AssemblyParser::AssemblyContext::method(size_t i) {
  return getRuleContext<AssemblyParser::MethodContext>(i);
}

std::vector<AssemblyParser::ClassContext *> AssemblyParser::AssemblyContext::class_() {
  return getRuleContexts<AssemblyParser::ClassContext>();
}

AssemblyParser::ClassContext* AssemblyParser::AssemblyContext::class_(size_t i) {
  return getRuleContext<AssemblyParser::ClassContext>(i);
}

std::vector<AssemblyParser::GlobalContext *> AssemblyParser::AssemblyContext::global() {
  return getRuleContexts<AssemblyParser::GlobalContext>();
}

AssemblyParser::GlobalContext* AssemblyParser::AssemblyContext::global(size_t i) {
  return getRuleContext<AssemblyParser::GlobalContext>(i);
}


size_t AssemblyParser::AssemblyContext::getRuleIndex() const {
  return AssemblyParser::RuleAssembly;
}


std::any AssemblyParser::AssemblyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitAssembly(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::AssemblyContext* AssemblyParser::assembly() {
  AssemblyContext *_localctx = _tracker.createInstance<AssemblyContext>(_ctx, getState());
  enterRule(_localctx, 0, AssemblyParser::RuleAssembly);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__0) {
      setState(26);
      match(AssemblyParser::T__0);
      setState(27);
      match(AssemblyParser::T__1);
      setState(28);
      array();
    }
    setState(40);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__2) {
      setState(31);
      match(AssemblyParser::T__2);
      setState(32);
      match(AssemblyParser::T__1);
      setState(36);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__4

      || _la == AssemblyParser::T__5) {
        setState(33);
        global();
        setState(38);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(39);
      match(AssemblyParser::T__3);
    }
    setState(45);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__6

    || _la == AssemblyParser::T__7) {
      setState(42);
      method();
      setState(47);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__18) {
      setState(48);
      class_();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
    match(AssemblyParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalContext ------------------------------------------------------------------

AssemblyParser::GlobalContext::GlobalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AssemblyParser::GlobalContext::STRING() {
  return getTokens(AssemblyParser::STRING);
}

tree::TerminalNode* AssemblyParser::GlobalContext::STRING(size_t i) {
  return getToken(AssemblyParser::STRING, i);
}


size_t AssemblyParser::GlobalContext::getRuleIndex() const {
  return AssemblyParser::RuleGlobal;
}


std::any AssemblyParser::GlobalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitGlobal(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::GlobalContext* AssemblyParser::global() {
  GlobalContext *_localctx = _tracker.createInstance<GlobalContext>(_ctx, getState());
  enterRule(_localctx, 2, AssemblyParser::RuleGlobal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    antlrcpp::downCast<GlobalContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == AssemblyParser::T__4

    || _la == AssemblyParser::T__5)) {
      antlrcpp::downCast<GlobalContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(57);
    match(AssemblyParser::STRING);
    setState(58);
    match(AssemblyParser::T__1);
    setState(59);
    match(AssemblyParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodContext ------------------------------------------------------------------

AssemblyParser::MethodContext::MethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AssemblyParser::MethodContext::STRING() {
  return getToken(AssemblyParser::STRING, 0);
}

std::vector<tree::TerminalNode *> AssemblyParser::MethodContext::NUMBER() {
  return getTokens(AssemblyParser::NUMBER);
}

tree::TerminalNode* AssemblyParser::MethodContext::NUMBER(size_t i) {
  return getToken(AssemblyParser::NUMBER, i);
}

std::vector<AssemblyParser::ArgContext *> AssemblyParser::MethodContext::arg() {
  return getRuleContexts<AssemblyParser::ArgContext>();
}

AssemblyParser::ArgContext* AssemblyParser::MethodContext::arg(size_t i) {
  return getRuleContext<AssemblyParser::ArgContext>(i);
}

std::vector<AssemblyParser::LocalContext *> AssemblyParser::MethodContext::local() {
  return getRuleContexts<AssemblyParser::LocalContext>();
}

AssemblyParser::LocalContext* AssemblyParser::MethodContext::local(size_t i) {
  return getRuleContext<AssemblyParser::LocalContext>(i);
}

std::vector<AssemblyParser::LineContext *> AssemblyParser::MethodContext::line() {
  return getRuleContexts<AssemblyParser::LineContext>();
}

AssemblyParser::LineContext* AssemblyParser::MethodContext::line(size_t i) {
  return getRuleContext<AssemblyParser::LineContext>(i);
}

std::vector<AssemblyParser::ExceptionItemContext *> AssemblyParser::MethodContext::exceptionItem() {
  return getRuleContexts<AssemblyParser::ExceptionItemContext>();
}

AssemblyParser::ExceptionItemContext* AssemblyParser::MethodContext::exceptionItem(size_t i) {
  return getRuleContext<AssemblyParser::ExceptionItemContext>(i);
}


size_t AssemblyParser::MethodContext::getRuleIndex() const {
  return AssemblyParser::RuleMethod;
}


std::any AssemblyParser::MethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitMethod(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::MethodContext* AssemblyParser::method() {
  MethodContext *_localctx = _tracker.createInstance<MethodContext>(_ctx, getState());
  enterRule(_localctx, 4, AssemblyParser::RuleMethod);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__6) {
      setState(61);
      antlrcpp::downCast<MethodContext *>(_localctx)->entry = match(AssemblyParser::T__6);
    }
    setState(64);
    match(AssemblyParser::T__7);
    setState(65);
    match(AssemblyParser::STRING);
    setState(66);
    match(AssemblyParser::T__1);
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__8) {
      setState(67);
      match(AssemblyParser::T__8);
      setState(68);
      match(AssemblyParser::T__1);
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::STRING) {
        setState(69);
        arg();
        setState(74);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(75);
      match(AssemblyParser::T__3);
    }
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__9) {
      setState(78);
      match(AssemblyParser::T__9);
      setState(84);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AssemblyParser::T__10) {
        setState(79);
        match(AssemblyParser::T__10);
        setState(80);
        match(AssemblyParser::T__11);
        setState(81);
        match(AssemblyParser::T__1);
        setState(82);
        match(AssemblyParser::NUMBER);
        setState(83);
        match(AssemblyParser::T__12);
      }
      setState(86);
      match(AssemblyParser::T__1);
      setState(90);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::STRING) {
        setState(87);
        local();
        setState(92);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(93);
      match(AssemblyParser::T__3);
    }
    setState(96);
    match(AssemblyParser::T__13);
    setState(97);
    match(AssemblyParser::T__1);
    setState(98);
    match(AssemblyParser::NUMBER);
    setState(99);
    match(AssemblyParser::T__3);
    setState(109);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__14) {
      setState(100);
      match(AssemblyParser::T__14);
      setState(101);
      match(AssemblyParser::T__1);
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::ID

      || _la == AssemblyParser::LABEL) {
        setState(102);
        line();
        setState(107);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(108);
      match(AssemblyParser::T__3);
    }
    setState(120);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__15) {
      setState(111);
      match(AssemblyParser::T__15);
      setState(112);
      match(AssemblyParser::T__1);
      setState(116);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::ID) {
        setState(113);
        exceptionItem();
        setState(118);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(119);
      match(AssemblyParser::T__3);
    }
    setState(122);
    match(AssemblyParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgContext ------------------------------------------------------------------

AssemblyParser::ArgContext::ArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AssemblyParser::ArgContext::STRING() {
  return getTokens(AssemblyParser::STRING);
}

tree::TerminalNode* AssemblyParser::ArgContext::STRING(size_t i) {
  return getToken(AssemblyParser::STRING, i);
}


size_t AssemblyParser::ArgContext::getRuleIndex() const {
  return AssemblyParser::RuleArg;
}


std::any AssemblyParser::ArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitArg(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::ArgContext* AssemblyParser::arg() {
  ArgContext *_localctx = _tracker.createInstance<ArgContext>(_ctx, getState());
  enterRule(_localctx, 6, AssemblyParser::RuleArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    match(AssemblyParser::STRING);
    setState(125);
    match(AssemblyParser::T__1);
    setState(126);
    match(AssemblyParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalContext ------------------------------------------------------------------

AssemblyParser::LocalContext::LocalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AssemblyParser::LocalContext::STRING() {
  return getTokens(AssemblyParser::STRING);
}

tree::TerminalNode* AssemblyParser::LocalContext::STRING(size_t i) {
  return getToken(AssemblyParser::STRING, i);
}


size_t AssemblyParser::LocalContext::getRuleIndex() const {
  return AssemblyParser::RuleLocal;
}


std::any AssemblyParser::LocalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitLocal(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::LocalContext* AssemblyParser::local() {
  LocalContext *_localctx = _tracker.createInstance<LocalContext>(_ctx, getState());
  enterRule(_localctx, 8, AssemblyParser::RuleLocal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(AssemblyParser::STRING);
    setState(129);
    match(AssemblyParser::T__1);
    setState(130);
    match(AssemblyParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

AssemblyParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AssemblyParser::LineContext::ID() {
  return getToken(AssemblyParser::ID, 0);
}

AssemblyParser::ValueContext* AssemblyParser::LineContext::value() {
  return getRuleContext<AssemblyParser::ValueContext>(0);
}

std::vector<tree::TerminalNode *> AssemblyParser::LineContext::LABEL() {
  return getTokens(AssemblyParser::LABEL);
}

tree::TerminalNode* AssemblyParser::LineContext::LABEL(size_t i) {
  return getToken(AssemblyParser::LABEL, i);
}


size_t AssemblyParser::LineContext::getRuleIndex() const {
  return AssemblyParser::RuleLine;
}


std::any AssemblyParser::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::LineContext* AssemblyParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 10, AssemblyParser::RuleLine);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::LABEL) {
      setState(132);
      antlrcpp::downCast<LineContext *>(_localctx)->label = match(AssemblyParser::LABEL);
      setState(133);
      match(AssemblyParser::T__1);
    }
    setState(136);
    antlrcpp::downCast<LineContext *>(_localctx)->opcode = match(AssemblyParser::ID);
    setState(139);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(137);
      value();
      break;
    }

    case 2: {
      setState(138);
      antlrcpp::downCast<LineContext *>(_localctx)->dest = match(AssemblyParser::LABEL);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionItemContext ------------------------------------------------------------------

AssemblyParser::ExceptionItemContext::ExceptionItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AssemblyParser::ExceptionItemContext::ID() {
  return getTokens(AssemblyParser::ID);
}

tree::TerminalNode* AssemblyParser::ExceptionItemContext::ID(size_t i) {
  return getToken(AssemblyParser::ID, i);
}

tree::TerminalNode* AssemblyParser::ExceptionItemContext::STRING() {
  return getToken(AssemblyParser::STRING, 0);
}


size_t AssemblyParser::ExceptionItemContext::getRuleIndex() const {
  return AssemblyParser::RuleExceptionItem;
}


std::any AssemblyParser::ExceptionItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitExceptionItem(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::ExceptionItemContext* AssemblyParser::exceptionItem() {
  ExceptionItemContext *_localctx = _tracker.createInstance<ExceptionItemContext>(_ctx, getState());
  enterRule(_localctx, 12, AssemblyParser::RuleExceptionItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(AssemblyParser::ID);
    setState(142);
    match(AssemblyParser::T__16);
    setState(143);
    match(AssemblyParser::ID);
    setState(144);
    match(AssemblyParser::T__17);
    setState(145);
    match(AssemblyParser::ID);
    setState(146);
    match(AssemblyParser::T__1);
    setState(147);
    match(AssemblyParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassContext ------------------------------------------------------------------

AssemblyParser::ClassContext::ClassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AssemblyParser::ClassContext::STRING() {
  return getToken(AssemblyParser::STRING, 0);
}

std::vector<AssemblyParser::AccessorContext *> AssemblyParser::ClassContext::accessor() {
  return getRuleContexts<AssemblyParser::AccessorContext>();
}

AssemblyParser::AccessorContext* AssemblyParser::ClassContext::accessor(size_t i) {
  return getRuleContext<AssemblyParser::AccessorContext>(i);
}

std::vector<AssemblyParser::MethodContext *> AssemblyParser::ClassContext::method() {
  return getRuleContexts<AssemblyParser::MethodContext>();
}

AssemblyParser::MethodContext* AssemblyParser::ClassContext::method(size_t i) {
  return getRuleContext<AssemblyParser::MethodContext>(i);
}

std::vector<AssemblyParser::ClassContext *> AssemblyParser::ClassContext::class_() {
  return getRuleContexts<AssemblyParser::ClassContext>();
}

AssemblyParser::ClassContext* AssemblyParser::ClassContext::class_(size_t i) {
  return getRuleContext<AssemblyParser::ClassContext>(i);
}

AssemblyParser::ArrayContext* AssemblyParser::ClassContext::array() {
  return getRuleContext<AssemblyParser::ArrayContext>(0);
}

std::vector<AssemblyParser::FieldContext *> AssemblyParser::ClassContext::field() {
  return getRuleContexts<AssemblyParser::FieldContext>();
}

AssemblyParser::FieldContext* AssemblyParser::ClassContext::field(size_t i) {
  return getRuleContext<AssemblyParser::FieldContext>(i);
}


size_t AssemblyParser::ClassContext::getRuleIndex() const {
  return AssemblyParser::RuleClass;
}


std::any AssemblyParser::ClassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitClass(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::ClassContext* AssemblyParser::class_() {
  ClassContext *_localctx = _tracker.createInstance<ClassContext>(_ctx, getState());
  enterRule(_localctx, 14, AssemblyParser::RuleClass);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(AssemblyParser::T__18);
    setState(150);
    match(AssemblyParser::STRING);
    setState(151);
    match(AssemblyParser::T__1);
    setState(152);
    match(AssemblyParser::T__19);
    setState(153);
    match(AssemblyParser::T__1);
    setState(154);
    antlrcpp::downCast<ClassContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31457280) != 0))) {
      antlrcpp::downCast<ClassContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(155);
    match(AssemblyParser::T__3);
    setState(156);
    match(AssemblyParser::T__24);
    setState(157);
    match(AssemblyParser::T__1);
    setState(161);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137170518016) != 0)) {
      setState(158);
      accessor();
      setState(163);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__25) {
      setState(164);
      match(AssemblyParser::T__25);
      setState(165);
      match(AssemblyParser::T__1);
      setState(166);
      antlrcpp::downCast<ClassContext *>(_localctx)->supers = array();
    }
    setState(178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__26) {
      setState(169);
      match(AssemblyParser::T__26);
      setState(170);
      match(AssemblyParser::T__1);
      setState(174);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 137170518112) != 0)) {
        setState(171);
        field();
        setState(176);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(177);
      match(AssemblyParser::T__3);
    }
    setState(183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__6

    || _la == AssemblyParser::T__7) {
      setState(180);
      method();
      setState(185);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(189);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__18) {
      setState(186);
      class_();
      setState(191);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(192);
    match(AssemblyParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessorContext ------------------------------------------------------------------

AssemblyParser::AccessorContext::AccessorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AssemblyParser::AccessorContext::getRuleIndex() const {
  return AssemblyParser::RuleAccessor;
}


std::any AssemblyParser::AccessorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitAccessor(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::AccessorContext* AssemblyParser::accessor() {
  AccessorContext *_localctx = _tracker.createInstance<AccessorContext>(_ctx, getState());
  enterRule(_localctx, 16, AssemblyParser::RuleAccessor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    antlrcpp::downCast<AccessorContext *>(_localctx)->modifier = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137170518016) != 0))) {
      antlrcpp::downCast<AccessorContext *>(_localctx)->modifier = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

AssemblyParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AssemblyParser::FieldContext::STRING() {
  return getTokens(AssemblyParser::STRING);
}

tree::TerminalNode* AssemblyParser::FieldContext::STRING(size_t i) {
  return getToken(AssemblyParser::STRING, i);
}

std::vector<AssemblyParser::AccessorContext *> AssemblyParser::FieldContext::accessor() {
  return getRuleContexts<AssemblyParser::AccessorContext>();
}

AssemblyParser::AccessorContext* AssemblyParser::FieldContext::accessor(size_t i) {
  return getRuleContext<AssemblyParser::AccessorContext>(i);
}


size_t AssemblyParser::FieldContext::getRuleIndex() const {
  return AssemblyParser::RuleField;
}


std::any AssemblyParser::FieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitField(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::FieldContext* AssemblyParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 18, AssemblyParser::RuleField);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137170518016) != 0)) {
      setState(196);
      accessor();
      setState(201);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(202);
    antlrcpp::downCast<FieldContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == AssemblyParser::T__4

    || _la == AssemblyParser::T__5)) {
      antlrcpp::downCast<FieldContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(203);
    match(AssemblyParser::STRING);
    setState(204);
    match(AssemblyParser::T__1);
    setState(205);
    match(AssemblyParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

AssemblyParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AssemblyParser::ValueContext::NUMBER() {
  return getToken(AssemblyParser::NUMBER, 0);
}

tree::TerminalNode* AssemblyParser::ValueContext::STRING() {
  return getToken(AssemblyParser::STRING, 0);
}

tree::TerminalNode* AssemblyParser::ValueContext::CSTRING() {
  return getToken(AssemblyParser::CSTRING, 0);
}

AssemblyParser::ArrayContext* AssemblyParser::ValueContext::array() {
  return getRuleContext<AssemblyParser::ArrayContext>(0);
}

AssemblyParser::FloatContext* AssemblyParser::ValueContext::float_() {
  return getRuleContext<AssemblyParser::FloatContext>(0);
}


size_t AssemblyParser::ValueContext::getRuleIndex() const {
  return AssemblyParser::RuleValue;
}


std::any AssemblyParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::ValueContext* AssemblyParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 20, AssemblyParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(212);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(207);
      match(AssemblyParser::NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(208);
      match(AssemblyParser::STRING);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(209);
      match(AssemblyParser::CSTRING);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(210);
      array();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(211);
      float_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayContext ------------------------------------------------------------------

AssemblyParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AssemblyParser::ValueContext *> AssemblyParser::ArrayContext::value() {
  return getRuleContexts<AssemblyParser::ValueContext>();
}

AssemblyParser::ValueContext* AssemblyParser::ArrayContext::value(size_t i) {
  return getRuleContext<AssemblyParser::ValueContext>(i);
}


size_t AssemblyParser::ArrayContext::getRuleIndex() const {
  return AssemblyParser::RuleArray;
}


std::any AssemblyParser::ArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitArray(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::ArrayContext* AssemblyParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 22, AssemblyParser::RuleArray);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    match(AssemblyParser::T__10);
    setState(223);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4123168606208) != 0)) {
      setState(215);
      value();
      setState(220);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__36) {
        setState(216);
        match(AssemblyParser::T__36);
        setState(217);
        value();
        setState(222);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(225);
    match(AssemblyParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatContext ------------------------------------------------------------------

AssemblyParser::FloatContext::FloatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AssemblyParser::FloatContext::NUMBER() {
  return getTokens(AssemblyParser::NUMBER);
}

tree::TerminalNode* AssemblyParser::FloatContext::NUMBER(size_t i) {
  return getToken(AssemblyParser::NUMBER, i);
}


size_t AssemblyParser::FloatContext::getRuleIndex() const {
  return AssemblyParser::RuleFloat;
}


std::any AssemblyParser::FloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitFloat(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::FloatContext* AssemblyParser::float_() {
  FloatContext *_localctx = _tracker.createInstance<FloatContext>(_ctx, getState());
  enterRule(_localctx, 24, AssemblyParser::RuleFloat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(234);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(227);
      match(AssemblyParser::NUMBER);
      setState(228);
      match(AssemblyParser::T__37);
      setState(229);
      match(AssemblyParser::NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(230);
      match(AssemblyParser::NUMBER);
      setState(231);
      match(AssemblyParser::T__37);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(232);
      match(AssemblyParser::T__37);
      setState(233);
      match(AssemblyParser::NUMBER);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void AssemblyParser::initialize() {
  ::antlr4::internal::call_once(assemblyParserOnceFlag, assemblyParserInitialize);
}
