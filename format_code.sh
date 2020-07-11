#!/bin/bash

find . -iname "logger.h" -o -iname "main.cpp" | xargs clang-format -i -style=file
find ./basics -iname "*.h" -o -iname "*.cpp" | xargs clang-format -i -style=file

find ./transaction_processing -iname "*.h" -o -iname "*.cpp" | xargs clang-format -i -style=file
find ./swap -iname "*.h" -o -iname "*.cpp" | xargs clang-format -i -style=file
find ./shared -iname "*.h" -o -iname "*.cpp" | xargs clang-format -i -style=file
find ./operator_overloading -iname "*.h" -o -iname "*.cpp" | xargs clang-format -i -style=file
find ./dynamic_memory -iname "*.h" -o -iname "*.cpp" | xargs clang-format -i -style=file
find ./dereferencing -iname "*.h" -o -iname "*.cpp" | xargs clang-format -i -style=file
find ./const_example -iname "*.h" -o -iname "*.cpp" | xargs clang-format -i -style=file