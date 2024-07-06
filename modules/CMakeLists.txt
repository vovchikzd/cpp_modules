cmake_minimum_required(VERSION 3.28)

# ninja (or cmake, but most likely ninja)
# doesn't support module implementation units so far
#
# TODO: read c++ iso to check status of module implementation units

target_sources(result PRIVATE
               FILE_SET modules TYPE CXX_MODULES
               FILES
                 ${CMAKE_CURRENT_SOURCE_DIR}/module.cppm
                 ${CMAKE_CURRENT_SOURCE_DIR}/partition.cppm
)
