cmake_minimum_required(VERSION 3.30)
project(magic_square)

set(CMAKE_CXX_STANDARD 20)

add_executable(magic_square main.cpp
        baseline.h
        constants.h
        baseline.cpp
        nested_loops.h
        nested_loops.cpp)
