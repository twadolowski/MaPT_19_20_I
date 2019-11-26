#include <iostream>

int main() {
    int tab_size = 7;
    int tab[tab_size] = {0,1,2,3,4,5,6};
    char tab2[tab_size] = "AGH EiT";

    for (int i = 0; i < tab_size; i = i + 1 ) {
        std::cout << " i = " << i << " tab[i]= " << tab[i] << " tab2[i]= " << tab2[i] << std::endl;
    }
}
