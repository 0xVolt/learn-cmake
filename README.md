# Working with CMAKE

## The requirement for CMAKE

The traditional way of creating object files and then compiling them with g++ is,

```c++
g++ -o src main.cpp

./src
```

Here, we tell the compiler which source file to call, i.e., `main.cpp` and what the name of the object file should be, i.e., `src`. Once compiled, we run the generated file and then receive an output.

In a real-world scenario, when there are hundreds, even thousands, of source files that need to be compiled and run, it becomes impractical to use this command that many times. That's where `CMAKE` and `MAKE` come in.

