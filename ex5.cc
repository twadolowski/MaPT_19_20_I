#include <iostream>
using namespace std;
struct Product{
	int weight;
	float price;
	double a;
	char b;
};

int main(){
	Product casa;
	casa.weight=2;
	casa.price=3.5;
	casa.a=2;
	casa.b=55;
	std::cout << casa.weight <<std::endl;
	std::cout << casa.price <<std::endl;
	std::cout << sizeof(casa.weight) <<std::endl;
	std::cout << sizeof(casa.price) <<std::endl;
	std::cout << sizeof(casa.a) <<std::endl;
	std::cout << sizeof(casa.b) <<std::endl;
};
	
