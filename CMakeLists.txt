cmake_minimum_required(VERSION 3.28)

project(test
        LANGUAGES CXX)

# check compilers
if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang"
   AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 17)
  message(FATAL_ERROR "Requires at least clang 17")
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU"
       AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 14)
  message(FATAL_ERROR "Requires at least gcc 14")
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC"
       AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 19.34)
  message(FATAL_ERROR "Requires at least MSVC 19.34")
endif()

# check generators
if(CMAKE_GENERATOR STREQUAL "Ninja")
  message(WARNING "Requires at least Ninja v1.11")
elseif(CMAKE_GENERATOR MATCHES "Visual Studio"
       AND MSVC_TOOLSET_VERSION LESS 143)
  message(FATAL_ERROR "Requires at lest Visual Studio 17 2022 generator")
endif()

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS Off)
set(CMAKE_COLOR_DIAGNOSTICS On) 
add_compile_options(-Wall -Wextra -Wpedantic)

set(PROJECT_MODULE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/module)

add_executable(result)
target_sources(result PUBLIC
                 ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_sources(result PRIVATE
               FILE_SET modules TYPE CXX_MODULES
               BASE_DIRS ${PROJECT_MODULE_DIR}
               FILES
                 ${PROJECT_MODULE_DIR}/module.cppm)

