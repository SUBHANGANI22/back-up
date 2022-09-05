#include <iostream>
using namespace std;
// base class
class employee
{
public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    employee() {}
};
/**
Derived class
class {{derived-class-name}} :{{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc.....
}
note:
1 default visibility mode is private
2 public visibility mode: public memberes of the base class becomes public member of the derived class
3 private visibility mode: public members of base class becomes private members of the derived class
4 private members are never inherited
Creating a programmer class derived form employee base class**/

class programmer : public employee
{
public:
    int languagecode;
    programmer(int inpID)
    {
        id = inpID;
        languagecode = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillf(1);
    cout << skillf.languagecode << endl;
    // cout << skillf.id << endl;
    skillf.getdata();
    return 0;
}