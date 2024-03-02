# Zero - The beginning 

## Overview
This repository is a collection of diverse C++ projects designed to explore the intricacies of application development using the Qt Creator IDE and Qt Widgets. Ranging from terminal-based applications to mobile and desktop solutions, each project in this repository serves as a standalone learning experience. Whether you are a novice or an experienced developer, these projects cover various levels of expertise, offering insights into different aspects of C++ utilization.

Feel free to reach out if you have any questions or encounter issues.

## Table of Contents
- [Getting Started](#getting-started)
- [Prerequisites](#prerequisites)
- [Pre-commit Hook](#pre-commit-hook)
- [Folder Structure](#folder-structure)
- [License](#license)

## Getting Started
- Clone the repository to your local machine.
- Navigate to the "project name" folder to access the source code.
- The compiled executable (.exe/.app) can be found in the "build" folder.

## Prerequisites
- Ensure you have the latest version of Qt installed for Win or Mac: [https://www.qt.io/product/development-tools](https://www.qt.io/product/development-tools).
- Current build folders contain the .app for MacOS.
  - If you're on Windows you will need to build and run the source code to create a Win build of the application.   

## Pre-commit Hook
* Copy&paste the pre-commit file (it does not have a file ext) from templates/ to .git/hooks/ to ensure the correct file header is generated for each C/C++ file type committed back to the branch.
* A hardcoded copy of the header template is also in the templates/ dir for manual use. 

## Folder Structure
- **Zero (Top Level):**
  - **Projects:**
    - Each project resides in its own folder at the top level, encapsulating its unique application development focus.
  - **README and .gitignore:**
    - Essential documentation and version control settings at the repository level.
  - **Templates:**
    - Centralized storage for reusable templates and assets applicable across projects or repositories.

### Organization Inside Each Project Folder
- **`Project_Name`:**
  - Folder named after the project.
  - Contains all files necessary for building the project.
  - **`CMakeLists.txt`:**
    - CMake configuration file for project building and management.
    - Used to build the entire application, assuming all prerequisites are installed.
- **`build_Project_Name_Debug`:**
  - Folder with the syntax `build_Project_Name_Debug`.
    - Contains the project along with debug configurations.
    - Useful for quick testing, but developers are encouraged to create personalized configurations for release builds.

This structure facilitates efficient navigation, ensuring that developers can seamlessly explore various C++ application scenarios. The inclusion of project-specific details and configurations empowers users to delve into specific projects and tailor their learning experience. The centralized Templates folder further enhances reusability and consistency across the entire repository.

## License
This project is open-source and licensed under the [GNU Lesser General Public License v3.0](https://opensource.org/licenses/LGPL-3.0).

### Qt Framework License
This project may use the Qt framework, which is licensed under the [Qt Commercial License](https://www.qt.io/licensing). Please refer to the respective licenses for more details.

### Author
- [Femi Sharomi](https://github.com/femisharomi)
  
©2024 FemiSharomi & DeezLM. 
