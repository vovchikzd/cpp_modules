module;

#include <print>

export module Test;

import :partition;

export void ModulePrint() {
  std::println("Text itself came from module and number came from module partition: {}", Number);
}
