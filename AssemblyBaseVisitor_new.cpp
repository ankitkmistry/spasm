
// Generated from H:/Programming (Ankit)/Projects/spade/1.0/spasm\Assembly.g4 by ANTLR 4.11.1


#include "AssemblyBaseVisitor_new.h"


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
