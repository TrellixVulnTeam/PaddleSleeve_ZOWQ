// Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

//#include <cmath>
#include "packed_sgemm.h"
#include "sgemv.h"
//#include "lite/core/context.h"
//#include "lite/core/device_info.h"

namespace paddle {
namespace lite {
namespace arm_trustzone {
namespace math {

void sgemm(bool is_transA,
           bool is_transB,
           int M,
           int N,
           int K,
           float alpha,
           const float* A,
           int lda,
           const float* B,
           int ldb,
           float beta,
           float* C,
           int ldc,
           const float* bias,
           bool is_bias,
           const operators::ActivationParam act_param,
           ARMTrustZoneContext* ctx);

}  // namespace math
}  // namespace arm_trustzone
}  // namespace lite
}  // namespace paddle