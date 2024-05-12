cmake_minimum_required(VERSION 3.28)

project(test
        LANGUAGES CXX)

set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS Off)
add_compile_options(-Wall -Wextra -Wpedantic)

if(CMAKE_GENERATOR STREQUAL "Ninja"
     AND CMAKE_VERSION VERSION_GREATER_EQUAL 3.24)
  set(CMAKE_COLOR_DIAGNOSTICS On) 
endif()

set(PROJECT_MODULE_DIR "module")

add_executable(result)
target_sources(result PUBLIC
               main.cpp)

target_sources(result PRIVATE
               FILE_SET modules TYPE CXX_MODULES
               FILES
                 ${PROJECT_MODULE_DIR}/module.cppm)

