#include <iostream>

int main() {
    int a = 1;
    int b = 1;
	int c = 1;
	
    //	a = a+1;
    a+= 1;
    c = ++b;
   // b*=a+1;		//	    b=b*(a+1)
		
std::cout << “a =” << a << std::endl;
std::cout << “b =” << b << std::endl;
std::cout << “c =” << c << std::endl;
}