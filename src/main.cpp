#include "antlr4-runtime.h"
#include "utils/common.hpp"
#include "elpops/elpdef.hpp"
#include "elpops/writer.hpp"
#include "assembler/AssemblyLexer.h"
#include "assembler/AssemblyParser.h"
#include "assembler/Visitor.h"

using namespace antlr4;

void assemble(fs::path filePath, fs::path outputPath);

fs::path getPath(string path);

int main(int argc, const char *argv[]) {
    if (argc < 2) {
        std::cout << "Usage: spasm [options...] [file]\n";
        std::cout << "Options:\n";
        std::cout << "========\n";
        std::cout << "  -o specifies the output file\n";
        return 0;
    }
    fs::path filePath, outputPath;
    if (argc == 2) {
        filePath = getPath(argv[1]);
        outputPath = (filePath.parent_path() / filePath.stem()).string() + ".elp";
    } else if (argc == 4) {
        if (strcmp(argv[1], "-o") == 0) {
            outputPath = getPath(argv[2]);
        } else {
            exit(EXIT_FAILURE);
        }
        filePath = getPath(argv[3]);
    }

    try {
        assemble(filePath, outputPath);
    } catch (const FatalError &error) {
        std::cerr << error.what() << '\n';
    }
    return 0;
}

fs::path getPath(string path) {
    fs::path p = path;
    if (!p.is_absolute())return p;
    return fs::current_path() / p;
}

void assemble(fs::path filePath, fs::path outputPath) {
    std::ifstream file;
    file.open(filePath.string(), std::ios_base::in);

    if (file.fail()) throw FileNotFoundError(filePath.string());

    ANTLRInputStream input(file);
    AssemblyLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    AssemblyParser parser(&tokens);

    auto tree = parser.assembly();
    AssemblyBaseVisitor visitor(filePath.string());
    auto elp = any_cast<ElpInfo>(visitor.visitAssembly(tree));
    ElpWriter writer{outputPath.string()};
    writer.write(elp);
    writer.close();
    std::cout << "Completed assembly\n";
}
