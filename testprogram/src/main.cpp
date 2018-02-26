#include <iostream>
#include <string>

#include <testmath.h>

int main(int argc, char** argv) {
    std::cout << "Hello World!" << std::endl;
    std::cout << "3 * 4 = " << testmath::multiply(3, 4) << std::endl;

    return EXIT_SUCCESS;
}
