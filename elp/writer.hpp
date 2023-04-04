#ifndef VELOCITY_WRITER_HPP
#define VELOCITY_WRITER_HPP


#include "elpdef.hpp"

class ElpWriter {
private:
    string filename;
    FILE *fp;

    void write(uint8 i) { fputc(i, fp); }

    void write(uint16 i) {
        write(static_cast<uint8>(i >> 8));
        write(static_cast<uint8>(i & 0xFF));
    }

    void write(uint32 i) {
        write(static_cast<uint16>(i >> 16));
        write(static_cast<uint16>(i & 0xFFFF));
    }

    void write(uint64 i) {
        write(static_cast<uint32>(i >> 32));
        write(static_cast<uint32>(i & 0xFFFFFFFF));
    }

    void write(CpInfo info);

    void write(__UTF8 utf);

    void write(__Lcon con);

    void write(GlobalInfo info);

    void write(ObjInfo info);

    void write(MethodInfo info);

    void write(MethodInfo::ArgInfo info);

    void write(MethodInfo::LocalInfo info);

    void write(MethodInfo::ExceptionTableInfo info);

    void write(ClassInfo info);

    void write(FieldInfo info);

    void write(MetaInfo info);

public:
    explicit ElpWriter(const string &filename);

    void write(ElpInfo elp);

    void close();
};


#endif //VELOCITY_WRITER_HPP
