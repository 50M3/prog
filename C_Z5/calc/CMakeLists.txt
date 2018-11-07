cmake_minimum_required(VERSION 3.12)
project(calc C)

set(CMAKE_C_STANDARD 99)

add_executable(calc main.c function.c function.h)