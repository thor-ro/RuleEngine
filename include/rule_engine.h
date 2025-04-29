#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define RULE_ENGINE_EXPORT __declspec(dllexport)
#else
  #define RULE_ENGINE_EXPORT
#endif

RULE_ENGINE_EXPORT void rule_engine();
RULE_ENGINE_EXPORT void rule_engine_print_vector(const std::vector<std::string> &strings);
