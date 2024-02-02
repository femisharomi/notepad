#!/bin/bash

for file in "$@"; do
    if [[ $file == *.c || $file == *.cpp || $file == *.h || $file == *.hpp ]]; then
        ./generate_header.py "$file"
    fi
done
