
# Lab 04

## C++. Structures. Conditional execution.Scope of variable.


## Structures

#### EX1.1 Define and define structure
1. Define the following structure:
```ccp
struct Product{
	int weight;
	float price;
};
```
2. Declare two variables of the type `Product`.
3. Fill one of them.
4. Copy it to second variable.
5. Print it on  `stdout`.  
6. Save source code in `lab_04/ex5_1.cc`, commit and push 

#### EX1.2 `sizeof(Product)`
1. Print number of bytes used necessary for `Product`.
2. Calculating size of structure from its type and variable.
3. Print number of bytes used by `int` type.
4. Save code to `lab_04/ex5_2.cc` and push to your branch.

## Conditional execution

#### EX1.3simple **IF** statement
Using `lab_04/ex7.png` example, write a code that check if variable `x` belong to interval <-7,11). To do this:
1. Declare and initialize variable `x`
2. Write **if** statement with correct condition (with logical operator).
3. In the body of instruction **if** print something.
4. Verify on a few examples correctness of your code.
5. Save code to `lab_04/ex5_3.cc` and push to your branch.  

#### EX1.4 scope of variable
Correct code ex11.cc (remove line 18).
1. Add print output after each declaration or modification of `x` variable.
2. Add `else` to existing `if`
3. Declare another variable `int x` in `else` block.
4. Check how it works!
3. Save code to `lab_04/ex5_4.cc` and pus to your remote branch.

#### EX1.5 scope of variable
Correct code ex12.cc.
1. It have to compile.
2. Do not change behavior of code.
3. Save code to `lab_04/ex5_5.cc` and pus to your remote branch.


