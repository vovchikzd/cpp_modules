module;

#include <print>

export module tmp;
export import :part;

export template<typename T>
void get_size() {
  std::println("don't know what you are, but your sizeof is: {}", sizeof(T));
}

template<>
void get_size<int>() {
  std::println("specialization for int: {}", sizeof(int));
}

template<>
void get_size<unsigned long long>() {
  std::println("specialization for size_t: {}", sizeof(unsigned long long));
}
