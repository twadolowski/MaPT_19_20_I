#include <iostream>
using namespace std;

int main() {
	char tab[] = "Hello World!!!";

	cout << tab[0] << endl;			// H
	cout << tab[1] << endl;			// e
	cout << tab << endl;			// Hello World!!!
	cout << sizeof(tab) << endl;	// 15

	char last = tab[sizeof(tab)-1];
	cout << int(last) << endl;		// 0
}
