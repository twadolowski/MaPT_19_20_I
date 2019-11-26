#include <iostream>
using namespace std;

int main(){
    int tab[] = {4, 3, 2, 1, 0};
    int *p = tab;

    cout << *p << ": " << p << endl;        // 4: 0x7fff138587d0
    p++;
    cout << *p << ": " << p << endl;        // 3: 0x7fff138587d4: 3
    cout << *(p+1) << ": " << p+1 << endl;  // 2: 0x7fff138587d8: 2
    cout << *p+1 << ": " << p+1 << endl;    // 4: 0x7fff138587d8: 4
}
