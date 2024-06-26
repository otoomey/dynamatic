//===- FuncSetArgNames.h - Set argument names from C source -----*- C++ -*-===//
//
// Dynamatic is under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file declares the --func-set-arg-names pass.
//
//===----------------------------------------------------------------------===//

#ifndef DYNAMATIC_TRANSFORMS_FUNCSETARGNAMES_H
#define DYNAMATIC_TRANSFORMS_FUNCSETARGNAMES_H

#include "dynamatic/Support/DynamaticPass.h"
#include "dynamatic/Support/LLVM.h"

namespace dynamatic {

std::unique_ptr<dynamatic::DynamaticPass>
createFuncSetArgNames(StringRef source = {});

#define GEN_PASS_DECL_FUNCSETARGNAMES
#define GEN_PASS_DEF_FUNCSETARGNAMES
#include "dynamatic/Transforms/Passes.h.inc"

} // namespace dynamatic

#endif // DYNAMATIC_TRANSFORMS_FUNCSETARGNAMES_H
