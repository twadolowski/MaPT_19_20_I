#include<iostream>
using namespace std;

struct Complex{
    float re;
    float im;
};

Complex f(Complex in){
    Complex result = {in.im, in.re};
    return result;
}

int main(){
    Complex in = {3, 4};
    Complex r = f( in );

    cout << r.re << endl;
    cout << r.im << endl;
} 


