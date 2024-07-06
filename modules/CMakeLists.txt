cmake_minimum_required(VERSION 3.28)

target_sources(result PRIVATE
               FILE_SET modules TYPE CXX_MODULES
               FILES
                 ${CMAKE_CURRENT_SOURCE_DIR}/module.cppm
                 ${CMAKE_CURRENT_SOURCE_DIR}/partition.cppm
)
