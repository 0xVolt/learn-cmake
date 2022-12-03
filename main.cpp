// Include our user-defined header file
#include "include/Common.h"

#include <iostream>
// #include <string>

int main() {
    std::string message = "Print this b*tch";

    printFromSrc(message);

    std::cout << "We're back in main.cpp!";

    return 0;
}
