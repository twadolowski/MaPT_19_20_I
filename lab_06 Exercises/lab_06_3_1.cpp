#include <iostream>

int main() {
    int b = 3;
    std::cout << "b=" << b << std::endl;

    if (b<4) {
        b = 5;
        std::cout << "b=" << b << std::endl;
    }
    
    std::cout << "b=" << b << std::endl;
}