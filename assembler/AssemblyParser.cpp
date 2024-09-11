
// Generated from assembler/Assembly.g4 by ANTLR 4.12.0


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
      "", "'module'", "':'", "'imports'", "'globals'", "';'", "'VAR'", "'CONST'", 
      "'entry'", "'init'", "'method'", "'args'", "'locals'", "'['", "'closureStart'", 
      "']'", "'maxstack'", "'code'", "'exceptionTable'", "'-'", "'->'", 
      "'class'", "'type'", "'CLASS'", "'INTERFACE'", "'ENUM'", "'ANNOTATION'", 
      "'accessors'", "'supers'", "'fields'", "'PRIVATE'", "'INTERNAL'", 
      "'PACKAGE_PRIVATE'", "'PROTECTED'", "'PUBLIC'", "'ABSTRACT'", "'FINAL'", 
      "'STATIC'", "'INLINE'", "','", "'.'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "NUMBER", "STRING", "CSTRING", "ID", "LABEL", 
      "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,47,244,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,0,1,0,1,
  	0,1,0,1,0,3,0,34,8,0,1,0,1,0,1,0,5,0,39,8,0,10,0,12,0,42,9,0,1,0,3,0,
  	45,8,0,1,0,5,0,48,8,0,10,0,12,0,51,9,0,1,0,5,0,54,8,0,10,0,12,0,57,9,
  	0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,3,2,67,8,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	5,2,75,8,2,10,2,12,2,78,9,2,1,2,3,2,81,8,2,1,2,1,2,1,2,1,2,1,2,1,2,3,
  	2,89,8,2,1,2,1,2,5,2,93,8,2,10,2,12,2,96,9,2,1,2,3,2,99,8,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,5,2,108,8,2,10,2,12,2,111,9,2,1,2,3,2,114,8,2,1,2,1,
  	2,1,2,5,2,119,8,2,10,2,12,2,122,9,2,1,2,3,2,125,8,2,1,2,1,2,1,3,1,3,1,
  	3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,3,5,139,8,5,1,5,1,5,1,5,3,5,144,8,5,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,5,
  	7,164,8,7,10,7,12,7,167,9,7,1,7,1,7,1,7,3,7,172,8,7,1,7,1,7,1,7,5,7,177,
  	8,7,10,7,12,7,180,9,7,1,7,3,7,183,8,7,1,7,5,7,186,8,7,10,7,12,7,189,9,
  	7,1,7,5,7,192,8,7,10,7,12,7,195,9,7,1,7,1,7,1,8,1,8,1,9,5,9,202,8,9,10,
  	9,12,9,205,9,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,3,10,217,
  	8,10,1,11,1,11,1,11,1,11,5,11,223,8,11,10,11,12,11,226,9,11,1,11,3,11,
  	229,8,11,3,11,231,8,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,
  	12,242,8,12,1,12,0,0,13,0,2,4,6,8,10,12,14,16,18,20,22,24,0,4,1,0,6,7,
  	1,0,8,9,1,0,23,26,1,0,30,38,264,0,26,1,0,0,0,2,60,1,0,0,0,4,66,1,0,0,
  	0,6,128,1,0,0,0,8,132,1,0,0,0,10,138,1,0,0,0,12,145,1,0,0,0,14,153,1,
  	0,0,0,16,198,1,0,0,0,18,203,1,0,0,0,20,216,1,0,0,0,22,218,1,0,0,0,24,
  	241,1,0,0,0,26,27,5,1,0,0,27,28,5,2,0,0,28,29,5,44,0,0,29,33,1,0,0,0,
  	30,31,5,3,0,0,31,32,5,2,0,0,32,34,3,22,11,0,33,30,1,0,0,0,33,34,1,0,0,
  	0,34,44,1,0,0,0,35,36,5,4,0,0,36,40,5,2,0,0,37,39,3,2,1,0,38,37,1,0,0,
  	0,39,42,1,0,0,0,40,38,1,0,0,0,40,41,1,0,0,0,41,43,1,0,0,0,42,40,1,0,0,
  	0,43,45,5,5,0,0,44,35,1,0,0,0,44,45,1,0,0,0,45,49,1,0,0,0,46,48,3,4,2,
  	0,47,46,1,0,0,0,48,51,1,0,0,0,49,47,1,0,0,0,49,50,1,0,0,0,50,55,1,0,0,
  	0,51,49,1,0,0,0,52,54,3,14,7,0,53,52,1,0,0,0,54,57,1,0,0,0,55,53,1,0,
  	0,0,55,56,1,0,0,0,56,58,1,0,0,0,57,55,1,0,0,0,58,59,5,0,0,1,59,1,1,0,
  	0,0,60,61,7,0,0,0,61,62,5,42,0,0,62,63,5,2,0,0,63,64,5,42,0,0,64,3,1,
  	0,0,0,65,67,7,1,0,0,66,65,1,0,0,0,66,67,1,0,0,0,67,68,1,0,0,0,68,69,5,
  	10,0,0,69,70,5,42,0,0,70,80,5,2,0,0,71,72,5,11,0,0,72,76,5,2,0,0,73,75,
  	3,6,3,0,74,73,1,0,0,0,75,78,1,0,0,0,76,74,1,0,0,0,76,77,1,0,0,0,77,79,
  	1,0,0,0,78,76,1,0,0,0,79,81,5,5,0,0,80,71,1,0,0,0,80,81,1,0,0,0,81,98,
  	1,0,0,0,82,88,5,12,0,0,83,84,5,13,0,0,84,85,5,14,0,0,85,86,5,2,0,0,86,
  	87,5,41,0,0,87,89,5,15,0,0,88,83,1,0,0,0,88,89,1,0,0,0,89,90,1,0,0,0,
  	90,94,5,2,0,0,91,93,3,8,4,0,92,91,1,0,0,0,93,96,1,0,0,0,94,92,1,0,0,0,
  	94,95,1,0,0,0,95,97,1,0,0,0,96,94,1,0,0,0,97,99,5,5,0,0,98,82,1,0,0,0,
  	98,99,1,0,0,0,99,100,1,0,0,0,100,101,5,16,0,0,101,102,5,2,0,0,102,103,
  	5,41,0,0,103,113,5,5,0,0,104,105,5,17,0,0,105,109,5,2,0,0,106,108,3,10,
  	5,0,107,106,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,
  	112,1,0,0,0,111,109,1,0,0,0,112,114,5,5,0,0,113,104,1,0,0,0,113,114,1,
  	0,0,0,114,124,1,0,0,0,115,116,5,18,0,0,116,120,5,2,0,0,117,119,3,12,6,
  	0,118,117,1,0,0,0,119,122,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,121,
  	123,1,0,0,0,122,120,1,0,0,0,123,125,5,5,0,0,124,115,1,0,0,0,124,125,1,
  	0,0,0,125,126,1,0,0,0,126,127,5,5,0,0,127,5,1,0,0,0,128,129,5,42,0,0,
  	129,130,5,2,0,0,130,131,5,42,0,0,131,7,1,0,0,0,132,133,5,42,0,0,133,134,
  	5,2,0,0,134,135,5,42,0,0,135,9,1,0,0,0,136,137,5,45,0,0,137,139,5,2,0,
  	0,138,136,1,0,0,0,138,139,1,0,0,0,139,140,1,0,0,0,140,143,5,44,0,0,141,
  	144,3,20,10,0,142,144,5,45,0,0,143,141,1,0,0,0,143,142,1,0,0,0,143,144,
  	1,0,0,0,144,11,1,0,0,0,145,146,5,44,0,0,146,147,5,19,0,0,147,148,5,44,
  	0,0,148,149,5,20,0,0,149,150,5,44,0,0,150,151,5,2,0,0,151,152,5,42,0,
  	0,152,13,1,0,0,0,153,154,5,21,0,0,154,155,5,42,0,0,155,156,5,2,0,0,156,
  	157,5,22,0,0,157,158,5,2,0,0,158,159,7,2,0,0,159,160,5,5,0,0,160,161,
  	5,27,0,0,161,165,5,2,0,0,162,164,3,16,8,0,163,162,1,0,0,0,164,167,1,0,
  	0,0,165,163,1,0,0,0,165,166,1,0,0,0,166,171,1,0,0,0,167,165,1,0,0,0,168,
  	169,5,28,0,0,169,170,5,2,0,0,170,172,3,22,11,0,171,168,1,0,0,0,171,172,
  	1,0,0,0,172,182,1,0,0,0,173,174,5,29,0,0,174,178,5,2,0,0,175,177,3,18,
  	9,0,176,175,1,0,0,0,177,180,1,0,0,0,178,176,1,0,0,0,178,179,1,0,0,0,179,
  	181,1,0,0,0,180,178,1,0,0,0,181,183,5,5,0,0,182,173,1,0,0,0,182,183,1,
  	0,0,0,183,187,1,0,0,0,184,186,3,4,2,0,185,184,1,0,0,0,186,189,1,0,0,0,
  	187,185,1,0,0,0,187,188,1,0,0,0,188,193,1,0,0,0,189,187,1,0,0,0,190,192,
  	3,14,7,0,191,190,1,0,0,0,192,195,1,0,0,0,193,191,1,0,0,0,193,194,1,0,
  	0,0,194,196,1,0,0,0,195,193,1,0,0,0,196,197,5,5,0,0,197,15,1,0,0,0,198,
  	199,7,3,0,0,199,17,1,0,0,0,200,202,3,16,8,0,201,200,1,0,0,0,202,205,1,
  	0,0,0,203,201,1,0,0,0,203,204,1,0,0,0,204,206,1,0,0,0,205,203,1,0,0,0,
  	206,207,7,0,0,0,207,208,5,42,0,0,208,209,5,2,0,0,209,210,5,42,0,0,210,
  	19,1,0,0,0,211,217,5,41,0,0,212,217,5,42,0,0,213,217,5,43,0,0,214,217,
  	3,22,11,0,215,217,3,24,12,0,216,211,1,0,0,0,216,212,1,0,0,0,216,213,1,
  	0,0,0,216,214,1,0,0,0,216,215,1,0,0,0,217,21,1,0,0,0,218,230,5,13,0,0,
  	219,224,3,20,10,0,220,221,5,39,0,0,221,223,3,20,10,0,222,220,1,0,0,0,
  	223,226,1,0,0,0,224,222,1,0,0,0,224,225,1,0,0,0,225,228,1,0,0,0,226,224,
  	1,0,0,0,227,229,5,39,0,0,228,227,1,0,0,0,228,229,1,0,0,0,229,231,1,0,
  	0,0,230,219,1,0,0,0,230,231,1,0,0,0,231,232,1,0,0,0,232,233,5,15,0,0,
  	233,23,1,0,0,0,234,235,5,41,0,0,235,236,5,40,0,0,236,242,5,41,0,0,237,
  	238,5,41,0,0,238,242,5,40,0,0,239,240,5,40,0,0,240,242,5,41,0,0,241,234,
  	1,0,0,0,241,237,1,0,0,0,241,239,1,0,0,0,242,25,1,0,0,0,29,33,40,44,49,
  	55,66,76,80,88,94,98,109,113,120,124,138,143,165,171,178,182,187,193,
  	203,216,224,228,230,241
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

tree::TerminalNode* AssemblyParser::AssemblyContext::ID() {
  return getToken(AssemblyParser::ID, 0);
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
    setState(26);
    match(AssemblyParser::T__0);
    setState(27);
    match(AssemblyParser::T__1);
    setState(28);
    antlrcpp::downCast<AssemblyContext *>(_localctx)->module = match(AssemblyParser::ID);
    setState(33);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__2) {
      setState(30);
      match(AssemblyParser::T__2);
      setState(31);
      match(AssemblyParser::T__1);
      setState(32);
      array();
    }
    setState(44);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__3) {
      setState(35);
      match(AssemblyParser::T__3);
      setState(36);
      match(AssemblyParser::T__1);
      setState(40);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__5

      || _la == AssemblyParser::T__6) {
        setState(37);
        global();
        setState(42);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(43);
      match(AssemblyParser::T__4);
    }
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1792) != 0)) {
      setState(46);
      method();
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__20) {
      setState(52);
      class_();
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(58);
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
    setState(60);
    antlrcpp::downCast<GlobalContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == AssemblyParser::T__5

    || _la == AssemblyParser::T__6)) {
      antlrcpp::downCast<GlobalContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(61);
    match(AssemblyParser::STRING);
    setState(62);
    match(AssemblyParser::T__1);
    setState(63);
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
    setState(66);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__7

    || _la == AssemblyParser::T__8) {
      setState(65);
      antlrcpp::downCast<MethodContext *>(_localctx)->kind = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == AssemblyParser::T__7

      || _la == AssemblyParser::T__8)) {
        antlrcpp::downCast<MethodContext *>(_localctx)->kind = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(68);
    match(AssemblyParser::T__9);
    setState(69);
    match(AssemblyParser::STRING);
    setState(70);
    match(AssemblyParser::T__1);
    setState(80);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__10) {
      setState(71);
      match(AssemblyParser::T__10);
      setState(72);
      match(AssemblyParser::T__1);
      setState(76);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::STRING) {
        setState(73);
        arg();
        setState(78);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(79);
      match(AssemblyParser::T__4);
    }
    setState(98);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__11) {
      setState(82);
      match(AssemblyParser::T__11);
      setState(88);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AssemblyParser::T__12) {
        setState(83);
        match(AssemblyParser::T__12);
        setState(84);
        match(AssemblyParser::T__13);
        setState(85);
        match(AssemblyParser::T__1);
        setState(86);
        match(AssemblyParser::NUMBER);
        setState(87);
        match(AssemblyParser::T__14);
      }
      setState(90);
      match(AssemblyParser::T__1);
      setState(94);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::STRING) {
        setState(91);
        local();
        setState(96);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(97);
      match(AssemblyParser::T__4);
    }
    setState(100);
    match(AssemblyParser::T__15);
    setState(101);
    match(AssemblyParser::T__1);
    setState(102);
    match(AssemblyParser::NUMBER);
    setState(103);
    match(AssemblyParser::T__4);
    setState(113);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__16) {
      setState(104);
      match(AssemblyParser::T__16);
      setState(105);
      match(AssemblyParser::T__1);
      setState(109);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::ID

      || _la == AssemblyParser::LABEL) {
        setState(106);
        line();
        setState(111);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(112);
      match(AssemblyParser::T__4);
    }
    setState(124);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__17) {
      setState(115);
      match(AssemblyParser::T__17);
      setState(116);
      match(AssemblyParser::T__1);
      setState(120);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::ID) {
        setState(117);
        exceptionItem();
        setState(122);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(123);
      match(AssemblyParser::T__4);
    }
    setState(126);
    match(AssemblyParser::T__4);
   
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
    setState(132);
    match(AssemblyParser::STRING);
    setState(133);
    match(AssemblyParser::T__1);
    setState(134);
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
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::LABEL) {
      setState(136);
      antlrcpp::downCast<LineContext *>(_localctx)->label = match(AssemblyParser::LABEL);
      setState(137);
      match(AssemblyParser::T__1);
    }
    setState(140);
    antlrcpp::downCast<LineContext *>(_localctx)->opcode = match(AssemblyParser::ID);
    setState(143);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(141);
      value();
      break;
    }

    case 2: {
      setState(142);
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
    setState(145);
    match(AssemblyParser::ID);
    setState(146);
    match(AssemblyParser::T__18);
    setState(147);
    match(AssemblyParser::ID);
    setState(148);
    match(AssemblyParser::T__19);
    setState(149);
    match(AssemblyParser::ID);
    setState(150);
    match(AssemblyParser::T__1);
    setState(151);
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
    setState(153);
    match(AssemblyParser::T__20);
    setState(154);
    match(AssemblyParser::STRING);
    setState(155);
    match(AssemblyParser::T__1);
    setState(156);
    match(AssemblyParser::T__21);
    setState(157);
    match(AssemblyParser::T__1);
    setState(158);
    antlrcpp::downCast<ClassContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 125829120) != 0))) {
      antlrcpp::downCast<ClassContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(159);
    match(AssemblyParser::T__4);
    setState(160);
    match(AssemblyParser::T__26);
    setState(161);
    match(AssemblyParser::T__1);
    setState(165);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 548682072064) != 0)) {
      setState(162);
      accessor();
      setState(167);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__27) {
      setState(168);
      match(AssemblyParser::T__27);
      setState(169);
      match(AssemblyParser::T__1);
      setState(170);
      antlrcpp::downCast<ClassContext *>(_localctx)->supers = array();
    }
    setState(182);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__28) {
      setState(173);
      match(AssemblyParser::T__28);
      setState(174);
      match(AssemblyParser::T__1);
      setState(178);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 548682072256) != 0)) {
        setState(175);
        field();
        setState(180);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(181);
      match(AssemblyParser::T__4);
    }
    setState(187);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1792) != 0)) {
      setState(184);
      method();
      setState(189);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__20) {
      setState(190);
      class_();
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(196);
    match(AssemblyParser::T__4);
   
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
    setState(198);
    antlrcpp::downCast<AccessorContext *>(_localctx)->modifier = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 548682072064) != 0))) {
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
    setState(203);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 548682072064) != 0)) {
      setState(200);
      accessor();
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(206);
    antlrcpp::downCast<FieldContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == AssemblyParser::T__5

    || _la == AssemblyParser::T__6)) {
      antlrcpp::downCast<FieldContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(207);
    match(AssemblyParser::STRING);
    setState(208);
    match(AssemblyParser::T__1);
    setState(209);
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
    setState(216);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(211);
      match(AssemblyParser::NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(212);
      match(AssemblyParser::STRING);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(213);
      match(AssemblyParser::CSTRING);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(214);
      array();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(215);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(AssemblyParser::T__12);
    setState(230);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16492674424832) != 0)) {
      setState(219);
      value();
      setState(224);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(220);
          match(AssemblyParser::T__38);
          setState(221);
          value(); 
        }
        setState(226);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      }
      setState(228);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AssemblyParser::T__38) {
        setState(227);
        match(AssemblyParser::T__38);
      }
    }
    setState(232);
    match(AssemblyParser::T__14);
   
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
    setState(241);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(234);
      match(AssemblyParser::NUMBER);
      setState(235);
      match(AssemblyParser::T__39);
      setState(236);
      match(AssemblyParser::NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(237);
      match(AssemblyParser::NUMBER);
      setState(238);
      match(AssemblyParser::T__39);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(239);
      match(AssemblyParser::T__39);
      setState(240);
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
