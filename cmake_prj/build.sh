#!/bin/bash

# Force execution to halt if there are any errors in this script:
set -e
set -o pipefail

mkdir -p build
cd       build
conan install ..
cmake -DCMAKE_BUILD_TYPE=Debug .. -DCMAKE_CXX_COMPILER=clang++-11
cmake --build .
ctest --output-on-failure . -C Debug
