#include <iostream>
using namespace std ;

struct Product {
int wight ;

float price;

};

int main (){

Product ob1 = {5, 20.55};
Product ob2 ;

ob2=ob1;

cout << ob2.wight<<endl;
cout << ob2.price << endl;
}
