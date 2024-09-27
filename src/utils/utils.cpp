#include "utils.hpp"

string listToString(vector<string> data) {
    string str;
    auto length = data.size();
    for (uint16 i = 0; i < length; ++i)
        str += data[i] + (i < length - 1 ? ", " : "");
    return str;
}

string removeQuotes(string str) {
    return str.substr(1, str.length() - 2);
}
