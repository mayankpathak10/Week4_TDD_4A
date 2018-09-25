# ENPM808X: Software Development for Robotics
## Week 4 Assignment - Test-Driven Development - Group 4
[![Build Status](https://travis-ci.com/SrinidhiSreenath/Week4_TDD_4A.svg?branch=master)](https://travis-ci.com/SrinidhiSreenath/Week4_TDD_4A)
[![Coverage Status](https://coveralls.io/repos/github/SrinidhiSreenath/Week4_TDD_4A/badge.svg?branch=master)](https://coveralls.io/github/SrinidhiSreenath/Week4_TDD_4A?branch=master)
---
 ## Authors
```
 Part 1:
 Driver: Mayank Pathak (mayankpathak10)
 Navigator: Venkatraman Narayanan
 @version 1.0
 @copyright GNU Public License
```
```
Part 2:
 Driver: Srinidhi Sreenath (SrinidhiSreenath)
 Navigator: Siddhesh Rane (srane96)
 @version 2.0
 @copyright GNU Public License
```
## Overview

Simple C++ project that implements PID controller with:

- cmake
- googletest

## Design review discussion and suggestions ##
A design review discussion was done with the authors of Part 1 and the following changes and suggestions were made:

1. In the original design, test cases did not cover all the lines to test the class source code and also contained incorrect test cases. The incorrect test cases were corrected and additional test cases were added to make the coverage 100 %.

2. As per the original design, in the controller class, the parameters were passed by value to member functions. The parameters were changed to be passed by reference and as a constant for more efficiency.

3. Naming convention was not as per the Google C++ style in some cases in the original design. Naming conventions were modified as per the styling requirements. One major change was the controller class source and header files naming which was changed to be consistent.

4. The time step ```dt```was defined as a member variable of the ``` Controller``` class with initialization to a value. A better approach would be to take dt as an user input as well.  

5. A member function ```Controller::setState(double currentstate)``` and member variable ```output``` were removed as they weren't necessary.

## Standard install via command-line
```
git clone https://github.com/SrinidhiSreenath/Week4_TDD_4A.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Working with Eclipse IDE ##

## Installation

In your Eclipse workspace directory (or create a new one), checkout the repo (and submodules)
```
mkdir -p ~/workspace
cd ~/workspace
git clone https://github.com/SrinidhiSreenath/Week4_TDD_4A.git
```

In your work directory, use cmake to create an Eclipse project for an [out-of-source build] of Week4_TDD_4A

```
cd ~/workspace
mkdir -p Week4-TDD-4A-eclipse
cd Week4-TDD-4A-eclipse
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../Week4_TDD_4A/
```

## Import

Open Eclipse, go to File -> Import -> General -> Existing Projects into Workspace -> 
Select "Week4-TDD-4A-eclipse" directory created previously as root directory -> Finish

# Edit

Source files may be edited under the "[Source Directory]" label in the Project Explorer.


## Build

To build the project, in Eclipse, unfold Week4-TDD-4A-eclipse project in Project Explorer,
unfold Build Targets, double click on "all" to build all projects.

## Run

1. In Eclipse, right click on the Week4-TDD-4A-eclipse in Project Explorer,
select Run As -> Local C/C++ Application

2. Choose the binaries to run (e.g. shell-app, cpp-test for unit testing)


## Debug


1. Set breakpoint in source file (i.e. double click in the left margin on the line you want 
the program to break).

2. In Eclipse, right click on the Week4-TDD-4A-eclipse in Project Explorer, select Debug As -> 
Local C/C++ Application, choose the binaries to run (e.g. shell-app).

3. If prompt to "Confirm Perspective Switch", select yes.

4. Program will break at the breakpoint you set.

5. Press Step Into (F5), Step Over (F6), Step Return (F7) to step/debug your program.

6. Right click on the variable in editor to add watch expression to watch the variable in 
debugger window.

7. Press Terminate icon to terminate debugging and press C/C++ icon to switch back to C/C++ 
perspetive view (or Windows->Perspective->Open Perspective->C/C++).


## Plugins

- CppChEclipse

    To install and run cppcheck in Eclipse

    1. In Eclipse, go to Window -> Preferences -> C/C++ -> cppcheclipse.
    Set cppcheck binary path to "/usr/bin/cppcheck".

    2. To run CPPCheck on a project, right click on the project name in the Project Explorer 
    and choose cppcheck -> Run cppcheck.


- Google C++ Sytle

    To include and use Google C++ Style formatter in Eclipse

    1. In Eclipse, go to Window -> Preferences -> C/C++ -> Code Style -> Formatter. 
    Import [eclipse-cpp-google-style][reference-id-for-eclipse-cpp-google-style] and apply.

    2. To use Google C++ style formatter, right click on the source code or folder in 
    Project Explorer and choose Source -> Format

[reference-id-for-eclipse-cpp-google-style]: https://raw.githubusercontent.com/google/styleguide/gh-pages/eclipse-cpp-google-style.xml
