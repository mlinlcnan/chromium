// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_EXTENSIONS_FEATURE_PROVIDER_H_
#define CHROME_COMMON_EXTENSIONS_FEATURE_PROVIDER_H_
#pragma once

#include <string>

#include "base/memory/scoped_ptr.h"

namespace extensions {

class Feature;

// Implemented by classes that can vend features.
class FeatureProvider {
 public:
  FeatureProvider() {}
  virtual ~FeatureProvider() {}

  // Returns the feature with the specified name.
  virtual scoped_ptr<Feature> GetFeature(const std::string& name) = 0;
};

}  // namespace extensions

#endif  // CHROME_COMMON_EXTENSIONS_FEATURE_PROVIDER_H_
