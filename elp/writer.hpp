#ifndef VELOCITY_WRITER_HPP
#define VELOCITY_WRITER_HPP


#include "elpdef.hpp"

class ElpWriter {
    string path;
public:
    explicit ElpWriter(string path) : path(path) {}

    void write(ElpInfo elp);

    void close();
};


#endif //VELOCITY_WRITER_HPP
