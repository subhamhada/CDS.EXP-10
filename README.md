# EXPERIMENT-10

## Aim -
To study and implement Pointer Operations (Call by value and Call by reference)

## Apparatus -
Vs code

## Theory -
Comparison
Feature  |	Call by Value	|  Call by Reference (Pointer)
Data Passed	| Copy of the argument's value	| Address (pointer) to the data
Function Modification	| Does not affect original data |	Directly modifies original data
Data Size Efficiency	Less efficient for large data	More efficient for large data
Safety	Safer, as original data remains unchanged	Riskier, as original data can be altered



| Feature           | Call By Value                                           | Call By Refernce                                       |
|-------------------|-------------------------------------------------|----------------------------------------------|
| *Definition*    | A collection of elements of the same type stored in contiguous memory locations. | Sequences of characters used to represent text. Designed for textual data. |
| *Data Passed*          |Size can be fixed or dynamic based on the language (e.g., static in C, dynamic in Python).         | Size is dynamic and adjusts with the length of the text. |
| *Mutability*    | Usually mutable; elements can be changed after the array is created.| Generally immutable; modifying a string creates a new one rather than altering the original. |
| *Access*        | Accessed via indices.                          | Characters accessed via indices; includes built-in methods for manipulation. |
| *Operations*    | Support various operations like sorting, searching, and element manipulation.  |Support operations like concatenation, substring extraction, and text formatting.|
| *Memory Allocation* |Typically allocated with a fixed size and contiguous memory.|Memory allocation can be variable and managed dynamically based on string length and encoding. |
| *Indexing* | Elements are accessed via numerical indices (e.g., arr[0]). | Characters are accessed via numerical indices (e.g., str[0]). |
| *Data Type* | Can hold multiple data types depending on the language (e.g., integers, floats, objects). |Specifically hold text data (characters).|
| *Use Cases* | Used for storing and processing collections of related data (e.g., lists of numbers, objects). |used for handling and manipulating textual data(e.g., user imput, file content|

## codes-
### 1. *Call By Value* -
```
//subham
//entc B2
//23070123132
//experiment 10
#include <iostream>
using namespace std;
void swap(int &x, int &y) 
// call by value
{
    int temp = x;
    x = y;
    y = temp;

    // Printing the values inside the swap function
    cout << "Inside swap function: " << endl;
    cout << "Value of x is " << x << endl;
    cout << "Value of y is " << y << endl;
}
int main() 
{
    int a = 5, b = 7;
    swap(a, b);
    return 0;
}
```

### 2. *Call By Reference* -
```
//subham
//entc B2
//23070123132
//experiment 10
#include <iostream>
using namespace std;
void swap(int &x, int &y) 
//call by reference
{
    int num = x;
    x = y;
    y = num;
}
int main() 
{
    int a = 5, b = 7;
    swap(a, b);  // Pass by reference
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
    return 0;
}
```

## Output -
### 1. *Call By Value* -
![Screenshot 2024-08-21 101953](https://github.com/user-attachments/assets/7b2cb836-425e-4796-a045-0e8fb0002a7b)

### 2. *Call By Reference* -
![Screenshot 2024-08-21 102010](https://github.com/user-attachments/assets/a190f2b9-f2e6-4845-95b1-98a01bd0dd5a)

## Conclusion -
