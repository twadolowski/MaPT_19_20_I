#include <iostream>
using namespace std;
int main(){
	int a=3;
	int b=0;
	int c=(a<b);
	
	std::cout << c << std::endl;
	std::cout << (a>b) << std::endl;
	std::cout << (4+2<=2*a) << std::endl;

	bool b1=true;
	bool b2=(4+2)<=(2*a);
	bool b3=4+2<2*a;

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
}
