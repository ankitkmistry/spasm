
// Generated from src/assembler/Assembly.g4 by ANTLR 4.12.0


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
      "class", "accessor", "field", "value", "array", "float", "name", "signature", 
      "signModule", "signClass", "signMethod", "signParams", "signParam", 
      "signTypeParams"
    },
    std::vector<std::string>{
      "", "'module'", "':'", "'imports'", "'globals'", "';'", "'VAR'", "'CONST'", 
      "'entry'", "'init'", "'method'", "'args'", "'locals'", "'['", "'closureStart'", 
      "']'", "'maxstack'", "'code'", "'exceptionTable'", "'-'", "'->'", 
      "'class'", "'type'", "'CLASS'", "'INTERFACE'", "'ENUM'", "'ANNOTATION'", 
      "'accessors'", "'supers'", "'fields'", "'PRIVATE'", "'INTERNAL'", 
      "'PACKAGE_PRIVATE'", "'PROTECTED'", "'PUBLIC'", "'ABSTRACT'", "'FINAL'", 
      "'STATIC'", "'INLINE'", "','", "'.'", "'<'", "'>'", "'::'", "'('", 
      "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "NUMBER", "STRING", 
      "CSTRING", "ID", "LABEL", "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,52,347,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,3,0,50,8,0,1,0,1,0,1,0,5,0,55,8,0,10,0,12,0,58,
  	9,0,1,0,3,0,61,8,0,1,0,5,0,64,8,0,10,0,12,0,67,9,0,1,0,5,0,70,8,0,10,
  	0,12,0,73,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,3,2,83,8,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,5,2,91,8,2,10,2,12,2,94,9,2,1,2,3,2,97,8,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,3,2,105,8,2,1,2,1,2,5,2,109,8,2,10,2,12,2,112,9,2,1,2,3,2,115,
  	8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,124,8,2,10,2,12,2,127,9,2,1,2,3,2,
  	130,8,2,1,2,1,2,1,2,5,2,135,8,2,10,2,12,2,138,9,2,1,2,3,2,141,8,2,1,2,
  	1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,3,5,155,8,5,1,5,1,5,1,5,3,
  	5,160,8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,5,7,180,8,7,10,7,12,7,183,9,7,1,7,1,7,1,7,3,7,188,8,7,1,7,
  	1,7,1,7,5,7,193,8,7,10,7,12,7,196,9,7,1,7,3,7,199,8,7,1,7,5,7,202,8,7,
  	10,7,12,7,205,9,7,1,7,5,7,208,8,7,10,7,12,7,211,9,7,1,7,1,7,1,8,1,8,1,
  	9,5,9,218,8,9,10,9,12,9,221,9,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,
  	10,1,10,1,10,3,10,234,8,10,1,11,1,11,1,11,1,11,5,11,240,8,11,10,11,12,
  	11,243,9,11,1,11,3,11,246,8,11,3,11,248,8,11,1,11,1,11,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,3,12,259,8,12,1,13,1,13,1,14,1,14,1,14,1,14,3,14,
  	267,8,14,5,14,269,8,14,10,14,12,14,272,9,14,1,14,1,14,1,14,3,14,277,8,
  	14,4,14,279,8,14,11,14,12,14,280,1,14,1,14,1,14,3,14,286,8,14,1,15,1,
  	15,1,15,5,15,291,8,15,10,15,12,15,294,9,15,1,16,1,16,3,16,298,8,16,1,
  	17,1,17,3,17,302,8,17,1,17,1,17,1,18,1,18,1,18,1,18,5,18,310,8,18,10,
  	18,12,18,313,9,18,3,18,315,8,18,1,18,1,18,1,19,3,19,320,8,19,1,19,1,19,
  	4,19,324,8,19,11,19,12,19,325,1,19,1,19,1,19,3,19,331,8,19,1,19,3,19,
  	334,8,19,1,20,1,20,1,20,1,20,5,20,340,8,20,10,20,12,20,343,9,20,1,20,
  	1,20,1,20,0,0,21,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,
  	38,40,0,5,1,0,6,7,1,0,8,9,1,0,23,26,1,0,30,38,2,0,47,47,49,49,376,0,42,
  	1,0,0,0,2,76,1,0,0,0,4,82,1,0,0,0,6,144,1,0,0,0,8,148,1,0,0,0,10,154,
  	1,0,0,0,12,161,1,0,0,0,14,169,1,0,0,0,16,214,1,0,0,0,18,219,1,0,0,0,20,
  	233,1,0,0,0,22,235,1,0,0,0,24,258,1,0,0,0,26,260,1,0,0,0,28,285,1,0,0,
  	0,30,287,1,0,0,0,32,295,1,0,0,0,34,299,1,0,0,0,36,305,1,0,0,0,38,330,
  	1,0,0,0,40,335,1,0,0,0,42,43,5,1,0,0,43,44,5,2,0,0,44,45,5,49,0,0,45,
  	49,1,0,0,0,46,47,5,3,0,0,47,48,5,2,0,0,48,50,3,22,11,0,49,46,1,0,0,0,
  	49,50,1,0,0,0,50,60,1,0,0,0,51,52,5,4,0,0,52,56,5,2,0,0,53,55,3,2,1,0,
  	54,53,1,0,0,0,55,58,1,0,0,0,56,54,1,0,0,0,56,57,1,0,0,0,57,59,1,0,0,0,
  	58,56,1,0,0,0,59,61,5,5,0,0,60,51,1,0,0,0,60,61,1,0,0,0,61,65,1,0,0,0,
  	62,64,3,4,2,0,63,62,1,0,0,0,64,67,1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,0,
  	66,71,1,0,0,0,67,65,1,0,0,0,68,70,3,14,7,0,69,68,1,0,0,0,70,73,1,0,0,
  	0,71,69,1,0,0,0,71,72,1,0,0,0,72,74,1,0,0,0,73,71,1,0,0,0,74,75,5,0,0,
  	1,75,1,1,0,0,0,76,77,7,0,0,0,77,78,3,26,13,0,78,79,5,2,0,0,79,80,3,28,
  	14,0,80,3,1,0,0,0,81,83,7,1,0,0,82,81,1,0,0,0,82,83,1,0,0,0,83,84,1,0,
  	0,0,84,85,5,10,0,0,85,86,3,28,14,0,86,96,5,2,0,0,87,88,5,11,0,0,88,92,
  	5,2,0,0,89,91,3,6,3,0,90,89,1,0,0,0,91,94,1,0,0,0,92,90,1,0,0,0,92,93,
  	1,0,0,0,93,95,1,0,0,0,94,92,1,0,0,0,95,97,5,5,0,0,96,87,1,0,0,0,96,97,
  	1,0,0,0,97,114,1,0,0,0,98,104,5,12,0,0,99,100,5,13,0,0,100,101,5,14,0,
  	0,101,102,5,2,0,0,102,103,5,46,0,0,103,105,5,15,0,0,104,99,1,0,0,0,104,
  	105,1,0,0,0,105,106,1,0,0,0,106,110,5,2,0,0,107,109,3,8,4,0,108,107,1,
  	0,0,0,109,112,1,0,0,0,110,108,1,0,0,0,110,111,1,0,0,0,111,113,1,0,0,0,
  	112,110,1,0,0,0,113,115,5,5,0,0,114,98,1,0,0,0,114,115,1,0,0,0,115,116,
  	1,0,0,0,116,117,5,16,0,0,117,118,5,2,0,0,118,119,5,46,0,0,119,129,5,5,
  	0,0,120,121,5,17,0,0,121,125,5,2,0,0,122,124,3,10,5,0,123,122,1,0,0,0,
  	124,127,1,0,0,0,125,123,1,0,0,0,125,126,1,0,0,0,126,128,1,0,0,0,127,125,
  	1,0,0,0,128,130,5,5,0,0,129,120,1,0,0,0,129,130,1,0,0,0,130,140,1,0,0,
  	0,131,132,5,18,0,0,132,136,5,2,0,0,133,135,3,12,6,0,134,133,1,0,0,0,135,
  	138,1,0,0,0,136,134,1,0,0,0,136,137,1,0,0,0,137,139,1,0,0,0,138,136,1,
  	0,0,0,139,141,5,5,0,0,140,131,1,0,0,0,140,141,1,0,0,0,141,142,1,0,0,0,
  	142,143,5,5,0,0,143,5,1,0,0,0,144,145,3,26,13,0,145,146,5,2,0,0,146,147,
  	3,28,14,0,147,7,1,0,0,0,148,149,3,26,13,0,149,150,5,2,0,0,150,151,3,28,
  	14,0,151,9,1,0,0,0,152,153,5,50,0,0,153,155,5,2,0,0,154,152,1,0,0,0,154,
  	155,1,0,0,0,155,156,1,0,0,0,156,159,5,49,0,0,157,160,3,20,10,0,158,160,
  	5,50,0,0,159,157,1,0,0,0,159,158,1,0,0,0,159,160,1,0,0,0,160,11,1,0,0,
  	0,161,162,5,49,0,0,162,163,5,19,0,0,163,164,5,49,0,0,164,165,5,20,0,0,
  	165,166,5,49,0,0,166,167,5,2,0,0,167,168,3,28,14,0,168,13,1,0,0,0,169,
  	170,5,21,0,0,170,171,3,28,14,0,171,172,5,2,0,0,172,173,5,22,0,0,173,174,
  	5,2,0,0,174,175,7,2,0,0,175,176,5,5,0,0,176,177,5,27,0,0,177,181,5,2,
  	0,0,178,180,3,16,8,0,179,178,1,0,0,0,180,183,1,0,0,0,181,179,1,0,0,0,
  	181,182,1,0,0,0,182,187,1,0,0,0,183,181,1,0,0,0,184,185,5,28,0,0,185,
  	186,5,2,0,0,186,188,3,22,11,0,187,184,1,0,0,0,187,188,1,0,0,0,188,198,
  	1,0,0,0,189,190,5,29,0,0,190,194,5,2,0,0,191,193,3,18,9,0,192,191,1,0,
  	0,0,193,196,1,0,0,0,194,192,1,0,0,0,194,195,1,0,0,0,195,197,1,0,0,0,196,
  	194,1,0,0,0,197,199,5,5,0,0,198,189,1,0,0,0,198,199,1,0,0,0,199,203,1,
  	0,0,0,200,202,3,4,2,0,201,200,1,0,0,0,202,205,1,0,0,0,203,201,1,0,0,0,
  	203,204,1,0,0,0,204,209,1,0,0,0,205,203,1,0,0,0,206,208,3,14,7,0,207,
  	206,1,0,0,0,208,211,1,0,0,0,209,207,1,0,0,0,209,210,1,0,0,0,210,212,1,
  	0,0,0,211,209,1,0,0,0,212,213,5,5,0,0,213,15,1,0,0,0,214,215,7,3,0,0,
  	215,17,1,0,0,0,216,218,3,16,8,0,217,216,1,0,0,0,218,221,1,0,0,0,219,217,
  	1,0,0,0,219,220,1,0,0,0,220,222,1,0,0,0,221,219,1,0,0,0,222,223,7,0,0,
  	0,223,224,3,26,13,0,224,225,5,2,0,0,225,226,3,28,14,0,226,19,1,0,0,0,
  	227,234,5,46,0,0,228,234,5,47,0,0,229,234,5,48,0,0,230,234,3,22,11,0,
  	231,234,3,24,12,0,232,234,3,28,14,0,233,227,1,0,0,0,233,228,1,0,0,0,233,
  	229,1,0,0,0,233,230,1,0,0,0,233,231,1,0,0,0,233,232,1,0,0,0,234,21,1,
  	0,0,0,235,247,5,13,0,0,236,241,3,20,10,0,237,238,5,39,0,0,238,240,3,20,
  	10,0,239,237,1,0,0,0,240,243,1,0,0,0,241,239,1,0,0,0,241,242,1,0,0,0,
  	242,245,1,0,0,0,243,241,1,0,0,0,244,246,5,39,0,0,245,244,1,0,0,0,245,
  	246,1,0,0,0,246,248,1,0,0,0,247,236,1,0,0,0,247,248,1,0,0,0,248,249,1,
  	0,0,0,249,250,5,15,0,0,250,23,1,0,0,0,251,252,5,46,0,0,252,253,5,40,0,
  	0,253,259,5,46,0,0,254,255,5,46,0,0,255,259,5,40,0,0,256,257,5,40,0,0,
  	257,259,5,46,0,0,258,251,1,0,0,0,258,254,1,0,0,0,258,256,1,0,0,0,259,
  	25,1,0,0,0,260,261,7,4,0,0,261,27,1,0,0,0,262,270,3,30,15,0,263,266,5,
  	40,0,0,264,267,3,32,16,0,265,267,3,34,17,0,266,264,1,0,0,0,266,265,1,
  	0,0,0,267,269,1,0,0,0,268,263,1,0,0,0,269,272,1,0,0,0,270,268,1,0,0,0,
  	270,271,1,0,0,0,271,286,1,0,0,0,272,270,1,0,0,0,273,276,5,40,0,0,274,
  	277,3,32,16,0,275,277,3,34,17,0,276,274,1,0,0,0,276,275,1,0,0,0,277,279,
  	1,0,0,0,278,273,1,0,0,0,279,280,1,0,0,0,280,278,1,0,0,0,280,281,1,0,0,
  	0,281,286,1,0,0,0,282,283,5,41,0,0,283,284,5,49,0,0,284,286,5,42,0,0,
  	285,262,1,0,0,0,285,278,1,0,0,0,285,282,1,0,0,0,286,29,1,0,0,0,287,292,
  	5,49,0,0,288,289,5,43,0,0,289,291,5,49,0,0,290,288,1,0,0,0,291,294,1,
  	0,0,0,292,290,1,0,0,0,292,293,1,0,0,0,293,31,1,0,0,0,294,292,1,0,0,0,
  	295,297,5,49,0,0,296,298,3,40,20,0,297,296,1,0,0,0,297,298,1,0,0,0,298,
  	33,1,0,0,0,299,301,5,49,0,0,300,302,3,40,20,0,301,300,1,0,0,0,301,302,
  	1,0,0,0,302,303,1,0,0,0,303,304,3,36,18,0,304,35,1,0,0,0,305,314,5,44,
  	0,0,306,311,3,38,19,0,307,308,5,39,0,0,308,310,3,38,19,0,309,307,1,0,
  	0,0,310,313,1,0,0,0,311,309,1,0,0,0,311,312,1,0,0,0,312,315,1,0,0,0,313,
  	311,1,0,0,0,314,306,1,0,0,0,314,315,1,0,0,0,315,316,1,0,0,0,316,317,5,
  	45,0,0,317,37,1,0,0,0,318,320,3,30,15,0,319,318,1,0,0,0,319,320,1,0,0,
  	0,320,323,1,0,0,0,321,322,5,40,0,0,322,324,3,32,16,0,323,321,1,0,0,0,
  	324,325,1,0,0,0,325,323,1,0,0,0,325,326,1,0,0,0,326,331,1,0,0,0,327,328,
  	5,41,0,0,328,329,5,49,0,0,329,331,5,42,0,0,330,319,1,0,0,0,330,327,1,
  	0,0,0,331,333,1,0,0,0,332,334,3,36,18,0,333,332,1,0,0,0,333,334,1,0,0,
  	0,334,39,1,0,0,0,335,336,5,41,0,0,336,341,5,49,0,0,337,338,5,39,0,0,338,
  	340,5,49,0,0,339,337,1,0,0,0,340,343,1,0,0,0,341,339,1,0,0,0,341,342,
  	1,0,0,0,342,344,1,0,0,0,343,341,1,0,0,0,344,345,5,42,0,0,345,41,1,0,0,
  	0,44,49,56,60,65,71,82,92,96,104,110,114,125,129,136,140,154,159,181,
  	187,194,198,203,209,219,233,241,245,247,258,266,270,276,280,285,292,297,
  	301,311,314,319,325,330,333,341
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
    setState(42);
    match(AssemblyParser::T__0);
    setState(43);
    match(AssemblyParser::T__1);
    setState(44);
    antlrcpp::downCast<AssemblyContext *>(_localctx)->module = match(AssemblyParser::ID);
    setState(49);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__2) {
      setState(46);
      match(AssemblyParser::T__2);
      setState(47);
      match(AssemblyParser::T__1);
      setState(48);
      array();
    }
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__3) {
      setState(51);
      match(AssemblyParser::T__3);
      setState(52);
      match(AssemblyParser::T__1);
      setState(56);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__5

      || _la == AssemblyParser::T__6) {
        setState(53);
        global();
        setState(58);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(59);
      match(AssemblyParser::T__4);
    }
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1792) != 0)) {
      setState(62);
      method();
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(71);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__20) {
      setState(68);
      class_();
      setState(73);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(74);
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

AssemblyParser::NameContext* AssemblyParser::GlobalContext::name() {
  return getRuleContext<AssemblyParser::NameContext>(0);
}

AssemblyParser::SignatureContext* AssemblyParser::GlobalContext::signature() {
  return getRuleContext<AssemblyParser::SignatureContext>(0);
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
    setState(76);
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
    setState(77);
    name();
    setState(78);
    match(AssemblyParser::T__1);
    setState(79);
    signature();
   
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

AssemblyParser::SignatureContext* AssemblyParser::MethodContext::signature() {
  return getRuleContext<AssemblyParser::SignatureContext>(0);
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
    setState(82);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__7

    || _la == AssemblyParser::T__8) {
      setState(81);
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
    setState(84);
    match(AssemblyParser::T__9);
    setState(85);
    signature();
    setState(86);
    match(AssemblyParser::T__1);
    setState(96);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__10) {
      setState(87);
      match(AssemblyParser::T__10);
      setState(88);
      match(AssemblyParser::T__1);
      setState(92);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::STRING

      || _la == AssemblyParser::ID) {
        setState(89);
        arg();
        setState(94);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(95);
      match(AssemblyParser::T__4);
    }
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__11) {
      setState(98);
      match(AssemblyParser::T__11);
      setState(104);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AssemblyParser::T__12) {
        setState(99);
        match(AssemblyParser::T__12);
        setState(100);
        match(AssemblyParser::T__13);
        setState(101);
        match(AssemblyParser::T__1);
        setState(102);
        match(AssemblyParser::NUMBER);
        setState(103);
        match(AssemblyParser::T__14);
      }
      setState(106);
      match(AssemblyParser::T__1);
      setState(110);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::STRING

      || _la == AssemblyParser::ID) {
        setState(107);
        local();
        setState(112);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(113);
      match(AssemblyParser::T__4);
    }
    setState(116);
    match(AssemblyParser::T__15);
    setState(117);
    match(AssemblyParser::T__1);
    setState(118);
    match(AssemblyParser::NUMBER);
    setState(119);
    match(AssemblyParser::T__4);
    setState(129);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__16) {
      setState(120);
      match(AssemblyParser::T__16);
      setState(121);
      match(AssemblyParser::T__1);
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::ID

      || _la == AssemblyParser::LABEL) {
        setState(122);
        line();
        setState(127);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(128);
      match(AssemblyParser::T__4);
    }
    setState(140);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__17) {
      setState(131);
      match(AssemblyParser::T__17);
      setState(132);
      match(AssemblyParser::T__1);
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::ID) {
        setState(133);
        exceptionItem();
        setState(138);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(139);
      match(AssemblyParser::T__4);
    }
    setState(142);
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

AssemblyParser::NameContext* AssemblyParser::ArgContext::name() {
  return getRuleContext<AssemblyParser::NameContext>(0);
}

AssemblyParser::SignatureContext* AssemblyParser::ArgContext::signature() {
  return getRuleContext<AssemblyParser::SignatureContext>(0);
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
    setState(144);
    name();
    setState(145);
    match(AssemblyParser::T__1);
    setState(146);
    signature();
   
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

AssemblyParser::NameContext* AssemblyParser::LocalContext::name() {
  return getRuleContext<AssemblyParser::NameContext>(0);
}

AssemblyParser::SignatureContext* AssemblyParser::LocalContext::signature() {
  return getRuleContext<AssemblyParser::SignatureContext>(0);
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
    setState(148);
    name();
    setState(149);
    match(AssemblyParser::T__1);
    setState(150);
    signature();
   
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
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::LABEL) {
      setState(152);
      antlrcpp::downCast<LineContext *>(_localctx)->label = match(AssemblyParser::LABEL);
      setState(153);
      match(AssemblyParser::T__1);
    }
    setState(156);
    antlrcpp::downCast<LineContext *>(_localctx)->opcode = match(AssemblyParser::ID);
    setState(159);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(157);
      value();
      break;
    }

    case 2: {
      setState(158);
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

AssemblyParser::SignatureContext* AssemblyParser::ExceptionItemContext::signature() {
  return getRuleContext<AssemblyParser::SignatureContext>(0);
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
    setState(161);
    match(AssemblyParser::ID);
    setState(162);
    match(AssemblyParser::T__18);
    setState(163);
    match(AssemblyParser::ID);
    setState(164);
    match(AssemblyParser::T__19);
    setState(165);
    match(AssemblyParser::ID);
    setState(166);
    match(AssemblyParser::T__1);
    setState(167);
    signature();
   
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

AssemblyParser::SignatureContext* AssemblyParser::ClassContext::signature() {
  return getRuleContext<AssemblyParser::SignatureContext>(0);
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
    setState(169);
    match(AssemblyParser::T__20);
    setState(170);
    signature();
    setState(171);
    match(AssemblyParser::T__1);
    setState(172);
    match(AssemblyParser::T__21);
    setState(173);
    match(AssemblyParser::T__1);
    setState(174);
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
    setState(175);
    match(AssemblyParser::T__4);
    setState(176);
    match(AssemblyParser::T__26);
    setState(177);
    match(AssemblyParser::T__1);
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 548682072064) != 0)) {
      setState(178);
      accessor();
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(187);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__27) {
      setState(184);
      match(AssemblyParser::T__27);
      setState(185);
      match(AssemblyParser::T__1);
      setState(186);
      antlrcpp::downCast<ClassContext *>(_localctx)->supers = array();
    }
    setState(198);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__28) {
      setState(189);
      match(AssemblyParser::T__28);
      setState(190);
      match(AssemblyParser::T__1);
      setState(194);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 548682072256) != 0)) {
        setState(191);
        field();
        setState(196);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(197);
      match(AssemblyParser::T__4);
    }
    setState(203);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1792) != 0)) {
      setState(200);
      method();
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__20) {
      setState(206);
      class_();
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(212);
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
    setState(214);
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

AssemblyParser::NameContext* AssemblyParser::FieldContext::name() {
  return getRuleContext<AssemblyParser::NameContext>(0);
}

AssemblyParser::SignatureContext* AssemblyParser::FieldContext::signature() {
  return getRuleContext<AssemblyParser::SignatureContext>(0);
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
    setState(219);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 548682072064) != 0)) {
      setState(216);
      accessor();
      setState(221);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(222);
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
    setState(223);
    name();
    setState(224);
    match(AssemblyParser::T__1);
    setState(225);
    signature();
   
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

AssemblyParser::SignatureContext* AssemblyParser::ValueContext::signature() {
  return getRuleContext<AssemblyParser::SignatureContext>(0);
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
    setState(233);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(227);
      match(AssemblyParser::NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(228);
      match(AssemblyParser::STRING);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(229);
      match(AssemblyParser::CSTRING);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(230);
      array();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(231);
      float_();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(232);
      signature();
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
    setState(235);
    match(AssemblyParser::T__12);
    setState(247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1058829697556480) != 0)) {
      setState(236);
      value();
      setState(241);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(237);
          match(AssemblyParser::T__38);
          setState(238);
          value(); 
        }
        setState(243);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      }
      setState(245);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AssemblyParser::T__38) {
        setState(244);
        match(AssemblyParser::T__38);
      }
    }
    setState(249);
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
    setState(258);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(251);
      match(AssemblyParser::NUMBER);
      setState(252);
      match(AssemblyParser::T__39);
      setState(253);
      match(AssemblyParser::NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(254);
      match(AssemblyParser::NUMBER);
      setState(255);
      match(AssemblyParser::T__39);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(256);
      match(AssemblyParser::T__39);
      setState(257);
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

//----------------- NameContext ------------------------------------------------------------------

AssemblyParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AssemblyParser::NameContext::ID() {
  return getToken(AssemblyParser::ID, 0);
}

tree::TerminalNode* AssemblyParser::NameContext::STRING() {
  return getToken(AssemblyParser::STRING, 0);
}


size_t AssemblyParser::NameContext::getRuleIndex() const {
  return AssemblyParser::RuleName;
}


std::any AssemblyParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::NameContext* AssemblyParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 26, AssemblyParser::RuleName);
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
    setState(260);
    _la = _input->LA(1);
    if (!(_la == AssemblyParser::STRING

    || _la == AssemblyParser::ID)) {
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

//----------------- SignatureContext ------------------------------------------------------------------

AssemblyParser::SignatureContext::SignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AssemblyParser::SignModuleContext* AssemblyParser::SignatureContext::signModule() {
  return getRuleContext<AssemblyParser::SignModuleContext>(0);
}

std::vector<AssemblyParser::SignClassContext *> AssemblyParser::SignatureContext::signClass() {
  return getRuleContexts<AssemblyParser::SignClassContext>();
}

AssemblyParser::SignClassContext* AssemblyParser::SignatureContext::signClass(size_t i) {
  return getRuleContext<AssemblyParser::SignClassContext>(i);
}

std::vector<AssemblyParser::SignMethodContext *> AssemblyParser::SignatureContext::signMethod() {
  return getRuleContexts<AssemblyParser::SignMethodContext>();
}

AssemblyParser::SignMethodContext* AssemblyParser::SignatureContext::signMethod(size_t i) {
  return getRuleContext<AssemblyParser::SignMethodContext>(i);
}

tree::TerminalNode* AssemblyParser::SignatureContext::ID() {
  return getToken(AssemblyParser::ID, 0);
}


size_t AssemblyParser::SignatureContext::getRuleIndex() const {
  return AssemblyParser::RuleSignature;
}


std::any AssemblyParser::SignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitSignature(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::SignatureContext* AssemblyParser::signature() {
  SignatureContext *_localctx = _tracker.createInstance<SignatureContext>(_ctx, getState());
  enterRule(_localctx, 28, AssemblyParser::RuleSignature);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(285);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AssemblyParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(262);
        signModule();
        setState(270);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == AssemblyParser::T__39) {
          setState(263);
          match(AssemblyParser::T__39);
          setState(266);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
          case 1: {
            setState(264);
            signClass();
            break;
          }

          case 2: {
            setState(265);
            signMethod();
            break;
          }

          default:
            break;
          }
          setState(272);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case AssemblyParser::T__39: {
        enterOuterAlt(_localctx, 2);
        setState(278); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(273);
          match(AssemblyParser::T__39);
          setState(276);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
          case 1: {
            setState(274);
            signClass();
            break;
          }

          case 2: {
            setState(275);
            signMethod();
            break;
          }

          default:
            break;
          }
          setState(280); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == AssemblyParser::T__39);
        break;
      }

      case AssemblyParser::T__40: {
        enterOuterAlt(_localctx, 3);
        setState(282);
        match(AssemblyParser::T__40);
        setState(283);
        match(AssemblyParser::ID);
        setState(284);
        match(AssemblyParser::T__41);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignModuleContext ------------------------------------------------------------------

AssemblyParser::SignModuleContext::SignModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AssemblyParser::SignModuleContext::ID() {
  return getTokens(AssemblyParser::ID);
}

tree::TerminalNode* AssemblyParser::SignModuleContext::ID(size_t i) {
  return getToken(AssemblyParser::ID, i);
}


size_t AssemblyParser::SignModuleContext::getRuleIndex() const {
  return AssemblyParser::RuleSignModule;
}


std::any AssemblyParser::SignModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitSignModule(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::SignModuleContext* AssemblyParser::signModule() {
  SignModuleContext *_localctx = _tracker.createInstance<SignModuleContext>(_ctx, getState());
  enterRule(_localctx, 30, AssemblyParser::RuleSignModule);
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
    setState(287);
    match(AssemblyParser::ID);
    setState(292);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__42) {
      setState(288);
      match(AssemblyParser::T__42);
      setState(289);
      match(AssemblyParser::ID);
      setState(294);
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

//----------------- SignClassContext ------------------------------------------------------------------

AssemblyParser::SignClassContext::SignClassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AssemblyParser::SignClassContext::ID() {
  return getToken(AssemblyParser::ID, 0);
}

AssemblyParser::SignTypeParamsContext* AssemblyParser::SignClassContext::signTypeParams() {
  return getRuleContext<AssemblyParser::SignTypeParamsContext>(0);
}


size_t AssemblyParser::SignClassContext::getRuleIndex() const {
  return AssemblyParser::RuleSignClass;
}


std::any AssemblyParser::SignClassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitSignClass(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::SignClassContext* AssemblyParser::signClass() {
  SignClassContext *_localctx = _tracker.createInstance<SignClassContext>(_ctx, getState());
  enterRule(_localctx, 32, AssemblyParser::RuleSignClass);
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
    setState(295);
    match(AssemblyParser::ID);
    setState(297);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__40) {
      setState(296);
      signTypeParams();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignMethodContext ------------------------------------------------------------------

AssemblyParser::SignMethodContext::SignMethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AssemblyParser::SignMethodContext::ID() {
  return getToken(AssemblyParser::ID, 0);
}

AssemblyParser::SignParamsContext* AssemblyParser::SignMethodContext::signParams() {
  return getRuleContext<AssemblyParser::SignParamsContext>(0);
}

AssemblyParser::SignTypeParamsContext* AssemblyParser::SignMethodContext::signTypeParams() {
  return getRuleContext<AssemblyParser::SignTypeParamsContext>(0);
}


size_t AssemblyParser::SignMethodContext::getRuleIndex() const {
  return AssemblyParser::RuleSignMethod;
}


std::any AssemblyParser::SignMethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitSignMethod(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::SignMethodContext* AssemblyParser::signMethod() {
  SignMethodContext *_localctx = _tracker.createInstance<SignMethodContext>(_ctx, getState());
  enterRule(_localctx, 34, AssemblyParser::RuleSignMethod);
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
    setState(299);
    match(AssemblyParser::ID);
    setState(301);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__40) {
      setState(300);
      signTypeParams();
    }
    setState(303);
    signParams();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignParamsContext ------------------------------------------------------------------

AssemblyParser::SignParamsContext::SignParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AssemblyParser::SignParamContext *> AssemblyParser::SignParamsContext::signParam() {
  return getRuleContexts<AssemblyParser::SignParamContext>();
}

AssemblyParser::SignParamContext* AssemblyParser::SignParamsContext::signParam(size_t i) {
  return getRuleContext<AssemblyParser::SignParamContext>(i);
}


size_t AssemblyParser::SignParamsContext::getRuleIndex() const {
  return AssemblyParser::RuleSignParams;
}


std::any AssemblyParser::SignParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitSignParams(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::SignParamsContext* AssemblyParser::signParams() {
  SignParamsContext *_localctx = _tracker.createInstance<SignParamsContext>(_ctx, getState());
  enterRule(_localctx, 36, AssemblyParser::RuleSignParams);
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
    setState(305);
    match(AssemblyParser::T__43);
    setState(314);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 566248488304640) != 0)) {
      setState(306);
      signParam();
      setState(311);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AssemblyParser::T__38) {
        setState(307);
        match(AssemblyParser::T__38);
        setState(308);
        signParam();
        setState(313);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(316);
    match(AssemblyParser::T__44);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignParamContext ------------------------------------------------------------------

AssemblyParser::SignParamContext::SignParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AssemblyParser::SignParamContext::ID() {
  return getToken(AssemblyParser::ID, 0);
}

AssemblyParser::SignParamsContext* AssemblyParser::SignParamContext::signParams() {
  return getRuleContext<AssemblyParser::SignParamsContext>(0);
}

AssemblyParser::SignModuleContext* AssemblyParser::SignParamContext::signModule() {
  return getRuleContext<AssemblyParser::SignModuleContext>(0);
}

std::vector<AssemblyParser::SignClassContext *> AssemblyParser::SignParamContext::signClass() {
  return getRuleContexts<AssemblyParser::SignClassContext>();
}

AssemblyParser::SignClassContext* AssemblyParser::SignParamContext::signClass(size_t i) {
  return getRuleContext<AssemblyParser::SignClassContext>(i);
}


size_t AssemblyParser::SignParamContext::getRuleIndex() const {
  return AssemblyParser::RuleSignParam;
}


std::any AssemblyParser::SignParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitSignParam(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::SignParamContext* AssemblyParser::signParam() {
  SignParamContext *_localctx = _tracker.createInstance<SignParamContext>(_ctx, getState());
  enterRule(_localctx, 38, AssemblyParser::RuleSignParam);
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
    setState(330);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AssemblyParser::T__39:
      case AssemblyParser::ID: {
        setState(319);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == AssemblyParser::ID) {
          setState(318);
          signModule();
        }
        setState(323); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(321);
          match(AssemblyParser::T__39);
          setState(322);
          signClass();
          setState(325); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == AssemblyParser::T__39);
        break;
      }

      case AssemblyParser::T__40: {
        setState(327);
        match(AssemblyParser::T__40);
        setState(328);
        match(AssemblyParser::ID);
        setState(329);
        match(AssemblyParser::T__41);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(333);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AssemblyParser::T__43) {
      setState(332);
      signParams();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignTypeParamsContext ------------------------------------------------------------------

AssemblyParser::SignTypeParamsContext::SignTypeParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AssemblyParser::SignTypeParamsContext::ID() {
  return getTokens(AssemblyParser::ID);
}

tree::TerminalNode* AssemblyParser::SignTypeParamsContext::ID(size_t i) {
  return getToken(AssemblyParser::ID, i);
}


size_t AssemblyParser::SignTypeParamsContext::getRuleIndex() const {
  return AssemblyParser::RuleSignTypeParams;
}


std::any AssemblyParser::SignTypeParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AssemblyVisitor*>(visitor))
    return parserVisitor->visitSignTypeParams(this);
  else
    return visitor->visitChildren(this);
}

AssemblyParser::SignTypeParamsContext* AssemblyParser::signTypeParams() {
  SignTypeParamsContext *_localctx = _tracker.createInstance<SignTypeParamsContext>(_ctx, getState());
  enterRule(_localctx, 40, AssemblyParser::RuleSignTypeParams);
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
    setState(335);
    match(AssemblyParser::T__40);
    setState(336);
    match(AssemblyParser::ID);
    setState(341);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AssemblyParser::T__38) {
      setState(337);
      match(AssemblyParser::T__38);
      setState(338);
      match(AssemblyParser::ID);
      setState(343);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(344);
    match(AssemblyParser::T__41);
   
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
