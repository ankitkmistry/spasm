#include <map>
#include "opcode.hpp"

struct Info {
    string name;
    uint8 params;
    bool take;
};

static const Info OPCODE_TABLE[] = {
        // Nop
        {"NOP",                   0, false},

        // Stack op
        {"CONSTANT",              1, true},
        {"LONG_CONSTANT",         2, true},
        {"POP",                   0, false},
        {"DUP",                   0, false},

        // Load-store op
        {"LOAD_GLOBAL",           2, true},
        {"STORE_GLOBAL",          1, true},
        {"LOAD_LOCAL",            2, false},
        {"STORE_LOCAL",           2, false},
        {"LOAD_GLOBAL_FAST",      1, false},
        {"STORE_GLOBAL_FAST",     1, false},
        {"LOAD_LOCAL_FAST",       1, false},
        {"STORE_LOCAL_FAST",      1, false},
        {"POP_STORE_GLOBAL",      2, false},
        {"POP_STORE_LOCAL",       2, false},
        {"POP_STORE_GLOBAL_FAST", 1, false},
        {"POP_STORE_LOCAL_FAST",  1, false},
        {"LOAD_ARG",              1, false},
        {"STORE_ARG",             1, false},
        {"POP_STORE_ARG",         1, false},

        {"LOAD_MEMBER",           2, true},
        {"STORE_MEMBER",          2, true},
        {"LOAD_STATIC",           2, true},
        {"STORE_STATIC",          2, true},
        {"LOAD_MEMBER_FAST",      1, true},
        {"STORE_MEMBER_FAST",     1, true},
        {"LOAD_STATIC_FAST",      1, true},
        {"STORE_STATIC_FAST",     1, true},
        {"POP_STORE_MEMBER",      2, true},
        {"POP_STORE_STATIC",      2, true},
        {"POP_STORE_MEMBER_FAST", 1, true},
        {"POP_STORE_STATIC_FAST", 1, true},
        {"LOAD_OBJECT",           2, true},
        {"LOAD_OBJECT_FAST",      1, true},

        // Array. op
        {"UNPACK_ARRAY",          0, false},
        {"BUILD_ARRAY",           2, false},
        {"BUILD_ARRAY_FAST",      1, false},
        {"LOAD_INDEX",            0, false},
        {"STORE_INDEX",           0, false},
        {"POP_STORE_INDEX",       0, false},
        {"LOAD_LENGTH",           0, false},

        // Call op
        {"INVOKE",                1, false},
        {"INVOKE_VIRTUAL",        2, true},
        {"INVOKE_STATIC",         2, true},
        {"INVOKE_LOCAL",          2, false},
        {"INVOKE_GLOBAL",         2, true},
        {"INVOKE_VIRTUAL_FAST",   1, true},
        {"INVOKE_STATIC_FAST",    1, true},
        {"INVOKE_LOCAL_FAST",     1, false},
        {"INVOKE_GLOBAL_FAST",    1, true},
        {"INVOKE_ARG",            1, false},
        {"SUB_CALL",              2, false},
        {"SUB_RETURN",            0, false},

        // Jump op
        {"JUMP_FORWARD",          2, false},
        {"JUMP_BACKWARD",         2, false},
        {"JUMP_IF_TRUE",          2, false},
        {"JUMP_IF_FALSE",         2, false},
        {"POP_JUMP_IF_TRUE",      2, false},
        {"POP_JUMP_IF_FALSE",     2, false},
        {"POP_JUMP_IF_LT",        2, false},
        {"POP_JUMP_IF_LE",        2, false},
        {"POP_JUMP_IF_EQ",        2, false},
        {"POP_JUMP_IF_NE",        2, false},
        {"POP_JUMP_IF_GE",        2, false},
        {"POP_JUMP_IF_GT",        2, false},

        // Primitive op
        {"NOT",                   0, false},
        {"INVERT",                0, false},
        {"NEGATE",                0, false},
        {"GET_TYPE",              0, false},
        {"SAFE_CAST",             0, false},
        {"CHECKED_CAST",          0, false},
        {"POWER",                 0, false},
        {"MULTIPLY",              0, false},
        {"DIVIDE",                0, false},
        {"REMAINDER",             0, false},
        {"ADD",                   0, false},
        {"SUBTRACT",              0, false},
        {"LSHIFT",                0, false},
        {"RSHIFT",                0, false},
        {"URSHIFT",               0, false},
        {"AND",                   0, false},
        {"OR",                    0, false},
        {"XOR",                   0, false},
        {"LT",                    0, false},
        {"LE",                    0, false},
        {"EQ",                    0, false},
        {"NE",                    0, false},
        {"GE",                    0, false},
        {"GT",                    0, false},
        {"IS",                    0, false},
        {"IS_NULL",               0, false},
        {"IS_NON_NULL",           0, false},

        // thread safety
        {"MONITOR_ENTER",         0, false/*TODO: Yet to be changed*/},
        {"MONITOR_EXIT",          0, false/*TODO: Yet to be changed*/},

        // Miscellaneous
        {"LOAD_CLOSURE",          0, false/*TODO: Yet to be changed*/},
        {"LOAD_CLOSURE_FAST",     0, false/*TODO: Yet to be changed*/},
        {"LOAD_REIFIED",          0, false/*TODO: Yet to be changed*/},
        {"LOAD_REIFIED_FAST",     0, false/*TODO: Yet to be changed*/},
        {"THROW",                 0, false/*TODO: Yet to be changed*/},
        {"RETURN",                0, false},
        {"RETURN_VOID",           0, false},

        // Debug op
        {"PRINTLN",               0, false},
};

static const map<string, Opcode> OPCODE_NAMES = {
        {"NOP",                   Opcode::NOP},
        {"CONSTANT",              Opcode::CONSTANT},
        {"LONG_CONSTANT",         Opcode::LONG_CONSTANT},
        {"POP",                   Opcode::POP},
        {"DUP",                   Opcode::DUP},
        {"LOAD_GLOBAL",           Opcode::LOAD_GLOBAL},
        {"STORE_GLOBAL",          Opcode::STORE_GLOBAL},
        {"LOAD_LOCAL",            Opcode::LOAD_LOCAL},
        {"STORE_LOCAL",           Opcode::STORE_LOCAL},
        {"LOAD_GLOBAL_FAST",      Opcode::LOAD_GLOBAL_FAST},
        {"STORE_GLOBAL_FAST",     Opcode::STORE_GLOBAL_FAST},
        {"LOAD_LOCAL_FAST",       Opcode::LOAD_LOCAL_FAST},
        {"STORE_LOCAL_FAST",      Opcode::STORE_LOCAL_FAST},
        {"POP_STORE_GLOBAL",      Opcode::POP_STORE_GLOBAL},
        {"POP_STORE_LOCAL",       Opcode::POP_STORE_LOCAL},
        {"POP_STORE_GLOBAL_FAST", Opcode::POP_STORE_GLOBAL_FAST},
        {"POP_STORE_LOCAL_FAST",  Opcode::POP_STORE_LOCAL_FAST},
        {"LOAD_ARG",              Opcode::LOAD_ARG},
        {"STORE_ARG",             Opcode::STORE_ARG},
        {"POP_STORE_ARG",         Opcode::POP_STORE_ARG},
        {"LOAD_MEMBER",           Opcode::LOAD_MEMBER},
        {"STORE_MEMBER",          Opcode::STORE_MEMBER},
        {"LOAD_STATIC",           Opcode::LOAD_STATIC},
        {"STORE_STATIC",          Opcode::STORE_STATIC},
        {"LOAD_MEMBER_FAST",      Opcode::LOAD_MEMBER_FAST},
        {"STORE_MEMBER_FAST",     Opcode::STORE_MEMBER_FAST},
        {"LOAD_STATIC_FAST",      Opcode::LOAD_STATIC_FAST},
        {"STORE_STATIC_FAST",     Opcode::STORE_STATIC_FAST},
        {"POP_STORE_MEMBER",      Opcode::POP_STORE_MEMBER},
        {"POP_STORE_STATIC",      Opcode::POP_STORE_STATIC},
        {"POP_STORE_MEMBER_FAST", Opcode::POP_STORE_MEMBER_FAST},
        {"POP_STORE_STATIC_FAST", Opcode::POP_STORE_STATIC_FAST},
        {"LOAD_OBJECT",           Opcode::LOAD_OBJECT},
        {"LOAD_OBJECT_FAST",      Opcode::LOAD_OBJECT_FAST},
        {"UNPACK_ARRAY",          Opcode::UNPACK_ARRAY},
        {"BUILD_ARRAY",           Opcode::BUILD_ARRAY},
        {"BUILD_ARRAY_FAST",      Opcode::BUILD_ARRAY_FAST},
        {"LOAD_INDEX",            Opcode::LOAD_INDEX},
        {"STORE_INDEX",           Opcode::STORE_INDEX},
        {"POP_STORE_INDEX",       Opcode::POP_STORE_INDEX},
        {"LOAD_LENGTH",           Opcode::LOAD_LENGTH},
        {"INVOKE",                Opcode::INVOKE},
        {"INVOKE_VIRTUAL",        Opcode::INVOKE_VIRTUAL},
        {"INVOKE_STATIC",         Opcode::INVOKE_STATIC},
        {"INVOKE_LOCAL",          Opcode::INVOKE_LOCAL},
        {"INVOKE_GLOBAL",         Opcode::INVOKE_GLOBAL},
        {"INVOKE_VIRTUAL_FAST",   Opcode::INVOKE_VIRTUAL_FAST},
        {"INVOKE_STATIC_FAST",    Opcode::INVOKE_STATIC_FAST},
        {"INVOKE_LOCAL_FAST",     Opcode::INVOKE_LOCAL_FAST},
        {"INVOKE_GLOBAL_FAST",    Opcode::INVOKE_GLOBAL_FAST},
        {"INVOKE_ARG",            Opcode::INVOKE_ARG},
        {"SUB_CALL",              Opcode::SUB_CALL},
        {"SUB_RETURN",            Opcode::SUB_RETURN},
        {"JUMP_FORWARD",          Opcode::JUMP_FORWARD},
        {"JUMP_BACKWARD",         Opcode::JUMP_BACKWARD},
        {"JUMP_IF_TRUE",          Opcode::JUMP_IF_TRUE},
        {"JUMP_IF_FALSE",         Opcode::JUMP_IF_FALSE},
        {"POP_JUMP_IF_TRUE",      Opcode::POP_JUMP_IF_TRUE},
        {"POP_JUMP_IF_FALSE",     Opcode::POP_JUMP_IF_FALSE},
        {"POP_JUMP_IF_LT",        Opcode::POP_JUMP_IF_LT},
        {"POP_JUMP_IF_LE",        Opcode::POP_JUMP_IF_LE},
        {"POP_JUMP_IF_EQ",        Opcode::POP_JUMP_IF_EQ},
        {"POP_JUMP_IF_NE",        Opcode::POP_JUMP_IF_NE},
        {"POP_JUMP_IF_GE",        Opcode::POP_JUMP_IF_GE},
        {"POP_JUMP_IF_GT",        Opcode::POP_JUMP_IF_GT},
        {"NOT",                   Opcode::NOT},
        {"INVERT",                Opcode::INVERT},
        {"NEGATE",                Opcode::NEGATE},
        {"GET_TYPE",              Opcode::GET_TYPE},
        {"SAFE_CAST",             Opcode::SAFE_CAST},
        {"CHECKED_CAST",          Opcode::CHECKED_CAST},
        {"POWER",                 Opcode::POWER},
        {"MULTIPLY",              Opcode::MULTIPLY},
        {"DIVIDE",                Opcode::DIVIDE},
        {"REMAINDER",             Opcode::REMAINDER},
        {"ADD",                   Opcode::ADD},
        {"SUBTRACT",              Opcode::SUBTRACT},
        {"LSHIFT",                Opcode::LSHIFT},
        {"RSHIFT",                Opcode::RSHIFT},
        {"URSHIFT",               Opcode::URSHIFT},
        {"AND",                   Opcode::AND},
        {"OR",                    Opcode::OR},
        {"XOR",                   Opcode::XOR},
        {"LT",                    Opcode::LT},
        {"LE",                    Opcode::LE},
        {"EQ",                    Opcode::EQ},
        {"NE",                    Opcode::NE},
        {"GE",                    Opcode::GE},
        {"GT",                    Opcode::GT},
        {"IS",                    Opcode::IS},
        {"IS_NULL",               Opcode::IS_NULL},
        {"IS_NON_NULL",           Opcode::IS_NON_NULL},
        {"MONITOR_ENTER",         Opcode::MONITOR_ENTER},
        {"MONITOR_EXIT",          Opcode::MONITOR_EXIT},
        {"LOAD_CLOSURE",          Opcode::LOAD_CLOSURE},
        {"LOAD_CLOSURE_FAST",     Opcode::LOAD_CLOSURE_FAST},
        {"LOAD_REIFIED",          Opcode::LOAD_REIFIED},
        {"LOAD_REIFIED_FAST",     Opcode::LOAD_REIFIED_FAST},
        {"THROW",                 Opcode::THROW},
        {"RETURN",                Opcode::RETURN},
        {"RETURN_VOID",           Opcode::RETURN_VOID},
        {"PRINTLN",               Opcode::PRINTLN},
        {"NUM_OPCODES",           Opcode::NUM_OPCODES}
};

string OpcodeInfo::toString(Opcode opcode) {
    return OPCODE_TABLE[static_cast<int>(opcode)].name;
}

uint8 OpcodeInfo::getParams(Opcode opcode) {
    return OPCODE_TABLE[static_cast<int>(opcode)].params;
}

bool OpcodeInfo::takeFromConstPool(Opcode opcode) {
    return OPCODE_TABLE[static_cast<int>(opcode)].take;
}

Opcode OpcodeInfo::fromString(string str) {
    return OPCODE_NAMES.at(str);
}
