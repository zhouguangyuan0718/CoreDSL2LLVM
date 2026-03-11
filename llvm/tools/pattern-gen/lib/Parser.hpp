#pragma once
#include "InstrInfo.hpp"
#include "TokenStream.hpp"
#include <llvm/IR/Module.h>

std::vector<CDSLInstr> ParseCoreDSL2FrontEnd(TokenStream &ts);
void GenerateBehaviorIR(std::vector<CDSLInstr> &instrs, bool is64Bit,
                        llvm::Module *mod, bool NoExtend);
