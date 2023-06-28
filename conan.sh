#!/bin/bash

echo Making conan CMake library project
conan new cmake_lib -d name=hello -d version=0.1.0

conan profile detect --name=default --force
