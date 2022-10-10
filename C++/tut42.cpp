#include <iostream>
using namespace std;
/*
    SYNTAX FOR INITIALIZATION LIST IN CONSTRUCTOR
    Constructor (argument-list): initialization section
    {
        assignment+other code;
    }

    class Test
    {
        int a;
        int b;
        public:
            Test(int a,int b):a(i),b(j){constructor-body}
    };
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)
    Test(int i, int j) :  b(j),a(i+b) //--> RED  FLAG this will create a problem because a is initialized first
    {
        cout << "constructor-body" << endl;
        cout << "The value of a is " <<a<< endl;
        cout << "The value of b is " <<b<< endl;
    }
};

int main()
{
    Test ab(5,6);
    return 0;
}