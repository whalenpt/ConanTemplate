cmake_minimum_required(VERSION 3.15)
project(hello VERSION 0.1.0)

add_library(hello hello.cpp)
set_target_properties(hello PROPERTIES PUBLIC_HEADER "include/hello/hello.h")
target_compile_features(hello PUBLIC cxx_std_17)
target_include_directories(hello PUBLIC 
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>
)

add_library(Hello::hello ALIAS hello)

install(TARGETS hello EXPORT helloTargets
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
	RUNTIME DESTINATION bin
	PUBLIC_HEADER DESTINATION include
	INCLUDES DESTINATION include)
install(EXPORT helloTargets
	DESTINATION lib/cmake/hello
	FILE helloTargets.cmake
	NAMESPACE Hello::)
install(DIRECTORY include/hello
	DESTINATION include)

