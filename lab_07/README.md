# Lab 07

## C++. Arrays. Loops continuation. 
author: Jarosław Bułat, Artur Kos 

### 1. Loops continuation.
#### Ex 1.1

1. Write a program with an infinite `for` loop which displays only odd numbers, then breaks after `123` iteration.
3.  Write a program which solves this task using the `while` loop.
4. Write a program which solves this task using the`do` loop.

#### Ex 1.2
1. Compile and run the program. Observe the results.
```
#include <iostream>

int main() {
    int width = 20;
    int height = 10;

    for (int x = 1; x <= width; x = x + 2 ) {
        for (int y = height; y >= 1; y = y - 3 ) {
            std::cout << x << " " << y << std::endl;
        }
    }
}
```
2. How to break the loop so that in the second column only numbers 10 and 7 will be displayed (modify stop condition, do not use  `break` instruction)?
3. How to break the loop so that in the second column the number 7 will not be displayed?
4. How to break both loops after displaying the pair `(1,1)`?

#### Ex 1.3
1. Compile and run the program. Observe the results.

```
#include <iostream>

int main(){
	int width = 1920;

	for (int x = 0; x < width; ++x ) {
		if (x == 2){
			continue;
		} else if (x == 5){
			break;
		}
		std::cout << x << std::endl;
	}
}

```
2. Modify the program so that: 
- it will display numbers from 0 to 50, omitting the range <15.30>,
- the ending condition of the loop remained unchanged,
- the loop will be interrupted after 50 iterations.

### 2. Arrays
#### Ex 2.1
1. Compile and run the program. Observe the results.
```
#include <iostream>

int main() {
    int tab_size = 7;

    int tab[tab_size] = {0,1,2,3,4,5};
    std::cout << " tab= " << tab << std::endl;
    std::cout << " tab[2]= " << tab[2] << std::endl;

    char tab1[tab_size] = "AGH EiT";
    char tab2[tab_size] = {'A','G','H'};
    std::cout << " tab1= " << tab1 << std::endl;
    std::cout << " tab2= " << tab2 << std::endl;
    std::cout << " tab1[2]= " << tab1[2] << std::endl;
}
```
2. How to interpret the result displayed by the instruction in line 8?
3. Using the `sizeof ()` operator, check the size ( in reserved memory) of created arrays (eg `sizeof (tab)`).
4. What determines the size (in reserved memory) of the particular array?

#### Ex 2.2
1. Compile and run the program. Observe the results.
```
#include <iostream>

int main() {
    int tab_size = 7;
    int tab[tab_size] = {0,1,2,3,4,5,6};
    char tab2[tab_size] = "AGH EiT";

    for (int i = 0; i < tab_size; i = i + 1 ) {
        std::cout << " i = " << i << " tab[i]= " << tab[i] << " tab2[i]= " << tab2[i] << std::endl;
    }
}
```
4. Try to assign some new values to the array elements of indexes higher than `tab_size` (e.g., `tab [10] = 34`);
5. Modify the program so that the o elements with indexes higher than `tab_size` (added o in point 1) will be displayed. 
6. Can such overindexation cause troubles?


#### Ex 2.3

1. Compile and run the program. Observe the results.
```
#include <iostream>

int main() {
    int tab_size = 5;
    int tab[tab_size][tab_size];

    for (int x = 1; x < tab_size; x ++) {
        for (int y = 1; y < tab_size; y ++) {
            tab[x][y]=1;
        }
    }

    std::cout << " tab[x][y] = " << std::endl;

    for (int x = 1; x < tab_size; x ++) {
        std::cout << "\n";
        for (int y = 1; y < tab_size; y ++) {
            std::cout << " " << tab[x][y] ;
        }
    }

    std::cout << "\n\n";
    std::cout << " &tab = " << tab << std::endl;
    std::cout << " &tab[1] = " << tab[1] << std::endl;
}
```
2. Using the `sizeof ()` operator, check the size ( in B/reserved memory) of created arrays (eg `sizeof (tab)`).
3. What determines the size (in reserved memory) of the particular array?
4. How to interpret the results displayed by the instructions in lines 23-24?

#### Ex 2.4
1. Write a program which calculates the values of the function *y = x^2+1*  for numbers from the range  `<-3.3>  ` with the step `0.1 ` .
Use the loop and appropriate type of variables.
2. Store values representing function’s domain and computed values in two arrays.
3. Display elements representing function’s arguments and corresponding values in two parallel columns.
4. Use instruction:
 `size = sizeof(tab)/sizeof(tab[0]); `
to automatically change the size of the tables with stored function’s domain and computed values.
5. Change the step to  `0.01 ` and check if the program works correctly.
