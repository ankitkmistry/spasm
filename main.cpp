#include "antlr4-runtime.h"
#include "utils/common.hpp"
#include "AssemblyLexer.h"
#include "AssemblyParser.h"
#include "AssemblyBaseVisitor_new.h"
#include "elp/elpdef.hpp"
#include "elp/writer.hpp"
#include "utils/exceptions.hpp"

using namespace antlr4;

void assemble(string filename);

string getOutputFilename(string path);

int main(int argc, const char *argv[]) {
    string filename = argc >= 2 ? argv[1] : "hello.spb";
    assemble(filename);
    return 0;
}

void assemble(string filename) {
    ifstream file;
    file.open(filename);

    if (!file.is_open()) throw FileNotFoundError(filename);

    ANTLRInputStream input(file);
    AssemblyLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    AssemblyParser parser(&tokens);

    auto tree = parser.assembly();
    AssemblyBaseVisitor visitor(filename);
    auto elp = any_cast<ElpInfo>(visitor.visitAssembly(tree));
    auto outFilename = getOutputFilename(filename);
    ElpWriter writer(outFilename);
    writer.write(elp);
    writer.close();
}

string getOutputFilename(string path) {
    return "hello.xp";
}
