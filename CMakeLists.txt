cmake_minimum_required(VERSION 3.20)
project(sorting)

set(CMAKE_CXX_STANDARD 14)

add_executable(sorting main.cc sorter.h bubble_sort.h timer.cc timer.h compare_sorts.cc compare_sorts.h)
