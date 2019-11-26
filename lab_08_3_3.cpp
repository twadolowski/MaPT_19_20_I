#include <iostream>
using namespace std;

int main(){
    char tab[] = "Ala ma kota";
    char *p = tab;

    while ( *p ) {
        cout << *p++;   // *(p++)
    }
    cout << endl;

}

// result: Ala ma kota
// while( p ) {}  what kind of mistake?
