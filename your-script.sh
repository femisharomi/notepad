#!/bin/bash

# Set GIT_DIR to point to the .git directory
export GIT_DIR="$(git rev-parse --git-dir)"
# Change to the root of the Git repository
cd "$(git rev-parse --show-toplevel)" || exit 1

# Get author name from the Git user name
author_name=$(git config user.name)

# Generate a formatted date string
current_date=$(date +"%Y-%m-%d")

# Get the current branch
current_branch=$(git rev-parse --abbrev-ref HEAD)
current_branch_url_with_branch=$(git remote get-url origin | sed 's/\.git$//' | xargs echo -n | sed "s/$/\/$current_branch/")

# Iterate through staged files
while IFS= read -r file; do
    # Check if the file has a supported extension and the header exists
    if [[ "$file" == *.cpp || "$file" == *.c || "$file" == *.h || "$file" == *.hpp ]]; then
        # Check if the file contains Author, Date Created, and Repository fields
        if grep -q -E "Author:\s*\$author_name" "$file"; then
            sed -i.bak -e "s/Author:\s*\$author_name/Author: $author_name/" "$file"
        fi

        if grep -q -E "Date Created:\s*\$current_date" "$file"; then
            sed -i.bak -e "s/Date Created:\s*\$current_date/Date Created: $current_date/" "$file"
        fi

        if grep -q -E "Repository:\s*\$branch_repo" "$file"; then
            sed -i.bak -e "s/Repository:\s*\$branch_repo/Repository: $current_branch_url_with_branch/" "$file"
        fi

        # Stage the modified file
        git add "$file"
    fi
done < <(git diff --cached --name-only)

exit 0
