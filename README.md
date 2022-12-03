# Working with CMAKE

## The requirement for CMAKE

The traditional way of creating object files and then compiling them with g++ is,

```c++
g++ -o src main.cpp

./src
```

Here, we tell the compiler which source file to call, i.e., `main.cpp` and what the name of the object file should be, i.e., `src`. Once compiled, we run the generated file and then receive an output.

In a real-world scenario, when there are hundreds, even thousands, of source files that need to be compiled and run, it becomes impractical to use this command that many times. That's where `CMAKE` and `MAKE` come in.

## This Project
The way this project is setup is, we start off with a `CMake: Quick Start` through the command pallette and edit the `CMakeLists.txt` as we go along. There are numerous ways to build projects in C++ using CMake but the template that I'm most familiar with is having all the user-defined header files in a directory named `./include` and all the source files that implement those declared functions in the headers, in a directory named `./src` or `./source`.

## Using CMAKE

1. Create a project directory and move your source files into that directory. We do this by,
   ```ts
    mkdir sample/
    mv main.cpp sample/
    cd sample/
   ```
2. Create a file named `CMakeLists.txt` tells the make file the steps needed to compile our C++ code. This would look like this,
    ```ts
    <!-- Set the minimum version of CMAKE required to compile the project -->
    cmake_minimum_required(VERSION 3.0)

    set(CMAKE_BUILD_STYLE Debug)

    <!-- Tell CMAKE that we are operating on a project named sample -->
    project(sample)

    <!-- Produce the make file that will then create an executable -->
    add_executable(
        <!-- The name of the exec to be produced -->
        sample

        <!-- List of files to compile -->
        main.cpp
    )
    ```
3. Once the `CMakeLists.txt` file is setup, we can generate the make file by running the following in the root directory of the project.
    ```ts
    cmake .
    ```
4. Simply run,

        make
        ./sample

    to run the files compiled.


## Ideally

If you've a VSCode environment setup, do the following.
1. In the root folder, open up the command pallette and run `CMake: Quick Start`. This should generate a sample `CMakeLists.txt` file and run `cmake` on it. It will also generate a `main.cpp` file if there isn't one in the project yet.
2. `cd` into the `./build/` directory and run `make` to execute the generated MakeFile.
3. This would then create the compiled object file for the scripts. *Run those should you desire.*

###### Note: VSCode generates a CMakeLists.txt file like this. Just in case, for future reference when trying to build without a plugin that auto-generates it.

```ts
cmake_minimum_required(VERSION 3.0.0)
project(sample VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(sample main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
```