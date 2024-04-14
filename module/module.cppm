module;

#include <iostream>

export module Test;

constexpr size_t Number = 69;

export auto ModulePrint() -> void {
  std::cout << Number << '\n';
}
