cmake_minimum_required(VERSION 3.14)
project(ECM)

set(CMAKE_CXX_STANDARD 20)

add_executable(ECM main.cpp mySimpleComputer.h mySimpleComputer.cpp myTerm.cpp myTerm.h)