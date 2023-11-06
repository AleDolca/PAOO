# CMake version
cmake_minimum_required(VERSION 3.0)

# Project name
project(MyProject)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(Carte)

# Define the executable
add_executable(MyProject main.cpp)   

target_link_libraries(MyProject PRIVATE CarteLib)

target_include_directories(MyProject PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/Carte")