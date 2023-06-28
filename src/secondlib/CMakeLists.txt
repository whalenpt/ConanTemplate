cmake_minimum_required(VERSION 3.15)

add_library(second second.cpp second.h)
target_compile_features(second PUBLIC cxx_std_17)
target_include_directories(second PUBLIC 
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
	$<INSTALL_INTERFACE:include>
)

add_library(Hello::second ALIAS second)
install(FILES second.h
        DESTINATION include/Hello)