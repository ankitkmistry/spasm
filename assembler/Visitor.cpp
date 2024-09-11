
// Generated from H:/Programming (Ankit)/Projects/spade/1.0/spasm\Assembly.g4 by ANTLR 4.11.1


#include "Visitor.h"


void AssemblyBaseVisitor::State::addLabel(const string &label) {
    if (labels.find(label) != labels.end())
        throw AssemblerError("duplicate label", label);
    labels[label] = pc;
}

void AssemblyBaseVisitor::State::addByte(uint8 byte, uint32 line) {
    code.push_back(byte);
    sourceLines.push_back(line);
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
    vector<string> resolvedLabels;
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
            Opcode opcode = static_cast<Opcode>(code[opcodeLoc]);
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
        resolvedLabels.push_back(label);
    }
    for (auto label: resolvedLabels) {
        unresolvedLabels.erase(label);
    }
    // Complain if some labels are still not resolved
    vector<string> unresolved;
    unresolved.reserve(unresolvedLabels.size());
    for (auto [label, _]: unresolvedLabels)
        unresolved.push_back(label);
    if (!unresolvedLabels.empty())
        throw AssemblerError("cannot find labels", listToString(unresolved));
}

MethodInfo::LineInfo AssemblyBaseVisitor::State::getLineTable() {
    if (sourceLines.empty())return {.numberCount=0, .numbers=null};
    vector<MethodInfo::LineInfo::NumberInfo> lines;
    MethodInfo::LineInfo::NumberInfo line = {.times=1, .lineno=sourceLines[0]};
    for (int i = 1; i < sourceLines.size(); ++i) {
        if (line.lineno == sourceLines[i]) {
            if (line.times >= UINT8_MAX) {
                lines.push_back(line);
                line = {.times=0, .lineno=sourceLines[i]};
            }
            line.times++;
        } else {
            lines.push_back(line);
            line = {.times=1, .lineno=sourceLines[i]};
            if (i == sourceLines.size() - 1) lines.push_back(line);
        }
    }

    MethodInfo::LineInfo lineInfo{};
    lineInfo.numberCount = (uint16) lines.size();
    lineInfo.numbers = new MethodInfo::LineInfo::NumberInfo[lineInfo.numberCount];
    for (int i = 0; i < lineInfo.numberCount; ++i) {
        lineInfo.numbers[i] = {.times=lines[i].times, .lineno=lines[i].times};
    }
    return lineInfo;
}

cpidx AssemblyBaseVisitor::fromConstants(const CpInfo cp) {
    cpidx i = 0;
    for (; i < constantPool.size(); i++)
        if (constantPool[i] == cp)
            return i;
    constantPool.push_back(cp);
    return i;
}

std::any AssemblyBaseVisitor::visitAssembly(AssemblyParser::AssemblyContext *ctx) {
    newLevel(State::Type::TOP);
    ElpInfo elp{};

    elp.globalsCount = ctx->global().size();
    elp.globals = new GlobalInfo[elp.globalsCount];
    for (size_t i = 0; i < elp.globalsCount; ++i) {
        elp.globals[i] = any_cast<GlobalInfo>(visitGlobal(ctx->global(i)));
    }

    elp.objectsCount = ctx->method().size() + ctx->class_().size();
    elp.objects = new ObjInfo[elp.objectsCount];
    uint16 i = 0;
    for (auto method: ctx->method()) {
        ObjInfo obj{};
        obj.type = 0x01;
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
    elp.minorVersion = 1;
    elp.majorVersion = 1;

    elp.compiledFrom = fromConstants(compiledFrom);
    elp.thisModule = fromConstants(ctx->module->getText());
    elp.init = fromConstants(init);
    if (ctx->array() != null)
        elp.imports = fromConstants(any_cast<vector<CpInfo>>(visitArray(ctx->array())));
    else
        elp.imports = fromConstants(vector<CpInfo>());

    elp.constantPoolCount = constantPool.size();
    elp.constantPool = new CpInfo[elp.constantPoolCount];
    for (size_t j = 0; j < elp.constantPoolCount; ++j) {
        elp.constantPool[j] = constantPool[j];
    }

    endLevel();
    return elp;
}

std::any AssemblyBaseVisitor::visitGlobal(AssemblyParser::GlobalContext *ctx) {
    GlobalInfo global{};
    auto type = ctx->type->getText();
    if (type == "VAR") global.flags = 0x01;
    else if (type == "CONST") global.flags = 0x02;
    else throw Unreachable();
    global.thisGlobal = fromConstants(removeQuotes(ctx->STRING(0)->toString()));
    global.type = fromConstants(removeQuotes(ctx->STRING(1)->toString()));
    return global;
}

std::any AssemblyBaseVisitor::visitMethod(AssemblyParser::MethodContext *ctx) {
    newLevel(State::Type::METHOD);
    auto &state = getState();
    MethodInfo method{};
    if (ctx->kind != null) {
        auto kind = ctx->kind->getText();
        if (kind == "entry") {
            entry = removeQuotes(ctx->STRING()->toString());
        } else if (kind == "init") {
            init = removeQuotes(ctx->STRING()->toString());
        }
    }
    method.type = classLevel == 0 ? 0x01 : 0x02;
    method.thisMethod = fromConstants(removeQuotes(ctx->STRING()->toString()));

    method.typeParams = fromConstants(vector<CpInfo>());

    method.argsCount = ctx->arg().size();
    method.args = new MethodInfo::ArgInfo[method.argsCount];
    for (size_t i = 0; i < method.argsCount; ++i) {
        method.args[i] = any_cast<MethodInfo::ArgInfo>(visit(ctx->arg(i)));
    }

    method.localsCount = ctx->local().size();
    method.closureStart = ctx->NUMBER().size() == 2 ? stoi(ctx->NUMBER(0)->toString()) : 0;
    method.locals = new MethodInfo::LocalInfo[method.localsCount];
    for (size_t i = 0; i < method.localsCount; ++i) {
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
    for (size_t i = 0; i < method.exceptionTableCount; ++i) {
        method.exceptionTable[i] = any_cast<MethodInfo::ExceptionTableInfo>(
                visitExceptionItem(ctx->exceptionItem(i)));
    }
    method.lineInfo = state.getLineTable();
    endLevel();
    return method;
}

std::any AssemblyBaseVisitor::visitArg(AssemblyParser::ArgContext *ctx) {
    MethodInfo::ArgInfo arg{};
    arg.thisArg = fromConstants(removeQuotes(ctx->STRING(0)->toString()));
    arg.type = fromConstants(removeQuotes(ctx->STRING(1)->toString()));
    return arg;
}

std::any AssemblyBaseVisitor::visitLocal(AssemblyParser::LocalContext *ctx) {
    MethodInfo::LocalInfo local{};
    local.thisLocal = fromConstants(removeQuotes(ctx->STRING(0)->toString()));
    local.type = fromConstants(removeQuotes(ctx->STRING(1)->toString()));
    return local;
}

std::any AssemblyBaseVisitor::visitLine(AssemblyParser::LineContext *ctx) {
    auto &state = getState();
    string label = ctx->label != null ? ctx->label->getText() : "";
    Opcode opcode = OpcodeInfo::fromString(ctx->opcode->getText());
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
        auto jump = state.getJump(ctx->dest->getText());
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
    auto type = ctx->type->getText();
    if (type == "CLASS")klass.type = 0x01;
    else if (type == "INTERFACE")klass.type = 0x02;
    else if (type == "ENUM")klass.type = 0x03;
    else if (type == "ANNOTATION")klass.type = 0x04;
    else throw Unreachable();

    klass.accessFlags = getAccessFlag(ctx->accessor());
    klass.thisClass = fromConstants(removeQuotes(ctx->STRING()->toString()));
    // TODO: Add type parameter support
    klass.typeParams = fromConstants(CpInfo::fromArray({}));
    klass.supers = ctx->supers != null
                   ? fromConstants(any_cast<vector<CpInfo>>(visitArray(ctx->supers)))
                   : fromConstants(CpInfo::fromArray({}));

    klass.fieldsCount = ctx->field().size();
    klass.fields = new FieldInfo[klass.fieldsCount];
    for (size_t i = 0; i < klass.fieldsCount; ++i) {
        klass.fields[i] = any_cast<FieldInfo>(visitField(ctx->field(i)));
    }

    klass.methodsCount = ctx->method().size();
    klass.methods = new MethodInfo[klass.methodsCount];
    for (size_t i = 0; i < klass.methodsCount; ++i) {
        klass.methods[i] = any_cast<MethodInfo>(visitMethod(ctx->method(i)));
    }

    klass.objectsCount = ctx->class_().size();
    klass.objects = new ObjInfo[klass.objectsCount];
    for (size_t i = 0; i < klass.objectsCount; ++i) {
        klass.objects[i] = any_cast<ObjInfo>(visitClass(ctx->class_(i)));
    }

    endLevel();
    classLevel--;
    return klass;
}

std::any AssemblyBaseVisitor::visitAccessor(AssemblyParser::AccessorContext *ctx) {
    auto text = ctx->modifier->getText();
    const std::map<string, uint16> MODIFIER_TABLE = {
            {"STATIC",          0b0000000000000001},
            {"ABSTRACT",        0b0000000000000010},
            {"FINAL",           0b0000000000000100},
            {"OPERATOR",        0b0000000000001000},
            {"PRIVATE",         0b0000000100000000},
            {"INTERNAL",        0b0000001000000000},
            {"PACKAGE_PRIVATE", 0b0000010000000000},
            {"PROTECTED",       0b0000100000000000},
            {"PUBLIC",          0b0001000000000000},
    };
    return MODIFIER_TABLE.at(text);
}

std::any AssemblyBaseVisitor::visitField(AssemblyParser::FieldContext *ctx) {
    FieldInfo field{};
    field.flags = getAccessFlag(ctx->accessor());
    field.thisField = fromConstants(removeQuotes(ctx->STRING(0)->toString()));
    field.type = fromConstants(removeQuotes(ctx->STRING(1)->toString()));
    return field;
}

std::any AssemblyBaseVisitor::visitValue(AssemblyParser::ValueContext *ctx) {
    if (ctx->NUMBER() != null) {
        return CpInfo::fromInt(stoi(ctx->NUMBER()->toString()));
    } else if (ctx->STRING() != null) {
        return CpInfo::fromString(removeQuotes(ctx->STRING()->toString()));
    } else if (ctx->CSTRING() != null) {
        return CpInfo::fromChar(ctx->CSTRING()->toString()[1]);
    } else if (ctx->array() != null) {
        return CpInfo::fromArray(any_cast<vector<CpInfo>>(visitArray(ctx->array())));
    } else if (ctx->float_() != null) {
        return CpInfo::fromFloat(any_cast<double>(visitFloat(ctx->float_())));
    } else throw Unreachable();
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
