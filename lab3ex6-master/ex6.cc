#include <iostream>

int main(){
	int a=(-1);
	int b=0;
	int c=(a<b);

	std::cout << c << std::endl;
	std::cout << (a>b) << std::endl;
	std::cout << (4+2<=2*a) << std::endl;
	
	bool b1=true;		// or false
	bool b2=(4+2)<=(2*a);
	bool b3=4+2<2*a;
}
