#include <iostream>
using namespace std;

struct Product {
	int weight;
	float price;
};

int main() {
	Product p = {1, .5};
	Product *x = &p;

	p.weight = 2;
	x->weight = 4;
	float my_price = x->price;

	cout << p.weight << endl;	// ??
	cout << my_price << endl;	// ??
}
