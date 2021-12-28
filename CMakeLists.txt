cmake_minimum_required(VERSION 3.20)
project(listCircled)

set(CMAKE_CXX_STANDARD 14)

add_executable(listCircled main.cpp Node.h LinkCircled.cpp LinkCircled.h Book.cpp Book.h)
