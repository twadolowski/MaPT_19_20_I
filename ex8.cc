#include <iostream>
//using namespace std;
//int main(){
//int tab[4]={10,20,30,40};
//
//	float x;
//	float y ;
//	
//
//	for(x = -3; x < 3; x+=0.1) {
//	y = (x*x)+1;
//  	cout << y << "\n";
//}
//}

#include <iostream>
using namespace std;

int main() {
	char tab[] = "Hello World!!!";

	cout << tab[0] << endl;			// H
	cout << tab[1] << endl;			// e
	cout << tab << endl;			// Hello World!!!
	cout << sizeof(tab) << endl;	// 15
	cout << tab[6] << endl;
	char last = tab[sizeof(tab)-1];
	cout << int(last) << endl;		// 0
}
