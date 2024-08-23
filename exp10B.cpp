//subham
//entc B2
//23070123132
//experiment 10
#include<iostream> 
using namespace std; 
void swap(int *x, int *y) 
//swapping the values
{
    int *swap;
    swap=x;
    x=y;
    y=swap;
}

int main() 
{
    int a=4,b=7;
    swap(a,b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
}