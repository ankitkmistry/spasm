#include "elpdef.hpp"

bool __UTF8::operator==(const __UTF8 &rhs) const {
    if (len != rhs.len)return false;
    for (int i = 0; i < len; ++i)
        if (bytes[i] != rhs.bytes[i])return false;
    return true;
}

bool __UTF8::operator!=(const __UTF8 &rhs) const {
    return !(rhs == *this);
}

bool __Lcon::operator==(const __Lcon &rhs) const {
    if (len != rhs.len)return false;
    for (int i = 0; i < len; ++i)
        if (items[i] != rhs.items[i])return false;
    return true;
}

bool __Lcon::operator!=(const __Lcon &rhs) const {
    return !(rhs == *this);
}

bool CpInfo::operator==(const CpInfo &rhs) const {
    if (tag != rhs.tag) return false;
    switch (tag) {
        case 0x03:
            return _char == rhs._char;
        case 0x04:
            return _int == rhs._int;
        case 0x05:
            return _float == rhs._float;
        case 0x06:
            return _string == rhs._string;
        case 0x07:
            return _array == rhs._array;
        default:
            throw Unreachable();
    }
}

bool CpInfo::operator!=(const CpInfo &rhs) const {
    return !(rhs == *this);
}

CpInfo CpInfo::fromString(const string &str) {
    __UTF8 val{};
    val.len = str.size();
    val.bytes = new ui1[val.len];
    for (int i = 0; i < val.len; ++i)
        val.bytes[i] = str.c_str()[i];

    CpInfo info{};
    info.tag = 0x06;
    info._string = val;
    return info;
}

CpInfo CpInfo::fromArray(const std::vector<CpInfo> &array) {
    __Lcon con{};
    con.len = array.size();
    con.items = new CpInfo[con.len];
    for (int i = 0; i < con.len; ++i)
        con.items[i] = array[i];

    CpInfo info{};
    info.tag = 0x07;
    info._array = con;
    return info;
}
