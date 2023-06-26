cmake_minimum_required(VERSION 3.15)
project(hello CXX VERSION 0.1.0)

option(BUILD_TESTS "BUILD TESTS WITH PROJECT" OFF)

# add project code
add_subdirectory(src)

# add unit tests
if(${BUILD_TESTS})
    enable_testing()
    add_subdirectory(tests)
endif()

