module;

#include <print>

export module Test;

import :partition;

export void ModulePrint() {
  std::println("{}", Number);
}
