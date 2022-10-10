#include<iostream>
using namespace std;
class base1
{
    public:
    void greet()
    {
        cout<<"How are you?"<<endl;
    }
};
class base2
{
    public:
    void greet()
    {
        cout<<"Kasie ho?"<<endl;
    }
};
class derived : public base1,public base2
{
    int a;
    public:
    void greet()
    {
        base1::greet();
    }
};

class B
{
    public:
    void say()
    {
        cout<<"Hello world"<<endl;
    }
};
class D : public B
{
    public:
    //D's new say() method will override base class's say() method
    void say()
    {
        cout<<"Hello my firneds"<<endl;
    }
};
int main()
{
    // Ambiguity1
    // base1 boj1;
    // base2 boj2;
    // boj1.greet();
    // boj2.greet(); 
    // derived d;
    // d.greet();
    // Ambiguity1

    B b;
    b.say();
    D d;
    d.say();
    return 0;
}