// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2017
// MIT License

#pragma once

#include "IsSame.hpp"

namespace ArduinoJson {
namespace TypeTraits {

// A meta-function that returns true if T is a floating point type
template <typename T>
struct IsFloatingPoint {
  static const bool value = IsSame<T, float>::value || IsSame<T, double>::value;
};
}
}
