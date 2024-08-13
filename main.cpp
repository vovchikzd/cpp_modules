import Test;
import tmp;

#include <print>

struct test {};

auto main() -> int {
  ModulePrint();
  std::println();
  get_size<int>();
  get_size<unsigned long long>();
  get_size<test>();
  std::println();
  tmp_part<int>();
  tmp_part<unsigned long long>();
  tmp_part<test>();
}
