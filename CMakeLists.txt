
cmake_minimum_required (VERSION 3.22.0)

project (lib_1)

add_library (lib_01 STATIC Greeter.h Greeter.cpp)

add_executable (lib_1_EXE con_lib_01.cpp)

target_link_libraries (lib_1_EXE lib_01)


