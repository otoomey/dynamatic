//===- Passes.h - Conversion Pass Construction and Registration -----------===//
//
//===----------------------------------------------------------------------===//
//
// This fle contains the declarations to register conversion passes.
//
//===----------------------------------------------------------------------===//

#ifndef DYNAMATIC_CONVERSION_PASSES_H
#define DYNAMATIC_CONVERSION_PASSES_H

#include "dynamatic/Conversion/StandardToHandshakeFPGA18.h"
#include "mlir/IR/DialectRegistry.h"
#include "mlir/Pass/Pass.h"
#include "mlir/Pass/PassRegistry.h"

namespace dynamatic {

// Generate the code for registering conversion passes.
#define GEN_PASS_REGISTRATION
#include "dynamatic/Conversion/Passes.h.inc"

} // namespace dynamatic

#endif // DYNAMATIC_CONVERSION_PASSES_H