#include <iostream>

int main() {
    char c = '0';

    switch (c) {
    case '0':
        std::cout << "0\n";
        std::cout << "zero\n";
        break;
    case 50:
        std::cout << "two\n";
        break;
    case 'd':
        break;
    case 'e':
    case 'f': {
        std::cout <<"e-f\n";
        break;
    }
    default:
        std::cout << "other\n";
    }
}