#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of the employee is " << id << " and this is the employee number " << count << endl;
    }

    static void getcount(void)
    {
        // cout<<id;//throws an error
        cout << "the value of count is " << count << endl;
    }
};
// count is the static data member of class employee
int employee::count = 100;
int main()
{
    employee harry, rohan, gdh;
    // harry.id=1;
    // harry.count=1; //connot do this as id and count are private

    harry.setdata();
    harry.getdata();
    employee::getcount();

    rohan.setdata();
    rohan.getdata();
    employee::getcount();

    gdh.setdata();
    gdh.getdata();
    employee::getcount();
    return 0;
}