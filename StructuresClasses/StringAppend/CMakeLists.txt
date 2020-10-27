cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

if (MSVC)
    # warning level 4
    add_compile_options(/W4)
else()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -Wextra -pedantic)
endif()

project(StringAppend)

add_executable(append src/main.cpp src/append.cpp)
