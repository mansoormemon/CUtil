// Copyright 2021 LibCUtil
// Project URL: https://github.com/mansoormemon/CUtil
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

// Copyright (c) 2021 Mansoor Memon <mansoorahmed.one@gmail.com>

#ifndef LIBCUTIL__VERSION_H_
#define LIBCUTIL__VERSION_H_

#ifdef __cplusplus
extern "C" {
#endif

#define LIBCUTIL_VERSION 1

#define LIBCUTIL_VERSION_MAJOR (LIBCUTIL_VERSION / 100000)
#define LIBCUTIL_VERSION_MINOR (LIBCUTIL_VERSION / 100 % 1000)
#define LIBCUTIL_VERSION_PATCH (LIBCUTIL_VERSION % 100)

#ifdef __cplusplus
}
#endif

#endif
