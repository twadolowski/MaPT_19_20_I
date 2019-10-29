#include <iostream>
using namespace std ;

struct Product {
int wight ;
double price;

};

int main (){

Product ob1 = {5, 5.55};
Product ob2 ;

ob2=ob1;
cout << sizeof(ob2.wight)<<endl;
cout << sizeof(ob2.price)<<endl;
cout << sizeof(ob2)<<endl;
}
