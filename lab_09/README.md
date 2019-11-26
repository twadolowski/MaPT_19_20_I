# Lab 09

## C++. Functions
author: Jarosław Bułat, Artur Kos 

## 1. Functions

#### EX1.1 arguments
1. Define function with 3 arguments of the type float.
1. Return biggest value among 3 arguments.
1. Test code on a few examples.   
1. Source code save in file `lab_10/ex1_1_correct.cc`, commit and push to your branch.

#### EX1.2 instruction sequence
1. Compile, execute and analyse example: `lab_10/ex05.cc`.
```cpp
#include<iostream>
using namespace std;

void pprint(int x) {
    cout << "1: " << x << endl;
    ++x;
    cout << "2: " << x << endl;
}

int main() {
    int x = 6;

    cout << "0: " << x << endl;
    pprint(x);
    cout << "3: " << x << endl;
}
```
1. Add global variable of `int x=10` and verify its scope.
1. Source code save in file `lab_10/ex1_2_correct.cc`, commit and push to your branch.

#### EX1.3 clipping
1. Write a function that perform so called clipping. Function should take one argument of the type `float`. As a result it should return value of argument but not bigger then 30 and not smaller than -25. It should truncate exceed value.
1. Test code on a examples from -30 to 35 in steps of 0.1.   
1. Source code save in file `lab_10/ex1_3_correct.cc`, commit and push to your branch.

#### EX1.4 pointer as an argument
1. In the example:
```cpp
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
```
change argument from `Complex` type to `Complex*` type.
1. Adjust remaining part of code. Test on a few examples.
1. Modified source code save in file `lab_10/ex1_4_correct.cc`, commit and push to your branch.

#### EX1.5 initializing table of structures
1. On the basis of:
```cpp
#include<iostream>
using namespace std;

void setToZero(int *tab, size_t size){
    for (size_t i = 0; i < size; ++i ){
        tab[i] = 0;
    }
}

int main(){
    int tab[10];
    setToZero(tab, 10);
}
```
 write a code that create (in main function) table of structures and initialize it in the function defined **below** `main()` function.
1. Size of the table should be provided from keyboard.
1. Test code with very long table (millions of structures)
1. Source code save in file `lab_10/ex1_5_correct.cc`, commit and push to your branch.

#### EX1.6 memory leak
In this example you should observe so called memory leak. **Before you execute code, commit and push your work because this code could crash operating system**. Commit and push before first execution of program and after any changes in your code. 

1. Modify example:
```cpp
#include<iostream>
using namespace std;

int *createAndSet(size_t size, int value){
    int *array = new int[size];
    for (size_t i = 0; i < size; ++i ) {
        array[i] = value;
    }
    return array;
}

int main(){
    int *tab;
    tab = createAndSet(10, 666);
    // do something 
    tab = createAndSet(10, 777);
    delete[] tab;
}
```. 
Call `createAndSetup(...)` function in an infinite loop.
1. In the loop print iteration number.
1. Source code save in file `lab_10/ex1_6_correct.cc`, commit and push to your branch.

Open two consoles, in first run `top` command. Among other it provide information about free memory in the system.

On second console execute your program and observe remaining free memory on the first console. Note, which iteration of loop will crash/hung up program or system. 

You can stop program (kill it) by pressing `ctrl-c` on console. You can kill it by command `kill -9 pid` where `pid` is process identification number of your program.

 
