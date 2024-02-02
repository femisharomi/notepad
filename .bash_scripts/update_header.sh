#!/bin/bash

# Get the absolute path to the directory containing this script
script_dir=$(cd "$(dirname "$0")" && pwd)

# Get the list of all files in the repository
all_files=$(git ls-files)

for file in $all_files; do
    if [[ $file == *.c || $file == *.cpp || $file == *.h || $file == *.hpp ]]; then
        # Run the generate_header.py script using an absolute path
        "$script_dir/generate_header.py" "$file"
    fi
done
