cmake_minimum_required(VERSION 3.20)
project(cpp_module02)

set(CMAKE_CXX_STANDARD 98)

file(GLOB EX00 ex00/*.cpp ex00/*.hpp)
add_executable(ex00 ${EX00})

