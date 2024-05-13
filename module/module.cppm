module;

#include <print>

export module Test;

constexpr size_t Number = 69;

export auto ModulePrint() -> void {
  std::println("{}", Number);
}
