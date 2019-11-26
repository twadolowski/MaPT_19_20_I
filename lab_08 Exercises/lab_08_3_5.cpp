#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int *p;

    if (x > 5) {
        p = new int;    
        *p = x*10;
    }

    cout << *p << endl;

    delete p;
}