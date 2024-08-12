module;

#include <print>

export module tmp;
export import :part;

export template<typename T>
void get_size() {}

template<>
void get_size<int>() {
  std::println("specialization for int: {}", sizeof(int));
}

template<>
void get_size<unsigned long long>() {
  std::println("specialization for size_t: {}", sizeof(unsigned long long));
}
