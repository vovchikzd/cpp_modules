cmake_minimum_required(VERSION 3.30 FATAL_ERROR)

# Help/dev/experimental.rst
set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "0e5b6991-d74f-4b3d-a41c-cf096e0b2508")

project(import_std
        LANGUAGES CXX)

set(CMAKE_CXX_MODULE_STD 1)

add_library(uses_std STATIC)
target_sources(uses_std PRIVATE uses_std.cpp)
target_compile_features(uses_std PUBLIC cxx_std_23)

add_executable(fib)
target_sources(fib PRIVATE main.cpp)
target_link_libraries(fib PRIVATE uses_std)
