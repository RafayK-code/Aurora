cmake_minimum_required(VERSION 3.3)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")

project(aurora)

add_executable(aurora src/main.cpp src/dummy.h src/Lexer/Lexer.h src/Lexer/Lexer.cpp)
include_directories(${CMAKE_SOURCE_DIR}/src)
