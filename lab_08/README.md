# Lab 08

## C++. Arrays continuation. Arrays of structures. Pointers. 
author: Jarosław Bułat, Artur Kos 

### 1. Arrays continuation.
#### Ex 1.1
1. Write a program in with:
- declare an array of *n* elements 
- fill declared array with numbers from range <0:1:n>
- display in two columns indexes of all elements and values stored in corresponding elements 
2. Save code to `lab_08/ex1_1.cc` and push it to your branch.

#### Ex 1.2
1. Write a program which calculates the values of the function *y = x^2+1*  for numbers from the range  `<-3.3>  ` with the step `0.1 ` .
Use the loop and appropriate type of variables.
2. Store values representing function’s domain and computed values in two arrays.
3. Display elements representing function’s arguments and corresponding values in two parallel columns.
4. Use instruction:
 `size = sizeof(tab)/sizeof(tab[0]); `
to automatically change the size of the tables with stored function’s domain and computed values.
5. Change the step to  `0.01 ` and check if the program works correctly.
6. Save code to `lab_08/ex1_2.cc` and push it to your branch.

#### EX1.3 Table of structures
1. Define structure consisting of at least two elements.
2. Declare 10-element table of the structure defined above.
3. Using loop, initialize all structures in the table (each element of structure individually).
2. 2. Save code to `lab_08/ex1_3.cc` and push it to your branch.

## 2. Pointers
#### EX2.1 pointers to chosen element of tab

1. Compile and run the program:
```cpp
#include <iostream>
using namespace std;

int main() {
	char tab[] = "Hello World!!!";

	cout << tab[0] << endl;			// H
	cout << tab[1] << endl;			// e
	cout << tab << endl;			// Hello World!!!
	cout << sizeof(tab) << endl;	// 15

	char last = tab[sizeof(tab)-1];
	cout << int(last) << endl;		// 0
}
```
2. Declare pointer of the type `char *`.
3. Initialize it in such a way it "point" to the letter "W" in the text.
4. Using this pointer, print text on console (text should start form letter "W").
5. Save code and push it to your branch.

#### EX2.2 pointer to structure
1. Use structure declared in EX1.3 in this lab.
2. Declare two structures of this type.
3. Declare pointer of the above mentioned structure.
4. Initialize both declared structures:
    * first by means of operator `.`
    * second by using pointer and operator `->`
5. Make use of example
```cpp
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
```
6. Save code and push it to your branch.

#### EX2.3 
1. Use example EX2.2 from this lab.
2. Extend it in such a way it will print all elements from all structures (after initialization).
3. Use pointers to access structures located in the table: 
```cpp
    X tab[10];
    X *pTab;
    pTab = tab+4; // pTab = &tab[4];
    
    // pTab points to 5th element of table tab
    // use it to print 5th element of the table  
```
4. Save code and push it to your branch.

#### EX2.4 size of pointer
1. Declare pointer to `char`, `int` and your structure.
2. Calculate and print number of bits used by those types.
3. Save code and push it to your branch.

## 3. Pointers arithmetic
#### EX3.1 addresses of array cells
1. Compile and run the program:
```cpp
#include <iostream>
using namespace std;

int main(){
    int tab[] = {4, 3, 2, 1, 0};
    int *p = tab;

    cout << *p << ": " << p << endl;        // 4: 0x7fff138587d0
    p++;
    cout << *p << ": " << p << endl;        // 3: 0x7fff138587d4: 3
    cout << *(p+1) << ": " << p+1 << endl;  // 2: 0x7fff138587d8: 2
    cout << *p+1 << ": " << p+1 << endl;    // 4: 0x7fff138587d8: 4
}
```
2. Print addresses of all cells from this example.
3. Move declaration from local to global scope, compare results.
4. Save code and push it to your branch.

#### EX3.2 print text from table using pointers
1. Create a program that:
    * declare table of `char`, initialize with some text
    * find length of this text (make an assumption, text ends with `'\0'` symbol)
    * print text from the beginning to the end using only pointers.
2. Save code and push it to your branch.

#### EX3.3 print numbers from table using pointers
1. Compile and run the program:

```cpp
#include <iostream>
using namespace std;

int main(){
    char tab[] = "Ala ma kota";
    char *p = tab;

    while ( *p ) {
        cout << *p++;   // *(p++)
    }
    cout << endl;

}

// result: Ala ma kota
// while( p ) {}  what kind of mistake?
```
   - change type of table to `float`
   - fill it with appropriate data
    
2. Correct program in such a way it will print all numbers from the table.
3. Save code and push it to your branch.

#### EX3.4 reverse order of table
Using program:
```cpp
#include <iostream>
using namespace std;

int main(){
    int tab[11];
    int *start = tab;
    int *end = &tab[10];

    while (end > start) {
        int tmp = *end;
        *end = *start;
        *start = tmp;
        end--;
        start++;
    }
}
```
1. add table initialization, it should contain at least 10 numbers, they have to be unique, use loop to do that
2. print table before reverse order
3. Save code and push it to your branch.

#### EX3.5 out of scope
1. Correct and run the program:
```cpp
#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int *p;

    if (x > 5) {
        p = new int;    
        *p = x*10;
    }

    cout << *p << endl;

    delete p;
}
```
2. Make sure, in the line `cout << *x << endl;`, variable pointed by  `x ` still exist. 
3. Save code and push it to your branch.

