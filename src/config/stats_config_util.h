// Copyright 2010-2020, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef MOZC_CONFIG_STATS_CONFIG_UTIL_H_
#define MOZC_CONFIG_STATS_CONFIG_UTIL_H_

#include "base/port.h"

namespace mozc {
namespace config {

// Interface class
class StatsConfigUtilInterface {
 public:
  virtual bool IsEnabled() = 0;
  virtual bool SetEnabled(bool val) = 0;

 protected:
  StatsConfigUtilInterface() {}
  virtual ~StatsConfigUtilInterface() {}
};

class StatsConfigUtil {
 public:
  // Get send stats config from proper field.
  //  Windows: registry
  //  Mac: text file
  // If the return value is true, we turn on breakpad and usage stats.
  // TODO(toshiyuki): plist for Mac
  static bool IsEnabled();

  // Set send stats config to proper field.
  // Note: Administrative privilege is required in Windows.
  // Returns true if succeeded.
  static bool SetEnabled(bool val);

  // Inject a dependency
  static void SetHandler(StatsConfigUtilInterface *handler);

  // Should never be allocated.
 private:
  DISALLOW_IMPLICIT_CONSTRUCTORS(StatsConfigUtil);
};

}  // namespace config
}  // namespace mozc

#endif  // MOZC_CONFIG_STATS_CONFIG_UTIL_H_
