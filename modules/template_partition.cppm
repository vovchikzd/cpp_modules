module;
#include <print>
export module tmp:part;

export template<typename T>
void tmp_part() {
  std::println("This text from template from partition: sizeof(<type>) -> {}", sizeof(T));
}
