cmake_minimum_required(VERSION 3.20)
project(cpp_module02)

set(CMAKE_CXX_STANDARD 98)

file(GLOB EX00 ex00/*.cpp ex00/*.hpp)
file(GLOB EX01 ex01/*.cpp ex01/*.hpp)
file(GLOB EX02 ex02/*.cpp ex02/*.hpp)
add_executable(ex00 ${EX00})
add_executable(ex01 ${EX01})
add_executable(ex02 ${EX02})

