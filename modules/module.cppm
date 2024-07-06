module;

#include <print>

export module Test;

import :partition;

export auto ModulePrint() -> void {
  std::println("{}", Number);
}
