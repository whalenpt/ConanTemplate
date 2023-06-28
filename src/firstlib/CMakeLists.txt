cmake_minimum_required(VERSION 3.15)

add_library(first first.cpp first.h)
target_compile_features(first PUBLIC cxx_std_17)
target_include_directories(first PUBLIC 
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
	$<INSTALL_INTERFACE:include>
)

add_library(Hello::first ALIAS first)
install(FILES first.h
        DESTINATION include/Hello)
