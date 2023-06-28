#!/bin/bash

mkdir -p build
pushd build
cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=~/.local
cmake --build . --target install
popd