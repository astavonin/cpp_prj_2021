cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(cmake_based_project)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

add_subdirectory(src)
add_subdirectory(tests)
