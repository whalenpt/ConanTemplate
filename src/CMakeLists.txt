
cmake_minimum_required(VERSION 3.22)
project(Hello VERSION 0.1.0)

add_subdirectory(hellolib)

add_executable(helloapp main.cpp)
target_link_libraries(helloapp PRIVATE hello)

