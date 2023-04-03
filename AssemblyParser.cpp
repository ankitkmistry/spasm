
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
      "assembly", "metadata", "global", "method", "arg", "local", "line", 
      "exceptionItem", "class", "accessor", "field", "value", "array", "float"
    },
    std::vector<std::string>{
      "", "'globals'", "':'", "';'", "'minorVersion'", "'majorVersion'", 
      "'type'", "'XP'", "'SLL'", "'imports'", "'VAR'", "'CONST'", "'entry'", 
      "'method'", "'args'", "'locals'", "'['", "'closureStart'", "']'", 
      "'maxstack'", "'code'", "'exceptionTable'", "'VALUE'", "'REF'", "'-'", 
      "'->'", "'class'", "'CLASS'", "'INTERFACE'", "'ENUM'", "'ANNOTATION'", 
      "'accessors'", "'supers'", "'fields'", "'PRIVATE'", "'INTERNAL'", 
      "'PACKAGE_PRIVATE'", "'PROTECTED'", "'PUBLIC'", "'ABSTRACT'", "'FINAL'", 
      "'STATIC'", "'INLINE'", "','", "'.'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "NUMBER", "STRING", "CSTRING", 
      "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,49,247,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,1,0,
  	1,0,1,0,5,0,33,8,0,10,0,12,0,36,9,0,1,0,3,0,39,8,0,1,0,5,0,42,8,0,10,
  	0,12,0,45,9,0,1,0,5,0,48,8,0,10,0,12,0,51,9,0,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,3,3,72,8,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,5,3,80,8,3,10,3,12,3,83,9,3,1,3,3,3,86,8,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,3,3,94,8,3,1,3,1,3,5,3,98,8,3,10,3,12,3,101,9,3,1,3,3,
  	3,104,8,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,112,8,3,10,3,12,3,115,9,3,1,3,3,
  	3,118,8,3,1,3,1,3,1,3,5,3,123,8,3,10,3,12,3,126,9,3,1,3,3,3,129,8,3,1,
  	3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,3,6,145,8,6,1,6,
  	1,6,1,6,3,6,150,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,5,8,170,8,8,10,8,12,8,173,9,8,1,8,1,8,1,8,3,8,178,
  	8,8,1,8,1,8,1,8,5,8,183,8,8,10,8,12,8,186,9,8,1,8,3,8,189,8,8,1,8,5,8,
  	192,8,8,10,8,12,8,195,9,8,1,8,5,8,198,8,8,10,8,12,8,201,9,8,1,8,1,8,1,
  	9,1,9,1,10,5,10,208,8,10,10,10,12,10,211,9,10,1,10,1,10,1,10,1,10,1,10,
  	1,11,1,11,1,11,1,11,1,11,3,11,223,8,11,1,12,1,12,1,12,1,12,5,12,229,8,
  	12,10,12,12,12,232,9,12,3,12,234,8,12,1,12,1,12,1,13,1,13,1,13,1,13,1,
  	13,1,13,1,13,3,13,245,8,13,1,13,0,0,14,0,2,4,6,8,10,12,14,16,18,20,22,
  	24,26,0,5,1,0,7,8,1,0,10,11,1,0,22,23,1,0,27,30,1,0,34,42,264,0,28,1,
  	0,0,0,2,52,1,0,0,0,4,65,1,0,0,0,6,71,1,0,0,0,8,132,1,0,0,0,10,137,1,0,
  	0,0,12,144,1,0,0,0,14,151,1,0,0,0,16,159,1,0,0,0,18,204,1,0,0,0,20,209,
  	1,0,0,0,22,222,1,0,0,0,24,224,1,0,0,0,26,244,1,0,0,0,28,38,3,2,1,0,29,
  	30,5,1,0,0,30,34,5,2,0,0,31,33,3,4,2,0,32,31,1,0,0,0,33,36,1,0,0,0,34,
  	32,1,0,0,0,34,35,1,0,0,0,35,37,1,0,0,0,36,34,1,0,0,0,37,39,5,3,0,0,38,
  	29,1,0,0,0,38,39,1,0,0,0,39,43,1,0,0,0,40,42,3,6,3,0,41,40,1,0,0,0,42,
  	45,1,0,0,0,43,41,1,0,0,0,43,44,1,0,0,0,44,49,1,0,0,0,45,43,1,0,0,0,46,
  	48,3,16,8,0,47,46,1,0,0,0,48,51,1,0,0,0,49,47,1,0,0,0,49,50,1,0,0,0,50,
  	1,1,0,0,0,51,49,1,0,0,0,52,53,5,4,0,0,53,54,5,2,0,0,54,55,5,45,0,0,55,
  	56,5,5,0,0,56,57,5,2,0,0,57,58,5,45,0,0,58,59,5,6,0,0,59,60,5,2,0,0,60,
  	61,7,0,0,0,61,62,5,9,0,0,62,63,5,2,0,0,63,64,3,24,12,0,64,3,1,0,0,0,65,
  	66,7,1,0,0,66,67,5,48,0,0,67,68,5,2,0,0,68,69,5,46,0,0,69,5,1,0,0,0,70,
  	72,5,12,0,0,71,70,1,0,0,0,71,72,1,0,0,0,72,73,1,0,0,0,73,74,5,13,0,0,
  	74,75,5,46,0,0,75,85,5,2,0,0,76,77,5,14,0,0,77,81,5,2,0,0,78,80,3,8,4,
  	0,79,78,1,0,0,0,80,83,1,0,0,0,81,79,1,0,0,0,81,82,1,0,0,0,82,84,1,0,0,
  	0,83,81,1,0,0,0,84,86,5,3,0,0,85,76,1,0,0,0,85,86,1,0,0,0,86,103,1,0,
  	0,0,87,93,5,15,0,0,88,89,5,16,0,0,89,90,5,17,0,0,90,91,5,2,0,0,91,92,
  	5,45,0,0,92,94,5,18,0,0,93,88,1,0,0,0,93,94,1,0,0,0,94,95,1,0,0,0,95,
  	99,5,2,0,0,96,98,3,10,5,0,97,96,1,0,0,0,98,101,1,0,0,0,99,97,1,0,0,0,
  	99,100,1,0,0,0,100,102,1,0,0,0,101,99,1,0,0,0,102,104,5,3,0,0,103,87,
  	1,0,0,0,103,104,1,0,0,0,104,105,1,0,0,0,105,106,5,19,0,0,106,107,5,2,
  	0,0,107,117,5,45,0,0,108,109,5,20,0,0,109,113,5,2,0,0,110,112,3,12,6,
  	0,111,110,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,
  	116,1,0,0,0,115,113,1,0,0,0,116,118,5,3,0,0,117,108,1,0,0,0,117,118,1,
  	0,0,0,118,128,1,0,0,0,119,120,5,21,0,0,120,124,5,2,0,0,121,123,3,14,7,
  	0,122,121,1,0,0,0,123,126,1,0,0,0,124,122,1,0,0,0,124,125,1,0,0,0,125,
  	127,1,0,0,0,126,124,1,0,0,0,127,129,5,3,0,0,128,119,1,0,0,0,128,129,1,
  	0,0,0,129,130,1,0,0,0,130,131,5,3,0,0,131,7,1,0,0,0,132,133,7,2,0,0,133,
  	134,5,48,0,0,134,135,5,2,0,0,135,136,5,46,0,0,136,9,1,0,0,0,137,138,7,
  	1,0,0,138,139,5,48,0,0,139,140,5,2,0,0,140,141,5,46,0,0,141,11,1,0,0,
  	0,142,143,5,48,0,0,143,145,5,2,0,0,144,142,1,0,0,0,144,145,1,0,0,0,145,
  	146,1,0,0,0,146,149,5,48,0,0,147,150,3,22,11,0,148,150,5,48,0,0,149,147,
  	1,0,0,0,149,148,1,0,0,0,149,150,1,0,0,0,150,13,1,0,0,0,151,152,5,48,0,
  	0,152,153,5,24,0,0,153,154,5,48,0,0,154,155,5,25,0,0,155,156,5,48,0,0,
  	156,157,5,2,0,0,157,158,5,46,0,0,158,15,1,0,0,0,159,160,5,26,0,0,160,
  	161,5,46,0,0,161,162,5,2,0,0,162,163,5,6,0,0,163,164,5,2,0,0,164,165,
  	7,3,0,0,165,166,5,3,0,0,166,167,5,31,0,0,167,171,5,2,0,0,168,170,3,18,
  	9,0,169,168,1,0,0,0,170,173,1,0,0,0,171,169,1,0,0,0,171,172,1,0,0,0,172,
  	177,1,0,0,0,173,171,1,0,0,0,174,175,5,32,0,0,175,176,5,2,0,0,176,178,
  	3,24,12,0,177,174,1,0,0,0,177,178,1,0,0,0,178,188,1,0,0,0,179,180,5,33,
  	0,0,180,184,5,2,0,0,181,183,3,20,10,0,182,181,1,0,0,0,183,186,1,0,0,0,
  	184,182,1,0,0,0,184,185,1,0,0,0,185,187,1,0,0,0,186,184,1,0,0,0,187,189,
  	5,3,0,0,188,179,1,0,0,0,188,189,1,0,0,0,189,193,1,0,0,0,190,192,3,6,3,
  	0,191,190,1,0,0,0,192,195,1,0,0,0,193,191,1,0,0,0,193,194,1,0,0,0,194,
  	199,1,0,0,0,195,193,1,0,0,0,196,198,3,16,8,0,197,196,1,0,0,0,198,201,
  	1,0,0,0,199,197,1,0,0,0,199,200,1,0,0,0,200,202,1,0,0,0,201,199,1,0,0,
  	0,202,203,5,3,0,0,203,17,1,0,0,0,204,205,7,4,0,0,205,19,1,0,0,0,206,208,
  	3,18,9,0,207,206,1,0,0,0,208,211,1,0,0,0,209,207,1,0,0,0,209,210,1,0,
  	0,0,210,212,1,0,0,0,211,209,1,0,0,0,212,213,7,1,0,0,213,214,5,46,0,0,
  	214,215,5,2,0,0,215,216,5,46,0,0,216,21,1,0,0,0,217,223,5,45,0,0,218,
  	223,5,46,0,0,219,223,5,47,0,0,220,223,3,24,12,0,221,223,3,26,13,0,222,
  	217,1,0,0,0,222,218,1,0,0,0,222,219,1,0,0,0,222,220,1,0,0,0,222,221,1,
  	0,0,0,223,23,1,0,0,0,224,233,5,16,0,0,225,230,3,22,11,0,226,227,5,43,
  	0,0,227,229,3,22,11,0,228,226,1,0,0,0,229,232,1,0,0,0,230,228,1,0,0,0,
  	230,231,1,0,0,0,231,234,1,0,0,0,232,230,1,0,0,0,233,225,1,0,0,0,233,234,
  	1,0,0,0,234,235,1,0,0,0,235,236,5,18,0,0,236,25,1,0,0,0,237,238,5,45,
  	0,0,238,239,5,44,0,0,239,245,5,45,0,0,240,241,5,45,0,0,241,245,5,44,0,
  	0,242,243,5,44,0,0,243,245,5,45,0,0,244,237,1,0,0,0,244,240,1,0,0,0,244,
  	242,1,0,0,0,245,27,1,0,0,0,27,34,38,43,49,71,81,85,93,99,103,113,117,
  	124,128,144,149,171,177,184,188,193,199,209,222,230,233,244
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
    setState(28);
    metadata();
    setState(38);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__0) {
      setState(29);
      match(AssemblyParser::T__0);
      setState(30);
      match(AssemblyParser::T__1);
      setState(34);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__9

      || _la == AssemblyParser::T__10) {
        setState(31);
        global();
        setState(36);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(37);
      match(AssemblyParser::T__2);
    }
    setState(43);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__11

    || _la == AssemblyParser::T__12) {
      setState(40);
      method();
      setState(45);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__25) {
      setState(46);
      class_();
      setState(51);
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
    setState(52);
    match(AssemblyParser::T__3);
    setState(53);
    match(AssemblyParser::T__1);
    setState(54);
    match(AssemblyParser::NUMBER);
    setState(55);
    match(AssemblyParser::T__4);
    setState(56);
    match(AssemblyParser::T__1);
    setState(57);
    match(AssemblyParser::NUMBER);
    setState(58);
    match(AssemblyParser::T__5);
    setState(59);
    match(AssemblyParser::T__1);
    setState(60);
    antlrcpp::downCast<MetadataContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == AssemblyParser::T__6

    || _la == AssemblyParser::T__7)) {
      antlrcpp::downCast<MetadataContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(61);
    match(AssemblyParser::T__8);
    setState(62);
    match(AssemblyParser::T__1);
    setState(63);
    array();
   
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
  enterRule(_localctx, 4, AssemblyParser::RuleGlobal);
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
    setState(65);
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
    setState(66);
    match(AssemblyParser::ID);
    setState(67);
    match(AssemblyParser::T__1);
    setState(68);
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
  enterRule(_localctx, 6, AssemblyParser::RuleMethod);
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
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__11) {
      setState(70);
      antlrcpp::downCast<MethodContext *>(_localctx)->entry = match(AssemblyParser::T__11);
    }
    setState(73);
    match(AssemblyParser::T__12);
    setState(74);
    match(AssemblyParser::STRING);
    setState(75);
    match(AssemblyParser::T__1);
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__13) {
      setState(76);
      match(AssemblyParser::T__13);
      setState(77);
      match(AssemblyParser::T__1);
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__21

      || _la == AssemblyParser::T__22) {
        setState(78);
        arg();
        setState(83);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(84);
      match(AssemblyParser::T__2);
    }
    setState(103);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__14) {
      setState(87);
      match(AssemblyParser::T__14);
      setState(93);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AssemblyParser::T__15) {
        setState(88);
        match(AssemblyParser::T__15);
        setState(89);
        match(AssemblyParser::T__16);
        setState(90);
        match(AssemblyParser::T__1);
        setState(91);
        match(AssemblyParser::NUMBER);
        setState(92);
        match(AssemblyParser::T__17);
      }
      setState(95);
      match(AssemblyParser::T__1);
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__9

      || _la == AssemblyParser::T__10) {
        setState(96);
        local();
        setState(101);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(102);
      match(AssemblyParser::T__2);
    }
    setState(105);
    match(AssemblyParser::T__18);
    setState(106);
    match(AssemblyParser::T__1);
    setState(107);
    match(AssemblyParser::NUMBER);
    setState(117);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__19) {
      setState(108);
      match(AssemblyParser::T__19);
      setState(109);
      match(AssemblyParser::T__1);
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::ID) {
        setState(110);
        line();
        setState(115);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(116);
      match(AssemblyParser::T__2);
    }
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__20) {
      setState(119);
      match(AssemblyParser::T__20);
      setState(120);
      match(AssemblyParser::T__1);
      setState(124);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::ID) {
        setState(121);
        exceptionItem();
        setState(126);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(127);
      match(AssemblyParser::T__2);
    }
    setState(130);
    match(AssemblyParser::T__2);
   
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
  enterRule(_localctx, 8, AssemblyParser::RuleArg);
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
    setState(132);
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
    setState(133);
    match(AssemblyParser::ID);
    setState(134);
    match(AssemblyParser::T__1);
    setState(135);
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
  enterRule(_localctx, 10, AssemblyParser::RuleLocal);
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
    setState(137);
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
    setState(138);
    match(AssemblyParser::ID);
    setState(139);
    match(AssemblyParser::T__1);
    setState(140);
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
  enterRule(_localctx, 12, AssemblyParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(142);
      antlrcpp::downCast<LineContext *>(_localctx)->label = match(AssemblyParser::ID);
      setState(143);
      match(AssemblyParser::T__1);
      break;
    }

    default:
      break;
    }
    setState(146);
    antlrcpp::downCast<LineContext *>(_localctx)->opcode = match(AssemblyParser::ID);
    setState(149);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(147);
      value();
      break;
    }

    case 2: {
      setState(148);
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
  enterRule(_localctx, 14, AssemblyParser::RuleExceptionItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    match(AssemblyParser::ID);
    setState(152);
    match(AssemblyParser::T__23);
    setState(153);
    match(AssemblyParser::ID);
    setState(154);
    match(AssemblyParser::T__24);
    setState(155);
    match(AssemblyParser::ID);
    setState(156);
    match(AssemblyParser::T__1);
    setState(157);
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
  enterRule(_localctx, 16, AssemblyParser::RuleClass);
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
    setState(159);
    match(AssemblyParser::T__25);
    setState(160);
    match(AssemblyParser::STRING);
    setState(161);
    match(AssemblyParser::T__1);
    setState(162);
    match(AssemblyParser::T__5);
    setState(163);
    match(AssemblyParser::T__1);
    setState(164);
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
    setState(165);
    match(AssemblyParser::T__2);
    setState(166);
    match(AssemblyParser::T__30);
    setState(167);
    match(AssemblyParser::T__1);
    setState(171);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8778913153024) != 0) {
      setState(168);
      accessor();
      setState(173);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__31) {
      setState(174);
      match(AssemblyParser::T__31);
      setState(175);
      match(AssemblyParser::T__1);
      setState(176);
      antlrcpp::downCast<ClassContext *>(_localctx)->supers = array();
    }
    setState(188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__32) {
      setState(179);
      match(AssemblyParser::T__32);
      setState(180);
      match(AssemblyParser::T__1);
      setState(184);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 8778913156096) != 0) {
        setState(181);
        field();
        setState(186);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(187);
      match(AssemblyParser::T__2);
    }
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__11

    || _la == AssemblyParser::T__12) {
      setState(190);
      method();
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(199);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__25) {
      setState(196);
      class_();
      setState(201);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(202);
    match(AssemblyParser::T__2);
   
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
  enterRule(_localctx, 18, AssemblyParser::RuleAccessor);
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
    setState(204);
    antlrcpp::downCast<AccessorContext *>(_localctx)->modifier = _input->LT(1);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8778913153024) != 0)) {
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
  enterRule(_localctx, 20, AssemblyParser::RuleField);
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
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8778913153024) != 0) {
      setState(206);
      accessor();
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(212);
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
    setState(213);
    match(AssemblyParser::STRING);
    setState(214);
    match(AssemblyParser::T__1);
    setState(215);
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
  enterRule(_localctx, 22, AssemblyParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(222);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(217);
      match(AssemblyParser::NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(218);
      match(AssemblyParser::STRING);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(219);
      match(AssemblyParser::CSTRING);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(220);
      array();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(221);
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
  enterRule(_localctx, 24, AssemblyParser::RuleArray);
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
    setState(224);
    match(AssemblyParser::T__15);
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 263882790731776) != 0) {
      setState(225);
      value();
      setState(230);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__42) {
        setState(226);
        match(AssemblyParser::T__42);
        setState(227);
        value();
        setState(232);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(235);
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
  enterRule(_localctx, 26, AssemblyParser::RuleFloat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(244);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(237);
      match(AssemblyParser::NUMBER);
      setState(238);
      match(AssemblyParser::T__43);
      setState(239);
      match(AssemblyParser::NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(240);
      match(AssemblyParser::NUMBER);
      setState(241);
      match(AssemblyParser::T__43);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(242);
      match(AssemblyParser::T__43);
      setState(243);
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
