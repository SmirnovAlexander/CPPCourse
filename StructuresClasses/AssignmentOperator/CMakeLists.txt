cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -pedantic)
endif()

project(AssignmentOperator)

add_executable(string src/main.cpp src/string_custom.cpp)
