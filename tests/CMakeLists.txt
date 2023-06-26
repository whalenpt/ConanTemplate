cmake_minimum_required(VERSION 3.8)

# dependencies
enable_testing()
find_package(GTest MODULE REQUIRED) 
if(NOT TARGET Hello::hello)
    find_package(Hello CONFIG REQUIRED)
endif()

# target definition
add_executable(HelloTests test_hello.cpp)
target_link_libraries(HelloTests
    PRIVATE
        Hello::hello
        GTest::Main
)

add_test(NAME Hello.unittests
    COMMAND HelloTests
)
