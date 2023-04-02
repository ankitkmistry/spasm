
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
      "assembly", "metadata", "globals", "global", "method", "arg", "local", 
      "line", "exceptionItem", "class", "accessor", "fields", "field", "value", 
      "array", "float"
    },
    std::vector<std::string>{
      "", "'minorVersion'", "':'", "'majorVersion'", "'type'", "'XP'", "'SLL'", 
      "'imports'", "'globals'", "';'", "'VAR'", "'CONST'", "'entry'", "'method'", 
      "'args'", "'locals'", "'['", "'closureStart'", "']'", "'maxstack'", 
      "'code'", "'exceptionTable'", "'VALUE'", "'REF'", "'-'", "'->'", "'class'", 
      "'CLASS'", "'INTERFACE'", "'ENUM'", "'ANNOTATION'", "'accessors'", 
      "'PRIVATE'", "'INTERNAL'", "'PACKAGE_PRIVATE'", "'PROTECTED'", "'PUBLIC'", 
      "'ABSTRACT'", "'FINAL'", "'STATIC'", "'INLINE'", "'fields'", "','", 
      "'.'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "NUMBER", "STRING", "CSTRING", 
      "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,48,243,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,1,0,1,0,3,0,35,8,0,1,0,5,0,38,8,0,10,0,12,0,41,9,0,1,0,5,
  	0,44,8,0,10,0,12,0,47,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,2,1,2,1,2,5,2,65,8,2,10,2,12,2,68,9,2,1,2,1,2,1,3,1,3,1,3,1,
  	3,1,3,1,4,3,4,78,8,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,86,8,4,10,4,12,4,89,
  	9,4,1,4,3,4,92,8,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,100,8,4,1,4,1,4,5,4,104,
  	8,4,10,4,12,4,107,9,4,1,4,3,4,110,8,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,118,
  	8,4,10,4,12,4,121,9,4,1,4,3,4,124,8,4,1,4,1,4,1,4,5,4,129,8,4,10,4,12,
  	4,132,9,4,1,4,3,4,135,8,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,
  	1,6,1,7,1,7,3,7,151,8,7,1,7,1,7,3,7,155,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,175,8,9,10,9,12,9,178,
  	9,9,1,9,3,9,181,8,9,1,9,5,9,184,8,9,10,9,12,9,187,9,9,1,9,5,9,190,8,9,
  	10,9,12,9,193,9,9,1,9,1,9,1,10,1,10,1,11,1,11,1,11,5,11,202,8,11,10,11,
  	12,11,205,9,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,
  	1,13,3,13,219,8,13,1,14,1,14,1,14,1,14,5,14,225,8,14,10,14,12,14,228,
  	9,14,3,14,230,8,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,
  	241,8,15,1,15,0,0,16,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,0,5,1,
  	0,5,6,1,0,10,11,1,0,22,23,1,0,27,30,1,0,32,40,255,0,32,1,0,0,0,2,48,1,
  	0,0,0,4,61,1,0,0,0,6,71,1,0,0,0,8,77,1,0,0,0,10,138,1,0,0,0,12,143,1,
  	0,0,0,14,150,1,0,0,0,16,156,1,0,0,0,18,164,1,0,0,0,20,196,1,0,0,0,22,
  	198,1,0,0,0,24,208,1,0,0,0,26,218,1,0,0,0,28,220,1,0,0,0,30,240,1,0,0,
  	0,32,34,3,2,1,0,33,35,3,4,2,0,34,33,1,0,0,0,34,35,1,0,0,0,35,39,1,0,0,
  	0,36,38,3,8,4,0,37,36,1,0,0,0,38,41,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,
  	0,40,45,1,0,0,0,41,39,1,0,0,0,42,44,3,18,9,0,43,42,1,0,0,0,44,47,1,0,
  	0,0,45,43,1,0,0,0,45,46,1,0,0,0,46,1,1,0,0,0,47,45,1,0,0,0,48,49,5,1,
  	0,0,49,50,5,2,0,0,50,51,5,44,0,0,51,52,5,3,0,0,52,53,5,2,0,0,53,54,5,
  	44,0,0,54,55,5,4,0,0,55,56,5,2,0,0,56,57,7,0,0,0,57,58,5,7,0,0,58,59,
  	5,2,0,0,59,60,3,28,14,0,60,3,1,0,0,0,61,62,5,8,0,0,62,66,5,2,0,0,63,65,
  	3,6,3,0,64,63,1,0,0,0,65,68,1,0,0,0,66,64,1,0,0,0,66,67,1,0,0,0,67,69,
  	1,0,0,0,68,66,1,0,0,0,69,70,5,9,0,0,70,5,1,0,0,0,71,72,7,1,0,0,72,73,
  	5,47,0,0,73,74,5,2,0,0,74,75,5,45,0,0,75,7,1,0,0,0,76,78,5,12,0,0,77,
  	76,1,0,0,0,77,78,1,0,0,0,78,79,1,0,0,0,79,80,5,13,0,0,80,81,5,45,0,0,
  	81,91,5,2,0,0,82,83,5,14,0,0,83,87,5,2,0,0,84,86,3,10,5,0,85,84,1,0,0,
  	0,86,89,1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,90,1,0,0,0,89,87,1,0,0,
  	0,90,92,5,9,0,0,91,82,1,0,0,0,91,92,1,0,0,0,92,109,1,0,0,0,93,99,5,15,
  	0,0,94,95,5,16,0,0,95,96,5,17,0,0,96,97,5,2,0,0,97,98,5,44,0,0,98,100,
  	5,18,0,0,99,94,1,0,0,0,99,100,1,0,0,0,100,101,1,0,0,0,101,105,5,2,0,0,
  	102,104,3,12,6,0,103,102,1,0,0,0,104,107,1,0,0,0,105,103,1,0,0,0,105,
  	106,1,0,0,0,106,108,1,0,0,0,107,105,1,0,0,0,108,110,5,9,0,0,109,93,1,
  	0,0,0,109,110,1,0,0,0,110,111,1,0,0,0,111,112,5,19,0,0,112,113,5,2,0,
  	0,113,123,5,44,0,0,114,115,5,20,0,0,115,119,5,2,0,0,116,118,3,14,7,0,
  	117,116,1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,122,
  	1,0,0,0,121,119,1,0,0,0,122,124,5,9,0,0,123,114,1,0,0,0,123,124,1,0,0,
  	0,124,134,1,0,0,0,125,126,5,21,0,0,126,130,5,2,0,0,127,129,3,16,8,0,128,
  	127,1,0,0,0,129,132,1,0,0,0,130,128,1,0,0,0,130,131,1,0,0,0,131,133,1,
  	0,0,0,132,130,1,0,0,0,133,135,5,9,0,0,134,125,1,0,0,0,134,135,1,0,0,0,
  	135,136,1,0,0,0,136,137,5,9,0,0,137,9,1,0,0,0,138,139,7,2,0,0,139,140,
  	5,47,0,0,140,141,5,2,0,0,141,142,5,45,0,0,142,11,1,0,0,0,143,144,7,1,
  	0,0,144,145,5,47,0,0,145,146,5,2,0,0,146,147,5,45,0,0,147,13,1,0,0,0,
  	148,149,5,47,0,0,149,151,5,2,0,0,150,148,1,0,0,0,150,151,1,0,0,0,151,
  	152,1,0,0,0,152,154,5,47,0,0,153,155,3,26,13,0,154,153,1,0,0,0,154,155,
  	1,0,0,0,155,15,1,0,0,0,156,157,5,47,0,0,157,158,5,24,0,0,158,159,5,47,
  	0,0,159,160,5,25,0,0,160,161,5,47,0,0,161,162,5,2,0,0,162,163,5,45,0,
  	0,163,17,1,0,0,0,164,165,5,26,0,0,165,166,5,45,0,0,166,167,5,2,0,0,167,
  	168,5,4,0,0,168,169,5,2,0,0,169,170,7,3,0,0,170,171,5,9,0,0,171,172,5,
  	31,0,0,172,176,5,2,0,0,173,175,3,20,10,0,174,173,1,0,0,0,175,178,1,0,
  	0,0,176,174,1,0,0,0,176,177,1,0,0,0,177,180,1,0,0,0,178,176,1,0,0,0,179,
  	181,3,22,11,0,180,179,1,0,0,0,180,181,1,0,0,0,181,185,1,0,0,0,182,184,
  	3,8,4,0,183,182,1,0,0,0,184,187,1,0,0,0,185,183,1,0,0,0,185,186,1,0,0,
  	0,186,191,1,0,0,0,187,185,1,0,0,0,188,190,3,18,9,0,189,188,1,0,0,0,190,
  	193,1,0,0,0,191,189,1,0,0,0,191,192,1,0,0,0,192,194,1,0,0,0,193,191,1,
  	0,0,0,194,195,5,9,0,0,195,19,1,0,0,0,196,197,7,4,0,0,197,21,1,0,0,0,198,
  	199,5,41,0,0,199,203,5,2,0,0,200,202,3,24,12,0,201,200,1,0,0,0,202,205,
  	1,0,0,0,203,201,1,0,0,0,203,204,1,0,0,0,204,206,1,0,0,0,205,203,1,0,0,
  	0,206,207,5,9,0,0,207,23,1,0,0,0,208,209,7,1,0,0,209,210,5,45,0,0,210,
  	211,5,2,0,0,211,212,5,45,0,0,212,25,1,0,0,0,213,219,5,44,0,0,214,219,
  	5,45,0,0,215,219,5,46,0,0,216,219,3,28,14,0,217,219,3,30,15,0,218,213,
  	1,0,0,0,218,214,1,0,0,0,218,215,1,0,0,0,218,216,1,0,0,0,218,217,1,0,0,
  	0,219,27,1,0,0,0,220,229,5,16,0,0,221,226,3,26,13,0,222,223,5,42,0,0,
  	223,225,3,26,13,0,224,222,1,0,0,0,225,228,1,0,0,0,226,224,1,0,0,0,226,
  	227,1,0,0,0,227,230,1,0,0,0,228,226,1,0,0,0,229,221,1,0,0,0,229,230,1,
  	0,0,0,230,231,1,0,0,0,231,232,5,18,0,0,232,29,1,0,0,0,233,234,5,44,0,
  	0,234,235,5,43,0,0,235,241,5,44,0,0,236,237,5,44,0,0,237,241,5,43,0,0,
  	238,239,5,43,0,0,239,241,5,44,0,0,240,233,1,0,0,0,240,236,1,0,0,0,240,
  	238,1,0,0,0,241,31,1,0,0,0,25,34,39,45,66,77,87,91,99,105,109,119,123,
  	130,134,150,154,176,180,185,191,203,218,226,229,240
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

AssemblyParser::MetadataContext* AssemblyParser::AssemblyContext::metadata() {
  return getRuleContext<AssemblyParser::MetadataContext>(0);
}

AssemblyParser::GlobalsContext* AssemblyParser::AssemblyContext::globals() {
  return getRuleContext<AssemblyParser::GlobalsContext>(0);
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
    setState(32);
    metadata();
    setState(34);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__7) {
      setState(33);
      globals();
    }
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__11

    || _la == AssemblyParser::T__12) {
      setState(36);
      method();
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(45);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__25) {
      setState(42);
      class_();
      setState(47);
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

//----------------- MetadataContext ------------------------------------------------------------------

AssemblyParser::MetadataContext::MetadataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AssemblyParser::MetadataContext::NUMBER() {
  return getTokens(AssemblyParser::NUMBER);
}

tree::TerminalNode* AssemblyParser::MetadataContext::NUMBER(size_t i) {
  return getToken(AssemblyParser::NUMBER, i);
}

AssemblyParser::ArrayContext* AssemblyParser::MetadataContext::array() {
  return getRuleContext<AssemblyParser::ArrayContext>(0);
}


size_t AssemblyParser::MetadataContext::getRuleIndex() const {
  return AssemblyParser::RuleMetadata;
}

void AssemblyParser::MetadataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMetadata(this);
}

void AssemblyParser::MetadataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMetadata(this);
}


std::any AssemblyParser::MetadataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitMetadata(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::MetadataContext* AssemblyParser::metadata() {
  MetadataContext *_localctx = _tracker.createInstance<MetadataContext>(_ctx, getState());
  enterRule(_localctx, 2, AssemblyParser::RuleMetadata);
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
    setState(48);
    match(AssemblyParser::T__0);
    setState(49);
    match(AssemblyParser::T__1);
    setState(50);
    match(AssemblyParser::NUMBER);
    setState(51);
    match(AssemblyParser::T__2);
    setState(52);
    match(AssemblyParser::T__1);
    setState(53);
    match(AssemblyParser::NUMBER);
    setState(54);
    match(AssemblyParser::T__3);
    setState(55);
    match(AssemblyParser::T__1);
    setState(56);
    antlrcpp::downCast<MetadataContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == AssemblyParser::T__4

    || _la == AssemblyParser::T__5)) {
      antlrcpp::downCast<MetadataContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(57);
    match(AssemblyParser::T__6);
    setState(58);
    match(AssemblyParser::T__1);
    setState(59);
    array();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalsContext ------------------------------------------------------------------

AssemblyParser::GlobalsContext::GlobalsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AssemblyParser::GlobalContext *> AssemblyParser::GlobalsContext::global() {
  return getRuleContexts<AssemblyParser::GlobalContext>();
}

AssemblyParser::GlobalContext* AssemblyParser::GlobalsContext::global(size_t i) {
  return getRuleContext<AssemblyParser::GlobalContext>(i);
}


size_t AssemblyParser::GlobalsContext::getRuleIndex() const {
  return AssemblyParser::RuleGlobals;
}

void AssemblyParser::GlobalsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobals(this);
}

void AssemblyParser::GlobalsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobals(this);
}


std::any AssemblyParser::GlobalsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitGlobals(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::GlobalsContext* AssemblyParser::globals() {
  GlobalsContext *_localctx = _tracker.createInstance<GlobalsContext>(_ctx, getState());
  enterRule(_localctx, 4, AssemblyParser::RuleGlobals);
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
    setState(61);
    match(AssemblyParser::T__7);
    setState(62);
    match(AssemblyParser::T__1);
    setState(66);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__9

    || _la == AssemblyParser::T__10) {
      setState(63);
      global();
      setState(68);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(69);
    match(AssemblyParser::T__8);
   
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
  enterRule(_localctx, 6, AssemblyParser::RuleGlobal);
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
    setState(71);
    antlrcpp::downCast<GlobalContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == AssemblyParser::T__9

    || _la == AssemblyParser::T__10)) {
      antlrcpp::downCast<GlobalContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(72);
    match(AssemblyParser::ID);
    setState(73);
    match(AssemblyParser::T__1);
    setState(74);
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
  enterRule(_localctx, 8, AssemblyParser::RuleMethod);
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
    setState(77);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__11) {
      setState(76);
      antlrcpp::downCast<MethodContext *>(_localctx)->entry = match(AssemblyParser::T__11);
    }
    setState(79);
    match(AssemblyParser::T__12);
    setState(80);
    match(AssemblyParser::STRING);
    setState(81);
    match(AssemblyParser::T__1);
    setState(91);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__13) {
      setState(82);
      match(AssemblyParser::T__13);
      setState(83);
      match(AssemblyParser::T__1);
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__21

      || _la == AssemblyParser::T__22) {
        setState(84);
        arg();
        setState(89);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(90);
      match(AssemblyParser::T__8);
    }
    setState(109);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__14) {
      setState(93);
      match(AssemblyParser::T__14);
      setState(99);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AssemblyParser::T__15) {
        setState(94);
        match(AssemblyParser::T__15);
        setState(95);
        match(AssemblyParser::T__16);
        setState(96);
        match(AssemblyParser::T__1);
        setState(97);
        match(AssemblyParser::NUMBER);
        setState(98);
        match(AssemblyParser::T__17);
      }
      setState(101);
      match(AssemblyParser::T__1);
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__9

      || _la == AssemblyParser::T__10) {
        setState(102);
        local();
        setState(107);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(108);
      match(AssemblyParser::T__8);
    }
    setState(111);
    match(AssemblyParser::T__18);
    setState(112);
    match(AssemblyParser::T__1);
    setState(113);
    match(AssemblyParser::NUMBER);
    setState(123);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__19) {
      setState(114);
      match(AssemblyParser::T__19);
      setState(115);
      match(AssemblyParser::T__1);
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::ID) {
        setState(116);
        line();
        setState(121);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(122);
      match(AssemblyParser::T__8);
    }
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__20) {
      setState(125);
      match(AssemblyParser::T__20);
      setState(126);
      match(AssemblyParser::T__1);
      setState(130);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::ID) {
        setState(127);
        exceptionItem();
        setState(132);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(133);
      match(AssemblyParser::T__8);
    }
    setState(136);
    match(AssemblyParser::T__8);
   
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
  enterRule(_localctx, 10, AssemblyParser::RuleArg);
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
    antlrcpp::downCast<ArgContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == AssemblyParser::T__21

    || _la == AssemblyParser::T__22)) {
      antlrcpp::downCast<ArgContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(139);
    match(AssemblyParser::ID);
    setState(140);
    match(AssemblyParser::T__1);
    setState(141);
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
  enterRule(_localctx, 12, AssemblyParser::RuleLocal);
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
    setState(143);
    antlrcpp::downCast<LocalContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == AssemblyParser::T__9

    || _la == AssemblyParser::T__10)) {
      antlrcpp::downCast<LocalContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
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
  enterRule(_localctx, 14, AssemblyParser::RuleLine);
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
    setState(150);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(148);
      match(AssemblyParser::ID);
      setState(149);
      match(AssemblyParser::T__1);
      break;
    }

    default:
      break;
    }
    setState(152);
    match(AssemblyParser::ID);
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 131941395398656) != 0) {
      setState(153);
      value();
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
  enterRule(_localctx, 16, AssemblyParser::RuleExceptionItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(AssemblyParser::ID);
    setState(157);
    match(AssemblyParser::T__23);
    setState(158);
    match(AssemblyParser::ID);
    setState(159);
    match(AssemblyParser::T__24);
    setState(160);
    match(AssemblyParser::ID);
    setState(161);
    match(AssemblyParser::T__1);
    setState(162);
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

AssemblyParser::FieldsContext* AssemblyParser::ClassContext::fields() {
  return getRuleContext<AssemblyParser::FieldsContext>(0);
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
  enterRule(_localctx, 18, AssemblyParser::RuleClass);
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
    setState(164);
    match(AssemblyParser::T__25);
    setState(165);
    match(AssemblyParser::STRING);
    setState(166);
    match(AssemblyParser::T__1);
    setState(167);
    match(AssemblyParser::T__3);
    setState(168);
    match(AssemblyParser::T__1);
    setState(169);
    antlrcpp::downCast<ClassContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2013265920) != 0)) {
      antlrcpp::downCast<ClassContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(170);
    match(AssemblyParser::T__8);
    setState(171);
    match(AssemblyParser::T__30);
    setState(172);
    match(AssemblyParser::T__1);
    setState(176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2194728288256) != 0) {
      setState(173);
      accessor();
      setState(178);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__40) {
      setState(179);
      fields();
    }
    setState(185);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__11

    || _la == AssemblyParser::T__12) {
      setState(182);
      method();
      setState(187);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__25) {
      setState(188);
      class_();
      setState(193);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(194);
    match(AssemblyParser::T__8);
   
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
  enterRule(_localctx, 20, AssemblyParser::RuleAccessor);
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
    setState(196);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2194728288256) != 0)) {
    _errHandler->recoverInline(this);
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

//----------------- FieldsContext ------------------------------------------------------------------

AssemblyParser::FieldsContext::FieldsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AssemblyParser::FieldContext *> AssemblyParser::FieldsContext::field() {
  return getRuleContexts<AssemblyParser::FieldContext>();
}

AssemblyParser::FieldContext* AssemblyParser::FieldsContext::field(size_t i) {
  return getRuleContext<AssemblyParser::FieldContext>(i);
}


size_t AssemblyParser::FieldsContext::getRuleIndex() const {
  return AssemblyParser::RuleFields;
}

void AssemblyParser::FieldsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFields(this);
}

void AssemblyParser::FieldsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AssemblyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFields(this);
}


std::any AssemblyParser::FieldsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitFields(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::FieldsContext* AssemblyParser::fields() {
  FieldsContext *_localctx = _tracker.createInstance<FieldsContext>(_ctx, getState());
  enterRule(_localctx, 22, AssemblyParser::RuleFields);
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
    match(AssemblyParser::T__40);
    setState(199);
    match(AssemblyParser::T__1);
    setState(203);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__9

    || _la == AssemblyParser::T__10) {
      setState(200);
      field();
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(206);
    match(AssemblyParser::T__8);
   
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
  enterRule(_localctx, 24, AssemblyParser::RuleField);
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
    setState(208);
    antlrcpp::downCast<FieldContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == AssemblyParser::T__9

    || _la == AssemblyParser::T__10)) {
      antlrcpp::downCast<FieldContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(209);
    match(AssemblyParser::STRING);
    setState(210);
    match(AssemblyParser::T__1);
    setState(211);
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
  enterRule(_localctx, 26, AssemblyParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(218);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(213);
      match(AssemblyParser::NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(214);
      match(AssemblyParser::STRING);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(215);
      match(AssemblyParser::CSTRING);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(216);
      array();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(217);
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
  enterRule(_localctx, 28, AssemblyParser::RuleArray);
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
    setState(220);
    match(AssemblyParser::T__15);
    setState(229);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 131941395398656) != 0) {
      setState(221);
      value();
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__41) {
        setState(222);
        match(AssemblyParser::T__41);
        setState(223);
        value();
        setState(228);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(231);
    match(AssemblyParser::T__17);
   
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
  enterRule(_localctx, 30, AssemblyParser::RuleFloat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(240);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(233);
      match(AssemblyParser::NUMBER);
      setState(234);
      match(AssemblyParser::T__42);
      setState(235);
      match(AssemblyParser::NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(236);
      match(AssemblyParser::NUMBER);
      setState(237);
      match(AssemblyParser::T__42);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(238);
      match(AssemblyParser::T__42);
      setState(239);
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
