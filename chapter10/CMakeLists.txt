cmake_minimum_required(VERSION 3.7)
project(chapter10)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp grade.cpp grade.h)
add_executable(chapter10 ${SOURCE_FILES})