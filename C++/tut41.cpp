#include <iostream>
using namespace std;
/*
    case1:
    class B: public A
    {
        order of execution first A() then B()
    };
    case2:
    class A :public B,public c
    {
        order of execution --> first B() then C() and A()
    };
    case3:
    class A: public B,virtual public C
    {
        //order of execution --> first C() then B() and A() since virtual is special case so preference is given first
    };
*/
class Base
{
    int data;

public:
    Base(int i)
    {
        data = i;
        cout << "Base class constructor called" << endl;
    }
    void printdata1(void)
    {
        cout << "The value of data is " << data << endl;
    }
};
class Base2
{
    int data2;
    public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printdata2(void)
    {
        cout << "The value of data is " << data2 << endl;
    }
};

class derived : public Base, public Base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : Base(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class construcor called" << endl;
    }
    void printdata3(void)
    {
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
}; 
int main()
{
    derived abcd(1,2,3,4);
    abcd.printdata1();
    abcd.printdata2();
    abcd.printdata3();
    return 0;
}