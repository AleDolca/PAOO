#CMake version
cmake_minimum_required(VERSION 3.1)

#Project name
project(MyProject)

set(CMAKE_CXX_STANDARD 14)  # we request C++14
set(CMAKE_CXX_STANDARD_REQUIRED ON) # we request that CMake verifies the compiler
set(CMAKE_CXX_EXTENSIONS OFF)  #we request -std=c++14 in the compiler  flags instead of –std=gnu++14

add_subdirectory(src)

