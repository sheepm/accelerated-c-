cmake_minimum_required(VERSION 3.7)
project(chapter5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp median.h student_info.h grade.h student_info.cpp grade.cpp median.cpp string_util.h string_util.cpp vector_util.cpp vector_util.h)
add_executable(chapter5 ${SOURCE_FILES})