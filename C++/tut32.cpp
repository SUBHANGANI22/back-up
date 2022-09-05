#include <iostream>
using namespace std;
// Desstrutor never takes an argument nor does it returns a value
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object no " << count << endl;
    }
    ~num()
    {
        cout << "this is the time when my destructor is called for object no " << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside the main function" << endl;
    cout << "Creating first object" << endl;
    num n1;
    {
        cout << "Entering this blog" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exitng this blog" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}