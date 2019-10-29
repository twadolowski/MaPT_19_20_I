#include <iostream>
using namespace std;
int x = 1, g = 2;


int main(){
	cout << x <<endl;				// x == 2 (l:8)
					// x == 1 (l:4)
	int x = 2;		// ok
	cout << x <<endl;				// x == 2 (l:8)
	if (x > 1) {
		x++;		// x == 3 (l:8)
		cout << x <<endl;
		int x = 4;	// x == 4 (l:12)
		cout << x <<endl;
		x++;		// x == 5 (l:12)
		cout << x <<endl;
	}else{
		int x = 16;
		cout<<x<<endl; //doesn't run cause if statment worked so doens't enter else at all !
	}
	cout << x<<endl;	// x == 3 (l:8)
	cout << g<<endl;	// g == 2 (l:4)


					// redeclaration
}

