#include "utils.hpp"

string listToString(vector <string> data) {
    string str;
    auto length = data.size();
    for (uint16 i = 0; i < length; ++i)
        str += data[i] + (i < length - 1 ? ", " : "");
    return str;
}
