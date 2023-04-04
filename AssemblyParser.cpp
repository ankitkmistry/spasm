
// Generated from H:/Programming (Ankit)/Projects/spade/1.0/spasm\Assembly.g4 by ANTLR 4.11.1


#include "AssemblyListener.h"
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
      "'maxstack'", "'code'", "'exceptionTable'", "'VALUE'", "'REF'", "'-'", 
      "'->'", "'class'", "'type'", "'CLASS'", "'INTERFACE'", "'ENUM'", "'ANNOTATION'", 
      "'accessors'", "'supers'", "'fields'", "'PRIVATE'", "'INTERNAL'", 
      "'PACKAGE_PRIVATE'", "'PROTECTED'", "'PUBLIC'", "'ABSTRACT'", "'FINAL'", 
      "'STATIC'", "'INLINE'", "','", "'.'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "NUMBER", "STRING", "CSTRING", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,45,236,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,0,3,0,30,
  	8,0,1,0,1,0,1,0,5,0,35,8,0,10,0,12,0,38,9,0,1,0,3,0,41,8,0,1,0,5,0,44,
  	8,0,10,0,12,0,47,9,0,1,0,5,0,50,8,0,10,0,12,0,53,9,0,1,1,1,1,1,1,1,1,
  	1,1,1,2,3,2,61,8,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,69,8,2,10,2,12,2,72,9,
  	2,1,2,3,2,75,8,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,83,8,2,1,2,1,2,5,2,87,8,
  	2,10,2,12,2,90,9,2,1,2,3,2,93,8,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,101,8,2,
  	10,2,12,2,104,9,2,1,2,3,2,107,8,2,1,2,1,2,1,2,5,2,112,8,2,10,2,12,2,115,
  	9,2,1,2,3,2,118,8,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,
  	5,1,5,3,5,134,8,5,1,5,1,5,1,5,3,5,139,8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,5,7,159,8,7,10,7,12,7,162,
  	9,7,1,7,1,7,1,7,3,7,167,8,7,1,7,1,7,1,7,5,7,172,8,7,10,7,12,7,175,9,7,
  	1,7,3,7,178,8,7,1,7,5,7,181,8,7,10,7,12,7,184,9,7,1,7,5,7,187,8,7,10,
  	7,12,7,190,9,7,1,7,1,7,1,8,1,8,1,9,5,9,197,8,9,10,9,12,9,200,9,9,1,9,
  	1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,3,10,212,8,10,1,11,1,11,1,11,
  	1,11,5,11,218,8,11,10,11,12,11,221,9,11,3,11,223,8,11,1,11,1,11,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,3,12,234,8,12,1,12,0,0,13,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,0,4,1,0,5,6,1,0,17,18,1,0,23,26,1,0,30,38,255,0,
  	29,1,0,0,0,2,54,1,0,0,0,4,60,1,0,0,0,6,121,1,0,0,0,8,126,1,0,0,0,10,133,
  	1,0,0,0,12,140,1,0,0,0,14,148,1,0,0,0,16,193,1,0,0,0,18,198,1,0,0,0,20,
  	211,1,0,0,0,22,213,1,0,0,0,24,233,1,0,0,0,26,27,5,1,0,0,27,28,5,2,0,0,
  	28,30,3,22,11,0,29,26,1,0,0,0,29,30,1,0,0,0,30,40,1,0,0,0,31,32,5,3,0,
  	0,32,36,5,2,0,0,33,35,3,2,1,0,34,33,1,0,0,0,35,38,1,0,0,0,36,34,1,0,0,
  	0,36,37,1,0,0,0,37,39,1,0,0,0,38,36,1,0,0,0,39,41,5,4,0,0,40,31,1,0,0,
  	0,40,41,1,0,0,0,41,45,1,0,0,0,42,44,3,4,2,0,43,42,1,0,0,0,44,47,1,0,0,
  	0,45,43,1,0,0,0,45,46,1,0,0,0,46,51,1,0,0,0,47,45,1,0,0,0,48,50,3,14,
  	7,0,49,48,1,0,0,0,50,53,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,52,1,1,0,
  	0,0,53,51,1,0,0,0,54,55,7,0,0,0,55,56,5,44,0,0,56,57,5,2,0,0,57,58,5,
  	42,0,0,58,3,1,0,0,0,59,61,5,7,0,0,60,59,1,0,0,0,60,61,1,0,0,0,61,62,1,
  	0,0,0,62,63,5,8,0,0,63,64,5,42,0,0,64,74,5,2,0,0,65,66,5,9,0,0,66,70,
  	5,2,0,0,67,69,3,6,3,0,68,67,1,0,0,0,69,72,1,0,0,0,70,68,1,0,0,0,70,71,
  	1,0,0,0,71,73,1,0,0,0,72,70,1,0,0,0,73,75,5,4,0,0,74,65,1,0,0,0,74,75,
  	1,0,0,0,75,92,1,0,0,0,76,82,5,10,0,0,77,78,5,11,0,0,78,79,5,12,0,0,79,
  	80,5,2,0,0,80,81,5,41,0,0,81,83,5,13,0,0,82,77,1,0,0,0,82,83,1,0,0,0,
  	83,84,1,0,0,0,84,88,5,2,0,0,85,87,3,8,4,0,86,85,1,0,0,0,87,90,1,0,0,0,
  	88,86,1,0,0,0,88,89,1,0,0,0,89,91,1,0,0,0,90,88,1,0,0,0,91,93,5,4,0,0,
  	92,76,1,0,0,0,92,93,1,0,0,0,93,94,1,0,0,0,94,95,5,14,0,0,95,96,5,2,0,
  	0,96,106,5,41,0,0,97,98,5,15,0,0,98,102,5,2,0,0,99,101,3,10,5,0,100,99,
  	1,0,0,0,101,104,1,0,0,0,102,100,1,0,0,0,102,103,1,0,0,0,103,105,1,0,0,
  	0,104,102,1,0,0,0,105,107,5,4,0,0,106,97,1,0,0,0,106,107,1,0,0,0,107,
  	117,1,0,0,0,108,109,5,16,0,0,109,113,5,2,0,0,110,112,3,12,6,0,111,110,
  	1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,116,1,0,0,
  	0,115,113,1,0,0,0,116,118,5,4,0,0,117,108,1,0,0,0,117,118,1,0,0,0,118,
  	119,1,0,0,0,119,120,5,4,0,0,120,5,1,0,0,0,121,122,7,1,0,0,122,123,5,44,
  	0,0,123,124,5,2,0,0,124,125,5,42,0,0,125,7,1,0,0,0,126,127,7,0,0,0,127,
  	128,5,44,0,0,128,129,5,2,0,0,129,130,5,42,0,0,130,9,1,0,0,0,131,132,5,
  	44,0,0,132,134,5,2,0,0,133,131,1,0,0,0,133,134,1,0,0,0,134,135,1,0,0,
  	0,135,138,5,44,0,0,136,139,3,20,10,0,137,139,5,44,0,0,138,136,1,0,0,0,
  	138,137,1,0,0,0,138,139,1,0,0,0,139,11,1,0,0,0,140,141,5,44,0,0,141,142,
  	5,19,0,0,142,143,5,44,0,0,143,144,5,20,0,0,144,145,5,44,0,0,145,146,5,
  	2,0,0,146,147,5,42,0,0,147,13,1,0,0,0,148,149,5,21,0,0,149,150,5,42,0,
  	0,150,151,5,2,0,0,151,152,5,22,0,0,152,153,5,2,0,0,153,154,7,2,0,0,154,
  	155,5,4,0,0,155,156,5,27,0,0,156,160,5,2,0,0,157,159,3,16,8,0,158,157,
  	1,0,0,0,159,162,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,166,1,0,0,
  	0,162,160,1,0,0,0,163,164,5,28,0,0,164,165,5,2,0,0,165,167,3,22,11,0,
  	166,163,1,0,0,0,166,167,1,0,0,0,167,177,1,0,0,0,168,169,5,29,0,0,169,
  	173,5,2,0,0,170,172,3,18,9,0,171,170,1,0,0,0,172,175,1,0,0,0,173,171,
  	1,0,0,0,173,174,1,0,0,0,174,176,1,0,0,0,175,173,1,0,0,0,176,178,5,4,0,
  	0,177,168,1,0,0,0,177,178,1,0,0,0,178,182,1,0,0,0,179,181,3,4,2,0,180,
  	179,1,0,0,0,181,184,1,0,0,0,182,180,1,0,0,0,182,183,1,0,0,0,183,188,1,
  	0,0,0,184,182,1,0,0,0,185,187,3,14,7,0,186,185,1,0,0,0,187,190,1,0,0,
  	0,188,186,1,0,0,0,188,189,1,0,0,0,189,191,1,0,0,0,190,188,1,0,0,0,191,
  	192,5,4,0,0,192,15,1,0,0,0,193,194,7,3,0,0,194,17,1,0,0,0,195,197,3,16,
  	8,0,196,195,1,0,0,0,197,200,1,0,0,0,198,196,1,0,0,0,198,199,1,0,0,0,199,
  	201,1,0,0,0,200,198,1,0,0,0,201,202,7,0,0,0,202,203,5,42,0,0,203,204,
  	5,2,0,0,204,205,5,42,0,0,205,19,1,0,0,0,206,212,5,41,0,0,207,212,5,42,
  	0,0,208,212,5,43,0,0,209,212,3,22,11,0,210,212,3,24,12,0,211,206,1,0,
  	0,0,211,207,1,0,0,0,211,208,1,0,0,0,211,209,1,0,0,0,211,210,1,0,0,0,212,
  	21,1,0,0,0,213,222,5,11,0,0,214,219,3,20,10,0,215,216,5,39,0,0,216,218,
  	3,20,10,0,217,215,1,0,0,0,218,221,1,0,0,0,219,217,1,0,0,0,219,220,1,0,
  	0,0,220,223,1,0,0,0,221,219,1,0,0,0,222,214,1,0,0,0,222,223,1,0,0,0,223,
  	224,1,0,0,0,224,225,5,13,0,0,225,23,1,0,0,0,226,227,5,41,0,0,227,228,
  	5,40,0,0,228,234,5,41,0,0,229,230,5,41,0,0,230,234,5,40,0,0,231,232,5,
  	40,0,0,232,234,5,41,0,0,233,226,1,0,0,0,233,229,1,0,0,0,233,231,1,0,0,
  	0,234,25,1,0,0,0,28,29,36,40,45,51,60,70,74,82,88,92,102,106,113,117,
  	133,138,160,166,173,177,182,188,198,211,219,222,233
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

void AssemblyParser::AssemblyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssembly(this);
}

void AssemblyParser::AssemblyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssembly(this);
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
    while (_la == AssemblyParser::T__20) {
      setState(48);
      class_();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
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

tree::TerminalNode* AssemblyParser::GlobalContext::ID() {
  return getToken(AssemblyParser::ID, 0);
}

tree::TerminalNode* AssemblyParser::GlobalContext::STRING() {
  return getToken(AssemblyParser::STRING, 0);
}


size_t AssemblyParser::GlobalContext::getRuleIndex() const {
  return AssemblyParser::RuleGlobal;
}

void AssemblyParser::GlobalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal(this);
}

void AssemblyParser::GlobalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal(this);
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
    setState(54);
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
    setState(55);
    match(AssemblyParser::ID);
    setState(56);
    match(AssemblyParser::T__1);
    setState(57);
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

void AssemblyParser::MethodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod(this);
}

void AssemblyParser::MethodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod(this);
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
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__6) {
      setState(59);
      antlrcpp::downCast<MethodContext *>(_localctx)->entry = match(AssemblyParser::T__6);
    }
    setState(62);
    match(AssemblyParser::T__7);
    setState(63);
    match(AssemblyParser::STRING);
    setState(64);
    match(AssemblyParser::T__1);
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__8) {
      setState(65);
      match(AssemblyParser::T__8);
      setState(66);
      match(AssemblyParser::T__1);
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__16

      || _la == AssemblyParser::T__17) {
        setState(67);
        arg();
        setState(72);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(73);
      match(AssemblyParser::T__3);
    }
    setState(92);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__9) {
      setState(76);
      match(AssemblyParser::T__9);
      setState(82);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AssemblyParser::T__10) {
        setState(77);
        match(AssemblyParser::T__10);
        setState(78);
        match(AssemblyParser::T__11);
        setState(79);
        match(AssemblyParser::T__1);
        setState(80);
        match(AssemblyParser::NUMBER);
        setState(81);
        match(AssemblyParser::T__12);
      }
      setState(84);
      match(AssemblyParser::T__1);
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__4

      || _la == AssemblyParser::T__5) {
        setState(85);
        local();
        setState(90);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(91);
      match(AssemblyParser::T__3);
    }
    setState(94);
    match(AssemblyParser::T__13);
    setState(95);
    match(AssemblyParser::T__1);
    setState(96);
    match(AssemblyParser::NUMBER);
    setState(106);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__14) {
      setState(97);
      match(AssemblyParser::T__14);
      setState(98);
      match(AssemblyParser::T__1);
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::ID) {
        setState(99);
        line();
        setState(104);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(105);
      match(AssemblyParser::T__3);
    }
    setState(117);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__15) {
      setState(108);
      match(AssemblyParser::T__15);
      setState(109);
      match(AssemblyParser::T__1);
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::ID) {
        setState(110);
        exceptionItem();
        setState(115);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(116);
      match(AssemblyParser::T__3);
    }
    setState(119);
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

tree::TerminalNode* AssemblyParser::ArgContext::ID() {
  return getToken(AssemblyParser::ID, 0);
}

tree::TerminalNode* AssemblyParser::ArgContext::STRING() {
  return getToken(AssemblyParser::STRING, 0);
}


size_t AssemblyParser::ArgContext::getRuleIndex() const {
  return AssemblyParser::RuleArg;
}

void AssemblyParser::ArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg(this);
}

void AssemblyParser::ArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg(this);
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
    setState(121);
    antlrcpp::downCast<ArgContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == AssemblyParser::T__16

    || _la == AssemblyParser::T__17)) {
      antlrcpp::downCast<ArgContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(122);
    match(AssemblyParser::ID);
    setState(123);
    match(AssemblyParser::T__1);
    setState(124);
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

tree::TerminalNode* AssemblyParser::LocalContext::ID() {
  return getToken(AssemblyParser::ID, 0);
}

tree::TerminalNode* AssemblyParser::LocalContext::STRING() {
  return getToken(AssemblyParser::STRING, 0);
}


size_t AssemblyParser::LocalContext::getRuleIndex() const {
  return AssemblyParser::RuleLocal;
}

void AssemblyParser::LocalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal(this);
}

void AssemblyParser::LocalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal(this);
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
    setState(126);
    antlrcpp::downCast<LocalContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == AssemblyParser::T__4

    || _la == AssemblyParser::T__5)) {
      antlrcpp::downCast<LocalContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(127);
    match(AssemblyParser::ID);
    setState(128);
    match(AssemblyParser::T__1);
    setState(129);
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

std::vector<tree::TerminalNode *> AssemblyParser::LineContext::ID() {
  return getTokens(AssemblyParser::ID);
}

tree::TerminalNode* AssemblyParser::LineContext::ID(size_t i) {
  return getToken(AssemblyParser::ID, i);
}

AssemblyParser::ValueContext* AssemblyParser::LineContext::value() {
  return getRuleContext<AssemblyParser::ValueContext>(0);
}


size_t AssemblyParser::LineContext::getRuleIndex() const {
  return AssemblyParser::RuleLine;
}

void AssemblyParser::LineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine(this);
}

void AssemblyParser::LineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine(this);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(131);
      antlrcpp::downCast<LineContext *>(_localctx)->label = match(AssemblyParser::ID);
      setState(132);
      match(AssemblyParser::T__1);
      break;
    }

    default:
      break;
    }
    setState(135);
    antlrcpp::downCast<LineContext *>(_localctx)->opcode = match(AssemblyParser::ID);
    setState(138);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(136);
      value();
      break;
    }

    case 2: {
      setState(137);
      antlrcpp::downCast<LineContext *>(_localctx)->dest = match(AssemblyParser::ID);
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

void AssemblyParser::ExceptionItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionItem(this);
}

void AssemblyParser::ExceptionItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionItem(this);
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
    setState(140);
    match(AssemblyParser::ID);
    setState(141);
    match(AssemblyParser::T__18);
    setState(142);
    match(AssemblyParser::ID);
    setState(143);
    match(AssemblyParser::T__19);
    setState(144);
    match(AssemblyParser::ID);
    setState(145);
    match(AssemblyParser::T__1);
    setState(146);
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

void AssemblyParser::ClassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass(this);
}

void AssemblyParser::ClassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass(this);
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
    setState(148);
    match(AssemblyParser::T__20);
    setState(149);
    match(AssemblyParser::STRING);
    setState(150);
    match(AssemblyParser::T__1);
    setState(151);
    match(AssemblyParser::T__21);
    setState(152);
    match(AssemblyParser::T__1);
    setState(153);
    antlrcpp::downCast<ClassContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 125829120) != 0)) {
      antlrcpp::downCast<ClassContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(154);
    match(AssemblyParser::T__3);
    setState(155);
    match(AssemblyParser::T__26);
    setState(156);
    match(AssemblyParser::T__1);
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 548682072064) != 0) {
      setState(157);
      accessor();
      setState(162);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(166);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__27) {
      setState(163);
      match(AssemblyParser::T__27);
      setState(164);
      match(AssemblyParser::T__1);
      setState(165);
      antlrcpp::downCast<ClassContext *>(_localctx)->supers = array();
    }
    setState(177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__28) {
      setState(168);
      match(AssemblyParser::T__28);
      setState(169);
      match(AssemblyParser::T__1);
      setState(173);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 548682072160) != 0) {
        setState(170);
        field();
        setState(175);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(176);
      match(AssemblyParser::T__3);
    }
    setState(182);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__6

    || _la == AssemblyParser::T__7) {
      setState(179);
      method();
      setState(184);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(188);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__20) {
      setState(185);
      class_();
      setState(190);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(191);
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

void AssemblyParser::AccessorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessor(this);
}

void AssemblyParser::AccessorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessor(this);
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
    setState(193);
    antlrcpp::downCast<AccessorContext *>(_localctx)->modifier = _input->LT(1);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 548682072064) != 0)) {
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

void AssemblyParser::FieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField(this);
}

void AssemblyParser::FieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField(this);
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
    setState(198);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 548682072064) != 0) {
      setState(195);
      accessor();
      setState(200);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(201);
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
    setState(202);
    match(AssemblyParser::STRING);
    setState(203);
    match(AssemblyParser::T__1);
    setState(204);
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

void AssemblyParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void AssemblyParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
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
    setState(211);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(206);
      match(AssemblyParser::NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(207);
      match(AssemblyParser::STRING);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(208);
      match(AssemblyParser::CSTRING);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(209);
      array();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(210);
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

void AssemblyParser::ArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray(this);
}

void AssemblyParser::ArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray(this);
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
    setState(213);
    match(AssemblyParser::T__10);
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16492674418688) != 0) {
      setState(214);
      value();
      setState(219);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__38) {
        setState(215);
        match(AssemblyParser::T__38);
        setState(216);
        value();
        setState(221);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(224);
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

void AssemblyParser::FloatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloat(this);
}

void AssemblyParser::FloatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloat(this);
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
    setState(233);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(226);
      match(AssemblyParser::NUMBER);
      setState(227);
      match(AssemblyParser::T__39);
      setState(228);
      match(AssemblyParser::NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(229);
      match(AssemblyParser::NUMBER);
      setState(230);
      match(AssemblyParser::T__39);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(231);
      match(AssemblyParser::T__39);
      setState(232);
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
