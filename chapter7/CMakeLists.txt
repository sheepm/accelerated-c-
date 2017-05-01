cmake_minimum_required(VERSION 3.7)
project(chapter7)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp grammar.cpp grammar.h string_util.cpp string_util.h)
add_executable(chapter7 ${SOURCE_FILES})