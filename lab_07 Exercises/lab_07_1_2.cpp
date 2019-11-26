#include <iostream>

int main() {
    int width = 20;
    int height = 10;

    for (int x = 1; x <= width; x = x + 2 ) {
        for (int y = height; y >= 1; y = y - 3 ) {
            std::cout << x << " " << y << std::endl;
        }
    }
}
