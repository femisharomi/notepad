#!/bin/bash

# Get author name from the Git user name
author_name=$(git config user.name)

# Create header.txt with placeholders
cat <<EOF > header.txt
/*
 *
 * Author: $author_name
 * Date:   \$(date +"%Y-%m-%d")
 *
*/
EOF

# Create generate_header.py
cat <<EOF > generate_header.py
#!/usr/bin/env python3
import os
from datetime import date

def generate_header(file_path, author):
    current_date = date.today().strftime("%Y-%m-%d")

    header = f'''/*
 *
 * Author: {author}
 * Date:   {current_date}
 *
 */

'''

    with open(file_path, 'r') as file:
        content = file.read()

    with open(file_path, 'w') as file:
        # Check if the file already has a header
        if '/*' in content:
            print(f"Header already exists in {file_path}. Skipping...")
            file.write(content)
        else:
            file.write(header + content)

if __name__ == "__main__":
    author_name = "$author_name"
    file_path = input("Enter the file path: ")

    generate_header(file_path, author_name)
EOF

# Make generate_header.py executable
chmod +x generate_header.py

# Create update_header.sh
cat <<EOF > update_header.sh
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

EOF

# Make update_header.sh executable
chmod +x update_header.sh

# Create pre-commit hook to run update_header.sh before each commit
cat <<EOF > ../.git/hooks/pre-commit
#!/bin/bash

# Get the absolute path to the directory containing the pre-commit script
script_dir=$(cd "$(dirname "$0")" && pwd)

# Change to the directory above .git
cd "$script_dir/../../.bash_scripts" || exit 1

# Run the update_header.sh script
./update_header.sh "$(git diff --cached --name-only)"

# Change back to the original directory (optional)
cd - || exit 1
EOF

# Make pre-commit hook executable
chmod +x ../.git/hooks/pre-commit

echo "Files created successfully!"
