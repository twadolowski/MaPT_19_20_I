#include<iostream>
using namespace std;

void setToZero(int *tab, size_t size){
    for (size_t i = 0; i < size; ++i ){
        tab[i] = 0;
    }
}

int main(){
    int tab[10];
    setToZero(tab, 10);
}
