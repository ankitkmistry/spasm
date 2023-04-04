
// Generated from H:/Programming (Ankit)/Projects/spade/1.0/spasm\Assembly.g4 by ANTLR 4.11.1


#include "Visitor.h"


void AssemblyBaseVisitor::State::addLabel(const string &label) {
    if (labels.find(label) != labels.end())
        throw AssemblerError("duplicate label", label);
    labels[label] = pc;
}

void AssemblyBaseVisitor::State::addByte(uint8 byte, size_t line) {
    code.push_back(byte);
    lineTable[pc] = line;
    pc++;
}

uint16 AssemblyBaseVisitor::State::computeJump(uint32 labelLoc, uint32 cur) {
    return labelLoc > cur ? labelLoc - cur - 2 : cur - labelLoc + 2;
}

uint16 AssemblyBaseVisitor::State::getJump(const string &label) {
    // Get the location of the label
    auto locItr = labels.find(label);
    // If such a location exists
    if (locItr != labels.end()) {
        // Compute the jump and return
        return computeJump(locItr->second, pc);
    } else {
        // Save the current location
        if (unresolvedLabels.find(label) == unresolvedLabels.end())
            unresolvedLabels[label] = {pc};
        else
            unresolvedLabels[label].push_back(pc);
        return pc;
    }
}

uint32 AssemblyBaseVisitor::State::getMark(uint32 location) {
    uint32 prev = 0;
    for (auto mark: marks) {
        if (prev < location && location < mark) return prev;
        prev = location;
    }
    return prev;
}

void AssemblyBaseVisitor::State::resolveLabels() {
    for (auto [label, locations]: unresolvedLabels) {
        // Get the location of the label
        auto labelLocItr = labels.find(label);
        // Complain if the label is missing
        if (labelLocItr == labels.end())
            throw AssemblerError("cannot find label", string(label));
        auto labelLocation = labelLocItr->second;
        // Iterate over the locations
        for (auto location: locations) {
            // Get the location of the opcode
            auto opcodeLoc = getMark(location) - 1;
            // Get the opcode from the starting of the line
            auto opcode = static_cast<Opcode>(code[location]);
            // Compute the jump
            auto jump = computeJump(labelLocation, location);
            // Set the jump accordingly
            uint8 paramCount = OpcodeInfo::getParams(opcode);
            switch (paramCount) {
                case 2: {
                    // Slice the number and add it
                    code[opcodeLoc + 1] = jump >> 8;
                    code[opcodeLoc + 2] = jump & 0xFF;
                    break;
                }
                case 1:
                    code[pc] = jump & 0xFF;
                    break;
                default:
                    throw AssemblerError(format("opcode expects %d parameters", paramCount),
                                         OpcodeInfo::toString(opcode));
            }
        }
        // Make it resolved
        unresolvedLabels.erase(label);
    }
    // Complain if some labels are still not resolved
    vector<string> unresolved;
    for (auto [label, _]: unresolvedLabels)
        unresolved.push_back(label);
    if (!unresolvedLabels.empty())
        throw AssemblerError("cannot find labels", listToString(unresolved));
}

void AssemblyBaseVisitor::State::optimizeLineTable() {
    map<size_t, uint32> table;
    // Flip the table
    for (auto [byteLine, sourceLine]: lineTable) {
        table[sourceLine] = byteLine;
    }
    // Empty the table
    lineTable.clear();
    // Copy the contents
    for (auto [sourceLine, byteLine]: table) {
        lineTable[byteLine] = sourceLine;
    }
}

MethodInfo::LineInfo *AssemblyBaseVisitor::State::getLineTable() {
    auto *lines = new MethodInfo::LineInfo[lineCount()];
    size_t i = 0;
    for (auto [byteLine, sourceLine]: lineTable) {
        if (i >= lineCount())break;
        lines[i] = {.byteCode=byteLine, .sourceCode=sourceLine};
        i++;
    }
    return lines;
}

cpidx AssemblyBaseVisitor::fromConstants(const CpInfo cp) {
    auto state = getStateWithPool();
    auto &pool = state->getConstantPool();
    cpidx i = 0;
    for (; i < pool.size(); i++)
        if (pool[i] == cp)
            return i;
    pool.push_back(cp);
    return i;
}

std::any AssemblyBaseVisitor::visitAssembly(AssemblyParser::AssemblyContext *ctx) {
    newLevel(State::Type::TOP);
    ElpInfo elp{};
    elp.minorVersion = 1;
    elp.majorVersion = 1;
    elp.compiledFrom = fromConstants(compiledFrom);
    if (ctx->array() != null)
        elp.imports = fromConstants(any_cast<vector<CpInfo>>(visitArray(ctx->array())));
    else
        elp.imports = fromConstants(vector<CpInfo>());
    elp.globals = new GlobalInfo[elp.globalsCount];
    for (int i = 0; i < elp.globalsCount; ++i) {
        elp.globals[i] = any_cast<GlobalInfo>(visitGlobal(ctx->global(i)));
    }
    elp.objectsCount = ctx->method().size() + ctx->class_().size();
    elp.objects = new ObjInfo[elp.objectsCount];
    uint16 i = 0;
    for (auto method: ctx->method()) {
        ObjInfo obj{};
        obj.type = 0x02;
        obj._method = any_cast<MethodInfo>(visitMethod(method));
        elp.objects[i] = obj;
        i++;
    }
    for (auto klass: ctx->class_()) {
        ObjInfo obj{};
        obj.type = 0x02;
        obj._class = any_cast<ClassInfo>(visitClass(klass));
        elp.objects[i] = obj;
        i++;
    }
    if (!entry.empty()) {
        elp.magic = 0xC0FFEEDE;
        elp.type = 0x01;
        elp.entry = fromConstants(entry);
    } else {
        elp.magic = 0x6020CAFE;
        elp.type = 0x02;
        elp.entry = fromConstants("");
    }

    auto pool = getState().getConstantPool();
    elp.constantPoolCount = pool.size();
    elp.constantPool = new CpInfo[elp.constantPoolCount];
    for (int i = 0; i < elp.constantPoolCount; ++i) {
        elp.constantPool[i] = pool[i];
    }

    endLevel();
    return elp;
}

std::any AssemblyBaseVisitor::visitGlobal(AssemblyParser::GlobalContext *ctx) {
    GlobalInfo global{};
    auto type = ctx->type->toString();
    if (type == "VAR") global.flags = 0x01;
    else if (type == "CONST") global.flags = 0x02;
    else throw Unreachable();
    global.thisGlobal = fromConstants(ctx->ID()->toString());
    global.type = fromConstants(ctx->STRING()->toString());
    return global;
}

std::any AssemblyBaseVisitor::visitMethod(AssemblyParser::MethodContext *ctx) {
    newLevel(State::Type::METHOD);
    auto &state = getState();
    MethodInfo method{};
    if (ctx->entry != null) entry = ctx->STRING()->toString();
    method.type = classLevel == 0 ? 0x01 : 0x02;
    method.thisMethod = fromConstants(ctx->STRING()->toString());

    method.argsCount = ctx->arg().size();
    method.args = new MethodInfo::ArgInfo[method.argsCount];
    for (int i = 0; i < method.argsCount; ++i) {
        method.args[i] = any_cast<MethodInfo::ArgInfo>(visit(ctx->arg(i)));
    }

    method.localsCount = ctx->local().size();
    method.closureStart = ctx->NUMBER().size() == 2 ? stoi(ctx->NUMBER(0)->toString()) : 0;
    method.locals = new MethodInfo::LocalInfo[method.localsCount];
    for (int i = 0; i < method.localsCount; ++i) {
        method.locals[i] = any_cast<MethodInfo::LocalInfo>(visit(ctx->local(i)));
    }

    method.maxStack = ctx->NUMBER().size() == 2
                      ? stoi(ctx->NUMBER(1)->toString())
                      : stoi(ctx->NUMBER(0)->toString());
    for (auto line: ctx->line()) visitLine(line);
    state.resolveLabels();
    method.codeCount = state.codeCount();
    method.code = state.getCode();

    method.exceptionTableCount = ctx->exceptionItem().size();
    method.exceptionTable = new MethodInfo::ExceptionTableInfo[method.exceptionTableCount];
    for (int i = 0; i < method.exceptionTableCount; ++i) {
        method.exceptionTable[i] = any_cast<MethodInfo::ExceptionTableInfo>(
                visitExceptionItem(ctx->exceptionItem(i)));
    }

    state.optimizeLineTable();
    method.lineNumberTableCount = state.lineCount();
    method.lineNumberTable = state.getLineTable();
    endLevel();
    return method;
}

std::any AssemblyBaseVisitor::visitArg(AssemblyParser::ArgContext *ctx) {
    MethodInfo::ArgInfo arg{};
    auto type = ctx->type->toString();
    if (type == "VALUE")arg.flags = 0x01;
    else if (type == "REF")arg.flags = 0x02;
    else throw Unreachable();
    arg.thisArg = fromConstants(ctx->ID()->toString());
    arg.type = fromConstants(ctx->STRING()->toString());
    return arg;
}

std::any AssemblyBaseVisitor::visitLocal(AssemblyParser::LocalContext *ctx) {
    MethodInfo::LocalInfo local{};
    auto type = ctx->type->toString();
    if (type == "VAR")local.flags = 0x01;
    else if (type == "CONST")local.flags = 0x02;
    else throw Unreachable();
    local.thisLocal = fromConstants(ctx->ID()->toString());
    local.type = fromConstants(ctx->STRING()->toString());
    return local;
}

std::any AssemblyBaseVisitor::visitLine(AssemblyParser::LineContext *ctx) {
    auto &state = getState();
    string label = ctx->label != null ? ctx->label->toString() : "";
    Opcode opcode = OpcodeInfo::fromString(ctx->opcode->toString());
    auto params = OpcodeInfo::getParams(opcode);

    // Mark the line
    state.mark();
    // Register the label
    if (!label.empty()) {
        state.addLabel(label);
    }
    // Append the opcode
    state.addByte(static_cast<uint8>(opcode), ctx->opcode->getLine());
    // Check the params
    if (ctx->value() != null) {
        // Get the index from constant pool, if any
        auto operand = any_cast<CpInfo>(visitValue(ctx->value()));
        cpidx value;
        if (OpcodeInfo::takeFromConstPool(opcode))
            value = fromConstants(operand);
        else {
            if (operand.tag != 0x04 /* int */)
                throw AssemblerError("expected integral value");
            value = operand._int;
        }
        switch (params) {
            case 2: {
                // Slice the number and add it
                state.addByte(value >> 8, ctx->value()->getStart()->getLine());
                state.addByte(value & 0xFF, ctx->value()->getStart()->getLine());
                break;
            }
            case 1:
                state.addByte(value & 0xFF, ctx->value()->getStart()->getLine());
                break;
            default:
                throw AssemblerError(format("opcode expects %d parameters", params),
                                     OpcodeInfo::toString(opcode));
        }
    } else if (ctx->dest != null) {
        // Calculate the jump
        auto jump = state.getJump(ctx->dest->toString());
        switch (params) {
            case 2: {
                // Slice the number and add it
                state.addByte(jump >> 8, ctx->dest->getLine());
                state.addByte(jump & 0xFF, ctx->dest->getLine());
                break;
            }
            case 1:
                state.addByte(jump & 0xFF, ctx->dest->getLine());
                break;
            default:
                throw AssemblerError(format("opcode expects %d parameters", params),
                                     OpcodeInfo::toString(opcode));
        }
    } else if (params > 0)
        throw AssemblerError("opcode expects 1 parameter");
    return null;
}

std::any AssemblyBaseVisitor::visitExceptionItem(AssemblyParser::ExceptionItemContext *ctx) {
    auto &state = getState();
    MethodInfo::ExceptionTableInfo info{};
    info.startPc = state.getLabel(ctx->ID(0)->toString());
    info.endPc = state.getLabel(ctx->ID(1)->toString());
    info.targetPc = state.getLabel(ctx->ID(2)->toString());
    info.exception = fromConstants(ctx->ID(0)->toString());
    return info;
}

uint16 AssemblyBaseVisitor::getAccessFlag(const vector<AssemblyParser::AccessorContext *> &accessors) {
    uint16 accessFlag = 0;
    for (auto accessor: accessors) {
        accessFlag |= any_cast<uint16>(visitAccessor(accessor));
    }
    return accessFlag;
}

std::any AssemblyBaseVisitor::visitClass(AssemblyParser::ClassContext *ctx) {
    classLevel++;
    newLevel(State::Type::CLASS);

    ClassInfo klass{};
    auto type = ctx->type->toString();
    if (type == "CLASS")klass.type = 0x01;
    else if (type == "INTERFACE")klass.type = 0x02;
    else if (type == "ENUM")klass.type = 0x03;
    else if (type == "ANNOTATION")klass.type = 0x04;
    else throw Unreachable();

    klass.accessFlags = getAccessFlag(ctx->accessor());
    klass.thisClass = fromConstants(ctx->STRING()->toString());
    // TODO: Add type parameter support
    klass.typeParams = fromConstants(CpInfo::fromArray({}));
    klass.supers = ctx->supers != null
                   ? fromConstants(any_cast<vector<CpInfo>>(visitArray(ctx->supers)))
                   : fromConstants(CpInfo::fromArray({}));

    klass.fieldsCount = ctx->field().size();
    klass.fields = new FieldInfo[klass.fieldsCount];
    for (int i = 0; i < klass.fieldsCount; ++i) {
        klass.fields[i] = any_cast<FieldInfo>(visitField(ctx->field(i)));
    }

    klass.methodsCount = ctx->method().size();
    klass.methods = new MethodInfo[klass.methodsCount];
    for (int i = 0; i < klass.methodsCount; ++i) {
        klass.methods[i] = any_cast<MethodInfo>(visitMethod(ctx->method(i)));
    }

    klass.objectsCount = ctx->class_().size();
    klass.objects = new ObjInfo[klass.objectsCount];
    for (int i = 0; i < klass.objectsCount; ++i) {
        klass.objects[i] = any_cast<ObjInfo>(visitClass(ctx->class_(i)));
    }

    auto pool = getState().getConstantPool();
    klass.constantPoolCount = pool.size();
    klass.constantPool = new CpInfo[klass.constantPoolCount];
    for (int i = 0; i < klass.constantPoolCount; ++i) {
        klass.constantPool[i] = pool[i];
    }

    endLevel();
    classLevel--;
    return klass;
}

std::any AssemblyBaseVisitor::visitAccessor(AssemblyParser::AccessorContext *ctx) {
    auto text = ctx->modifier->toString();
    const map<string, uint16> MODIFIER_TABLE = {
            {"PRIVATE",         0x0001},
            {"INTERNAL",        0x0002},
            {"PACKAGE_PRIVATE", 0x0004},
            {"PROTECTED",       0x0008},
            {"PUBLIC",          0x0010},
            {"ABSTRACT",        0x0020},
            {"FINAL",           0x0040},
            {"STATIC",          0x0080},
            {"INLINE",          0x0100},
    };
    return MODIFIER_TABLE.at(text);
}

std::any AssemblyBaseVisitor::visitField(AssemblyParser::FieldContext *ctx) {
    FieldInfo field{};
    field.accessFlags = getAccessFlag(ctx->accessor());
    field.thisField = fromConstants(ctx->STRING(0)->toString());
    field.type = fromConstants(ctx->STRING(1)->toString());
    return field;
}

std::any AssemblyBaseVisitor::visitValue(AssemblyParser::ValueContext *ctx) {
    CpInfo info{};
    if (ctx->NUMBER() != null) {
        info.tag = 0x04;
        info._int = stoi(ctx->NUMBER()->toString());
    } else if (ctx->STRING() != null) {
        return CpInfo::fromString(ctx->STRING()->toString());
    } else if (ctx->CSTRING() != null) {
        info.tag = 0x03;
        info._char = static_cast<uint8>(ctx->CSTRING()->toString()[1]);
    } else if (ctx->array() != null) {
        return CpInfo::fromArray(any_cast<vector<CpInfo>>(visitArray(ctx->array())));
    } else if (ctx->float_() != null) {
        info.tag = 0x05;
        auto d = any_cast<double>(visitFloat(ctx->float_()));
        info._float = reinterpret_cast<uint64 &>(d);
    } else throw Unreachable();
    return info;
}

std::any AssemblyBaseVisitor::visitArray(AssemblyParser::ArrayContext *ctx) {
    vector<CpInfo> array;
    for (auto value: ctx->value()) {
        array.push_back(any_cast<CpInfo>(visitValue(value)));
    }
    return array;
}

std::any AssemblyBaseVisitor::visitFloat(AssemblyParser::FloatContext *ctx) {
    return stod(ctx->getText());
}
