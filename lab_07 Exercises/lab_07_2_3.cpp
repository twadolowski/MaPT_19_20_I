#include <iostream>

int main() {
    int tab_size = 5;
    int tab[tab_size][tab_size];

    for (int x = 1; x < tab_size; x ++) {
        for (int y = 1; y < tab_size; y ++) {
            tab[x][y]=1;
        }
    }

    std::cout << " tab[x][y] = " << std::endl;

    for (int x = 1; x < tab_size; x ++) {
        std::cout << "\n";
        for (int y = 1; y < tab_size; y ++) {
            std::cout << " " << tab[x][y] ;
        }
    }

    std::cout << "\n\n";
    std::cout << " &tab = " << tab << std::endl;
    std::cout << " &tab[1] = " << tab[1] << std::endl;
}

