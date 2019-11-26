#include <iostream>

int main() {
    int tab_size = 7;

    int tab[tab_size] = {0,1,2,3,4,5};
    std::cout << " tab= " << tab << std::endl;
    std::cout << " tab[2]= " << tab[2] << std::endl;

    char tab1[tab_size] = "AGH EiT";
    char tab2[tab_size] = {'A','G','H'};
    std::cout << " tab1= " << tab1 << std::endl;
    std::cout << " tab2= " << tab2 << std::endl;
    std::cout << " tab1[2]= " << tab1[2] << std::endl;
}
