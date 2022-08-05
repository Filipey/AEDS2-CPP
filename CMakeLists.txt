cmake_minimum_required(VERSION 3.22)
project(aeds2_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(aeds2_cpp main.cpp pointers/pointers.cpp pointers/pointers.h references/references.cpp references/references.h)
