cmake_minimum_required(VERSION 3.15)
project(hello CXX)

add_library(hello hello.cpp)
set_target_properties(hello PROPERTIES PUBLIC_HEADER "include/hello/hello.h")
target_compile_features(hello PUBLIC cxx_std_17)
target_include_directories(hello PUBLIC 
	$<BUILD_INTERFACE:${CMAKME_CURRENT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>
)

add_library(Hello::hello ALIAS hello)

install(TARGETS hello EXPORT helloTargets
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
	RUNTIME DESTINATION bin
	INCLUDES DESTINATION include)
install(EXPORT helloTargets
	DESTINATION lib/cmake/hello
	FILE helloTargets.cmake
	NAMESPACE Hello::)
install(DIRECTORY include/hello
	DESTINATION include)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(helloConfigVersion.cmake
	COMPATIBILITY SameMajorVersion)
install(FILES helloConfig.cmake ${CMAKE_CURRENT_BINARY_DIR}/helloConfigVersion.cmake
	DESTINATION lib/cmake/hello)

