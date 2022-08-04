cmake_minimum_required(VERSION 3.19)
project(test C)

set(CMAKE_C_STANDARD 99)

add_executable(test main.c wrap.c wrap.h src/Student.cpp src/Student.h)