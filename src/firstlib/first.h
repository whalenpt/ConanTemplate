#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define FIRST_EXPORT __declspec(dllexport)
#else
  #define FIRST_EXPORT
#endif

FIRST_EXPORT void first();
FIRST_EXPORT void first_print_vector(const std::vector<std::string> &strings);
