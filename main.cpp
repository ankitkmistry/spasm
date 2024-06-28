#include "antlr4-runtime.h"
#include "utils/common.hpp"
#include "elpops/elpdef.hpp"
#include "elpops/writer.hpp"
#include "AssemblyLexer.h"
#include "AssemblyParser.h"
#include "Visitor.h"

using namespace antlr4;

void assemble(const string &filename);

string getOutputFilename(const string &path);

int main(int argc, const char *argv[]) {
    string filename = argc >= 2 ? argv[1] : "hello.spb";
    assemble(filename);
    return 0;
}

void assemble(const string &filename) {
    // TODO: the lexer cannot output tokens
    fs::path filePath{fs::current_path() / filename};
    cout << filePath.string() << '\n';

    ifstream file;
    file.open(filePath.string(), ios_base::in);

    if (file.fail()) throw FileNotFoundError(filePath.string());

    ANTLRInputStream input(file);
    AssemblyLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    AssemblyParser parser(&tokens);

    auto tree = parser.assembly();
    AssemblyBaseVisitor visitor(filename);
    auto elp = any_cast<ElpInfo>(visitor.visitAssembly(tree));
    ElpWriter writer((fs::current_path() / filePath.stem()).string() + ".xp");
    writer.write(elp);
    writer.close();
    cout << "Completed assembly\n";

    /*for (auto token: tokens.getTokens()) {
        if (token->getChannel() == Token::HIDDEN_CHANNEL)continue;
        cout << format("token at [%d:%d] of type %d: '%s'\n",
                       token->getLine(), token->getCharPositionInLine(),
                       token->getType(),
                       token->getText().c_str());
    }*/
}
