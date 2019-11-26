#include<iostream>
using namespace std;

int *createAndSet(size_t size, int value){
    int *array = new int[size];
    for (size_t i = 0; i < size; ++i ) {
        array[i] = value;
    }
    return array;
}

int main(){
    int *tab;
    tab = createAndSet(10, 666);
    // do something 
    tab = createAndSet(10, 777);
    delete[] tab;
