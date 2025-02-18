
#include <iostream>
#include "Complex.h"

using namespace cmsc270;

int main() {
    Complex c1(6.5, 9.25), c2(0.0, -1.0);
    
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;

    std::cout << "c1 + c2: " << c1 + c2 << std::endl;
    std::cout << "c1 - c2: " << c1 - c2 << std::endl;
    std::cout << "c1 * c2: " << c1 * c2 << std::endl;

    c1 += c2;
    std::cout << "c1 after += c2: " << c1 << std::endl;

    c1 -= c2;
    std::cout << "c1 after -= c2: " << c1 << std::endl;

    c1 *= c2;
    std::cout << "c1 after *= c2: " << c1 << std::endl;

    std::cout << "c1 + 5: " << c1 + 5 << std::endl;
    std::cout << "5 + c1: " << 5 + c1 << std::endl;

    return 0;
}
