#include <iostream>

int main(){
	int width = 1920;

	for (int x = 0; x < width; ++x ) {
		if (x == 2){
			continue;
		} else if (x == 5){
			break;
		}
		std::cout << x << std::endl;
	}
}

