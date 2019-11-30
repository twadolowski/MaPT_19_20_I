#include <iostream>

int main() {

    int counter = 10;
    while (counter--) {
        std::cout << counter << ", ";
    }
    std::cout << "THE END" << std::endl;
}