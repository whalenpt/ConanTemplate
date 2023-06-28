
cmake_minimum_required(VERSION 3.22)
project(Hello VERSION 0.1.0)

add_subdirectory(firstlib)
add_subdirectory(secondlib)

add_executable(app main.cpp)
target_link_libraries(app PRIVATE Hello::first Hello::second)

install(TARGETS first second)
