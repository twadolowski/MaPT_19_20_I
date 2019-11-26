#include <iostream>
using namespace std;

int main(){
    int tab[11];
    int *start = tab;
    int *end = &tab[10];

    while (end > start) {
        int tmp = *end;
        *end = *start;
        *start = tmp;
        end--;
        start++;
    }
}
