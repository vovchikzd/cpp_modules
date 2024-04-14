cmake_minimum_required(VERSION 3.28)

project(test
        LANGUAGES CXX)

set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS Off)
# add_compile_options(-Wall -Wextra -Wpedantic)

set(PROJECT_MODULE_DIR "module")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --stdlib=libc++")

add_executable(result)
target_sources(result PUBLIC
               main.cpp)

target_sources(result PRIVATE
               FILE_SET modules TYPE CXX_MODULES
               FILES
                 ${PROJECT_MODULE_DIR}/module.cppm)

