#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    //Creating a Constructor
    // constructor is a special member function with same name as the class.
    // It is used to initialize the objects of the class 
    // It is automatically invoked whenever an onject is created
    Complex(void); //Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

};

Complex::Complex(void) //This is a default constructor
{
    a=10;
    b=0;
}
int main()
{
    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}