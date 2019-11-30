#include <iostream>

  int main() {

    int a = 32540;
    short b = a;
    std::cout << "b= " << b << std::endl;

    float f = 1.9;
    int x = f;

    int c = 1;
    unsigned int d = c;

    b = (short) a;

    b = short(a);

    b = static_cast < short > (a);
  }