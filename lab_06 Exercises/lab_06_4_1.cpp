#include <iostream>

int main() {

    int counter = 10;

    do {
        std::cout << counter << ", ";
    } while (counter--);

    std::cout << "THE END" << std::endl;
}