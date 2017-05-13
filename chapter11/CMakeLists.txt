cmake_minimum_required(VERSION 3.7)
project(chapter11)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Vec.cpp Vec.h)
add_executable(chapter11 ${SOURCE_FILES})