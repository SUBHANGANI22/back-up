#include <iostream>
using namespace std;

// syntax for inheriting in multiple inheritance
// class Derive : visibility-mode base1, visibility-mode base2
// {
//     class body of class Derive
// };
class base1
{
protected:
    int b1int;

public:
    void set_b1int(int a)
    {
        b1int = a;
    }
};
class base2
{
protected:
    int b2int;

public:
    void set_b2int(int a)
    {
        b2int = a;
    }
};

class Derived : public base1, public base2
{
public:
    void show()
    {
        cout << "the value of base1 is" << b1int << endl;
        cout << "the value of base2 is" << b2int << endl;
        cout << "the sum of base1 and base2 is" << b1int + b2int << endl;
    }
};
/*
the inherited derived class will look something like this:
Data members:
    base1int -->protected
    base2int -->protected
Member functions:
    set_b1int() -->public
    set_b2int() -->public
    set_show() -->public
*/
int main()
{
    Derived abhi;
    abhi.set_b1int(25);
    abhi.set_b2int(5);
    abhi.show();
    return 0;
}