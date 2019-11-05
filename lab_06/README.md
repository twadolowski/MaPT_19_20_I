
# Lab 06

## C++. Operators. Conditional execution continuation.Scope of variable. Loops
author: Jarosław Bułat, Artur Kos

### 1. Operators
#### 1.1 Casting operators

1. Compile code and run program:
```
#include < iostream >

  int main() {

    int a = 32540;
    short b = a;
    std::cout << "b= " << b << std::endl;

    float f = 1.9;
    int x = f; //non-explicit conversion

    int c = 1; //unsigned increase the int range
    unsigned int d = c;

    b = (short) a; //explicit conversion

    b = short(a);

    b = static_cast < short > (a);
  }
```
2. Check (display) if the result of an non-explicit conversion (line 6) is the same as in the case of explicit conversions (in lines 15:19).  
3. Check for how big value the result of the conversion from type `int` to `short` will still be correct.  
4. Check the result of the implicit conversion of the variable `f` of the type `float` to `int` (line 10).  
5. Check the result of the operation in the opposite direction (assign the `int` variable to the variable `float`).  
6. Check the result of conversion of the variable `c` to the type` unsigned int` (line 13).


#### 1.2 Bitwise operators

1. Compile code and run program:
```
#include <iostream>

int main() {
    
    int a = 128;
    std:: cout << "a= " << a <<std::endl; 
    a = a >> 1;
    std:: cout << "a= " << a <<std::endl; 
}
```
2. Check (display) how the value of `a` changes after shifting bits  right` >> `by 1, 2, 3, 4 positions (bits). 
Is there some pattern?  
3. Using the `&`(bitwise AND) or `|`(bitwise OR) operator, set the second bit of the variable `a `into 1 (change the value of `a ` to 66).  
4. Using the `&` or `|` operator, set the 7th bit of the variable `a` into 0 (change the value of `a ` to 2).


## 2. Blocs and range of variables
Compile code and run a program:
```
#include <iostream>

int main() {
    int b = 1;

    b = 2;
    //int b = 2;
    std::cout << "b=" << b << std::endl;
    {
        b = 3;
        //int b = 4;
        std::cout << "b=" << b << std::endl;
    }

    std::cout << "b=" << b << std::endl;
}
```
1. Investigate how value assigned to variable `b` is changing. 
2. Uncomment 7th line (empty lines including) and try to compile the program.  Why the error occurs?
3. Uncomment 11th line of code in the original version of program. What has changed?

## 3. Conditional statements continuation
#### 3.1  **`IF`**  statement
Compile code and run a program:
```
#include <iostream>

int main() {
    int b = 3;
    std::cout << "b=" << b << std::endl;

    if (b<4) {
        b = 5;
        std::cout << "b=" << b << std::endl;
    }
    
    std::cout << "b=" << b << std::endl;
}
```
1. Investigate how value assigned to variable `b` is changing. 
3. Change the `if` condition (using proper logical operators and combined conditions), so now the program will be checking if the value of the `b` variable lies within the range ` <-7.11) `.
5. Test the program using several different values of the variable`b`.
 
#### 3.2 
1. Using only on the `else` and / or` else if` statements (without using a complex logical condition), modify the original code from exercise 4.1, so now the program will be checking if the value of the `b` variable lies within the range ` <-7.11) `.
3. Test the program using several different values of the variable`b`.

#### 3.3  
1. Find and correct the error in the code:
```
#include <iostream>

int main() {
    int x = 2;

    if (x > 1) {
        int result = x * 2;
    }

    std::cout << result;
}
```
2. Determine how the non-initialization of the `result` variable affects the operation of the program.

#### 3.4   **`switch`** statement
1. Observe the operation of the example program:
```
#include <iostream>

int main() {
    char c = '0';

    switch (c) {
    case '0':
        std::cout << "0\n";
        std::cout << "zero\n";
        break;
    case 50:
        std::cout << "two\n";
        break;
    case 'd':
        break;
    case 'e':
    case 'f': {
        std::cout <<"e-f\n";
        break;
    }
    default:
        std::cout << "other\n";
    }
}
```
2. What interpretation has the definition in line 4?
3. Set the variable value to check the operation of all defined conditions.
4. What does the condition in the line 11 mean?
5. What is the difference between conditions in lines 14, 16 and 17?

### 4. Loops

#### 4.1 `do` loop
1. Observe the operation of the example program:
```
#include <iostream>

int main() {

    int counter = 10;

    do {
        std::cout << counter << ", ";
    } while (counter--);

    std::cout << "THE END" << std::endl;
}
```
4. What happens if we remove the operator "--" on line 9?  
3. How do you make sure that the last number is not displayed?

#### 4.2 `while` loop 
1. Observe the operation of the example program:
```
#include <iostream>

int main() {

    int counter = 10;
    while (counter--) {
        std::cout << counter << ", ";
    }
    std::cout << "THE END" << std::endl;
}
```
5. What happens if we remove the operator "-" in line 6?  
3. How do you make sure that the last number is not displayed?  
4. How to make the result the same as in the previous program?

#### 4.3 `for` loop 
1. Observe the operation of the example program:
```
#include <iostream>

int main() {

    for (int counter = 1; counter <= 100; counter++) {
        std::cout << "counter: " << counter << std::endl;
    }
    // std::cout << counter;
}
```
6. How can I print all odd numbers in a defined range?  
3. Is it possible to compile a program with a commented line 8 and why?  
4. How to write the value of the counter after the end of the loop operation?  
5. How can the order of the countdown be reversed?



