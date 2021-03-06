// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/extensions/system_display/display_info_provider_android.h"

namespace extensions {

DisplayInfoProviderAndroid::DisplayInfoProviderAndroid() = default;

// static
DisplayInfoProvider* DisplayInfoProvider::Create() {
  return new DisplayInfoProviderAndroid();
}

}  // namespace extensions
