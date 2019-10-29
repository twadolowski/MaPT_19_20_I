# Lab 03

## Introduction to C/C++

### 1. Compiling program using `g++`
1. run console (terminal)
2. open a text editor (e.g. `gedit`),
3. copy and paste into a text editor code of a *Hello world* program and save it with a `.cc`, e.g. `helloworld.cc`,
```
// program Hello world
#include <iostream>

int main() {
    std::cout << "Hello world" << std::endl;
}
```
4. go to the directory (using terminal and proper Unix comands) with your `.cc` source file (program) 
5. compile your code usig command:

`g++ -o helloworld helloworld.cc`

6. in the directery ( in which the `helloworld.cc` is placed) should appear an executable file `helloworld.out `, 

Run the program using command (in console):

 `./helloworld`
 
7. to see compiler's warnings add option `- Wall` to the comipile command e.g.

`g++ -o -Wall helloworld helloworld.cc` 

 ### 2. First program. Arithmetic operations. Priority of operations.

Copy, compile and run the following code (place the code in the new `.cc` file):
```
#include <iostream>

int main() {
    int a = 1;
    int b = 2;
		
    int c = a+b;
    b = 4;
		
    std::cout << “b =” << b << std::endl;
    std::cout << “c =” << c << std::endl;
}
```
1. Change 7th and 8th line of the code (including empty lines), compile and run the program once again.
Did the `c` and `b` values changed? Can we change the value of once initialized variable?
2. Change one of the `a` variables into `A` in order to find out if the capital letteras mattrers to `g++` compiler.
3. Next, check if program will be compiled/type of errors if the name of a one variable is e.g. `1a`.
Initialize `b` with 0, and add the line `c=5/b`. Compile and execute. What happend? 

### 3. Second program. Priority of operators. Variable initialization.
Copy, compile and run the following code (place the code in the new `.cc` file):
```
#include <iostream>

int main() {
    int a = 5;
    int b = 5;
    int c = 5;
    int d;
      
    //d= a*(b + c);     
    d= a*b + c;
    
        
    std::cout << “d =” << d << std::endl;
}
```
1. Uncomment the 9th code line and comment the 10th (including empty lines). What happend? 
2. Modify program in such a way, that you can see the value of the uninitialize variable.
Is such situation potentialy dangerous?

### 4. pre/post incrementation/decrementation

Copy, compile and run the following code (place the code in the new `.cc` file):
```
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
```
1. Uncomment the 8th line of the code line and comment the 9th (including empty lines). What happend? 
2. Uncomment the 11th line of the code (including empty lines). What happend? 
3. Replace the preincrementation of the `b` the 10th line of the code with postincrementation. What happend? 
4. Add the line `c=++a++;` and modify progam to see the values of the `a` and `c` before and after the operation. What happend? 
5. Now modify the line with `c=++(++a);` and print values of the `a` and `c` before and after the operation. What happend? 

#### 5. Comparison
1. Compile `lab_03/ex6.png` ;-) (improvise if necessary)
2. Verify logical value of {-1, 0, 20}. You can compare (==) this value to `true` or `false` to do that. 

#### 6. Logical operators
1. Using `lab_03/ex7.cc` test variable `x` if it lie in the interval: [-30, 5).
