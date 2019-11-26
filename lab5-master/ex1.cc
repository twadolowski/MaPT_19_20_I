
#include <iostream>

int x = 1, g = 2;

int main(){
					// x == 1 (l:4)
	int x = 2;		// ok
					// x == 2 (l:8)
	if (x > 1) {
		x++;		// x == 3 (l:8)
		int x = 4;	// x == 4 (l:12)
		x++;		// x == 5 (l:12)
	}
	std::cout << x;	// x == 3 (l:8)
	std::cout << g;	// g == 2 (l:4)

	//int x =2;		// ERROR
					// redeclaration
}

