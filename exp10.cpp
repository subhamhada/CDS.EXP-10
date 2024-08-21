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