#ifndef SOURCE_UTILS_EXCEPTIONS_HPP_
#define SOURCE_UTILS_EXCEPTIONS_HPP_

#include <stdexcept>

#include "common.hpp"
#include "format.hpp"

class FatalError : public std::runtime_error {
public:
    explicit FatalError(const string &message)
            : std::runtime_error(message) {}
};

class AssemblerError : public FatalError {
public:
    explicit AssemblerError(const string &message)
            : FatalError(format("error: '%s'", message.c_str())) {}

    AssemblerError(const string &message, const string &problem)
            : FatalError(format("error: '%s': '%s'", message.c_str(), problem.c_str())) {}
};

class FileNotFoundError : public FatalError {
    string path;
public:
    explicit FileNotFoundError(const string &path)
            : FatalError(format("file not found: '%s'", path.c_str())), path(path) {}

    const string &getPath() const { return path; }
};

class Unreachable : public FatalError {
public:
    explicit Unreachable() : FatalError("unreachable code reached") {}
};


#endif /* SOURCE_UTILS_EXCEPTIONS_HPP_ */
