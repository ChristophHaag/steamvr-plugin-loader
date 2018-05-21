/** @file
    @brief Implementation

    @date 2017

    @author
    Sensics, Inc.
    <http://sensics.com/osvr>
*/

// Copyright 2017 Sensics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//        http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Internal Includes
#include "DriverManager.h"
#include "ValveStrCpy.h"

// Library/third-party includes
// - none

// Standard includes
// - none

using namespace vr;

DriverManager::DriverManager() {}

DriverHandle_t DriverManager::GetDriverHandle( const char *pchDriverName ) {
    return 0;
}

uint32_t DriverManager::GetDriverCount() const {
    return 1;
}
uint32_t DriverManager::GetDriverName(vr::DriverId_t nDriver, char *pchValue,
                                      uint32_t unBufferSize) {
    const std::string driverName = "lighthouse";
    if (unBufferSize > driverName.size()) {
        auto ret = valveStrCpy(driverName, pchValue, unBufferSize);
        return ret;
    }
    return 0;
}
