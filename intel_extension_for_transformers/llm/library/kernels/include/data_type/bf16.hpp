//  Copyright (c) 2021 Intel Corporation
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#ifndef ENGINE_SPARSELIB_INCLUDE_DATA_TYPE_BF16_HPP_
#define ENGINE_SPARSELIB_INCLUDE_DATA_TYPE_BF16_HPP_

#include "common.h"
#include <cstdint>

namespace jd {
struct SPARSE_API_ bfloat16_t {
  uint16_t data;

  bfloat16_t();
  explicit bfloat16_t(int32_t val);
  explicit bfloat16_t(uint16_t val);
  explicit bfloat16_t(float val);
  bfloat16_t &operator=(float val);
  operator float() const;
};

static_assert(sizeof(bfloat16_t) == 2, "bfloat16_t must be 2 bytes");

} // namespace jd

#endif // ENGINE_SPARSELIB_INCLUDE_DATA_TYPE_BF16_HPP_
