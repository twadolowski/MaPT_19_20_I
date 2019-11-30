#include <iostream>

int main() {
    int b = 1;

    b = 2;
    //int b = 2;
    std::cout << "b=" << b << std::endl;
    {
        b = 3;
        //int b = 4;
        std::cout << "b=" << b << std::endl;
    }

    std::cout << "b=" << b << std::endl;
}