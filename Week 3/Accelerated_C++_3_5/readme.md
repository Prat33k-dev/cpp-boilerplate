# Accelerated C++ 3-5

## Overview

C++ project to  compute and keep a track of final grades of several students at once.

## Standard install via command-line
```
git clone -b pratik_bhujbal_117555295_week3 https://github.com/Prat33k-dev/cpp-boilerplate.git
cd <path to repository>/Week\ 3/Accelerated_C++_3_5/
mkdir build
cd build
cmake ..
make
Run program: ./app/Accelerated_C++_3_5
```

## Working with Eclipse IDE ##

## Installation

In your Eclipse workspace directory (or create a new one), checkout the repo (and submodules)
```
mkdir -p ~/workspace
cd ~/workspace
git clone -b pratik_bhujbal_117555295_week3 https://github.com/Prat33k-dev/cpp-boilerplate.git
```

In your work directory, use cmake to create an Eclipse project for an [out-of-source build] of Accelerated_C++_3_5

```
cd ~/workspace
mkdir -p Accelerated_C++_3_5_eclipse
cd Accelerated_C++_3_5_eclipse
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../cpp-boilerplate/Week\ 3/Accelerated_C++_3_5/
```

## Import

Open Eclipse, go to File -> Import -> General -> Existing Projects into Workspace -> 
Select "Accelerated_C++_3_5_eclipse" directory created previously as root directory -> Finish

# Edit

Source files may be edited under the "[Source Directory]" label in the Project Explorer.


## Build

To build the project, in Eclipse, unfold Accelerated_C++_3_5_eclipse project in Project Explorer,
unfold Build Targets, double click on "all" to build all projects.

## Run

1. In Eclipse, right click on the Accelerated_C++_3_5_eclipse in Project Explorer,
select Run As -> Local C/C++ Application

2. Choose the **Accelerated_C++_3_5** binary to run


## Debug


1. Set breakpoint in source file (i.e. double click in the left margin on the line you want 
the program to break).

2. In Eclipse, right click on the Accelerated_C++_3_5_eclipse in Project Explorer, select Debug As -> 
Local C/C++ Application, choose the **Accelerated_C++_3_5** binary to run.

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
