#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<2)
    return 1;
    else
    return fib(n-2)+ fib(n-1);
}
// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)
int fact(int n)
{
    if(n<=1)
    return 1;
    else
    return n*fact(n-1);
}
// Step by step calculation of factorial(5)
// factorial(5) = 5 * factorial(4); 
// factorial(5) = 5 * 4 * factorial(3); 
// factorial(5) = 5 * 4 * 3 * factorial(2);
// factorial(5) = 5 * 4 * 3 * 2 * factorial(1);
// factorial(5) = 5 * 4 * 3 * 2 * 1;
// factorial(5) = 24;
int main()
{
     // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!
    int n;
    cout<<"enter a number"<<endl;;
    cin>>n;
    // cout<<"the factorial of "<<n<<" is "<<fact(n);
    cout<<"the fibonacci sequence at position "<<n<<" is "<<fib(n);
    return 0;
}