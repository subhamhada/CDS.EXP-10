# EXPERIMENT-10

## Aim -
To study and implement Pointer Operations (Call by value and Call by reference)

## Apparatus -
Vs code

## Theory -







## codes-
### 1. Call By Value -
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

### 2. Call By Reference -
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
### 1. Call By Value -
### 2. Call By Reference -
