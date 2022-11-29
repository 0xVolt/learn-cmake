# Working with CMAKE

## The requirement for CMAKE

The traditional way of creating object files and then compiling them with g++ is,

```c++
g++ -o src main.cpp

./src
```

Here, we tell the compiler which source file to call, i.e., `main.cpp` and what the name of the object file should be, i.e., `src`. Once compiled, we run the generated file and then receive an output.

In a real-world scenario, when there are hundreds, even thousands, of source files that need to be compiled and run, it becomes impractical to use this command that many times. That's where `CMAKE` and `MAKE` come in.

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