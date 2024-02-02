#!/usr/bin/env python3
import os
from datetime import date

def generate_header(file_path, author):
    current_date = date.today().strftime("%Y-%m-%d")

    header = f'''/*
 * Author: {author}
 * Date:   {current_date}
 * Description: Placeholder for file-specific description
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
    author_name = "Femi Sharomi"
    file_path = input("Enter the file path: ")

    generate_header(file_path, author_name)
