module;

#include <print>

export module tmp;

export template<typename T>
void get_size() { std::println("This example came from template in module: sizeof(<yout_type>) -> {}", sizeof(T)); }
