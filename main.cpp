#include "antlr4-runtime.h"
#include "utils/common.hpp"
#include "AssemblyLexer.h"
#include "AssemblyParser.h"
#include "Visitor.h"
#include "elp/elpdef.hpp"
#include "elp/writer.hpp"
#include "utils/exceptions.hpp"

using namespace antlr4;

void assemble(const string &filename);

string getOutputFilename(const string &path);

int main(int argc, const char *argv[]) {
    string filename = argc >= 2 ? argv[1] : "hello.spb";
    assemble(filename);
    return 0;
}

class ErrorReporter : public BaseErrorListener {
    string filename;
public:
    explicit ErrorReporter(const string &filename) : filename(filename) {}

    void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line, size_t charPositionInLine,
                     const string &msg, std::exception_ptr e) override {
        RecognitionException ex{null, null, null};
        try {
            if (e != null)
                rethrow_exception(e);
        } catch (RecognitionException &error) {
            ex = error;
        }
        string error = format("In %s [line %d col %d]: %s\n\t\t%s",
                              filename.c_str(),
                              line,
                              charPositionInLine,
                              msg.c_str(),
                              ex.getCtx()->getText().c_str()
        );
        cerr << error << endl;
        exit(-1);
    }
};

void assemble(const string &filename) {
    ifstream file;
    file.open(filename);

    if (!file.fail()) throw FileNotFoundError(filename);

    ANTLRInputStream input(file);
    AssemblyLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    AssemblyParser parser(&tokens);

    lexer.removeErrorListeners();
    parser.removeErrorListeners();
    auto *listener = new ErrorReporter(filename);
    lexer.addErrorListener(listener);
    parser.addErrorListener(listener);

    auto tree = parser.assembly();
    AssemblyBaseVisitor visitor(filename);
    auto elp = any_cast<ElpInfo>(visitor.visitAssembly(tree));
    auto outFilename = getOutputFilename(filename);
    ElpWriter writer(outFilename);
    writer.write(elp);
    writer.close();
    delete listener;
    cout << "Completed assembly";
}

string getOutputFilename(const string &path) {
    return "hello.xp";
}
