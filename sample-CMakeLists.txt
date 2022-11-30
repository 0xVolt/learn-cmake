cmake_minimum_required(VERSION 3.0)

project(sample)

set(CMAKE_CXX_COMPILER "C:\\MinGW\\bin\\g++.exe")
set(CMAKE_C_COMPILER "C:\\MinGW\\bin\\gcc.exe")

add_executable(
    sample
    main.cpp
)