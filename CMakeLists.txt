cmake_minimum_required(VERSION 3.13)
project(LeftistHeap)

set(CMAKE_CXX_STANDARD 14)

add_executable(LeftistHeap
    test.cpp LeftistHeap.cpp LeftistHeap.h Node.cpp Node.h)
