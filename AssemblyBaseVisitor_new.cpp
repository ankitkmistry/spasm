
// Generated from H:/Programming (Ankit)/Projects/spade/1.0/spasm\Assembly.g4 by ANTLR 4.11.1


#include "AssemblyBaseVisitor_new.h"


void AssemblyBaseVisitor::State::addLabel(string label) {
    if (labels.find(label) != labels.end())
        throw AssemblerError("duplicate label", label);
    labels[label] = pc;
}

void AssemblyBaseVisitor::State::addByte(uint8 byte) {
    code.push_back(byte);
    pc++;
}

uint16 AssemblyBaseVisitor::State::computeJump(uint32 labelLoc, uint32 cur) {
    return labelLoc > cur ? labelLoc - cur - 2 : cur - labelLoc + 2;
}

uint16 AssemblyBaseVisitor::State::getJump(string label) {
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

int AssemblyBaseVisitor::State::getMark(uint32 location) {
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
                    code[location + 1] = jump >> 8;
                    code[location + 2] = jump & 0xFF;
                    break;
                }
                case 1:
                    code[pc] = jump & 0xFF;
                    break;
                case 0:
                    throw AssemblerError("opcode expects 0 parameters", OpcodeInfo::toString(opcode));
                default:
                    throw AssemblerError(format("opcode with %d parameters not supported yet", paramCount),
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
