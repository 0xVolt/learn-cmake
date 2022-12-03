// Include the user-defined header file to implement the functions it declares
#include "../include/Common.h"

// We don't need to include string since Common.h includes it already
#include <iostream>

// Function implementation
void printFromSrc(std::string message) {
    std::cout << message << std::endl;
}