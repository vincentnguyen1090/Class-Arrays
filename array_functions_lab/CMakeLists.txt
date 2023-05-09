cmake_minimum_required(VERSION 3.24)
project(array_functions_lab)

set(CMAKE_CXX_STANDARD 17)

add_executable(array_functions_lab main.cpp functions.cpp functions.h testprint.h testprint.cpp testFillArray.cpp testFillArray.h testRemove.cpp testRemove.h testInsert.cpp testInsert.h testShiftLeft.cpp testShiftLeft.h testShiftRight.cpp testShiftRight.h)
