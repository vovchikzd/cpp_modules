module;
#include <print>
export module tmp:part;

export template<typename T>
void tmp_part() {}

template<>
void tmp_part<int>() {
  std::println("partition specialization for int: {}", sizeof(int));
}

template<>
void tmp_part<unsigned long long>() {
  std::println("partition specialization for size_t: {}", sizeof(unsigned long long));
}
