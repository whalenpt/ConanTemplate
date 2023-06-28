#pragma once

#include <string>

#ifdef _WIN32
  #define SECOND_EXPORT __declspec(dllexport)
#else
  #define SECOND_EXPORT
#endif

SECOND_EXPORT void second();
