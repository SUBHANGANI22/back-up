#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
    // not recommended to use below lines with in line functuion
    static int c = 0; // this execute only once
    c++;              // next time the function is run,the value of c will ve retained
    return a * b + c;
}
int moneyreceived(int cmoney, float factor = 1.04)
{
    return cmoney * factor;
}
int main()
{
    int a, b;
    // cout<<"enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"the sum of a and b is "<<sum(a,b)<<endl;
    // cout<<"the sum of a and b is "<<sum(a,b)<<endl;
    // cout<<"the sum of a and b is "<<sum(a,b)<<endl;
    int money = 10000;
    cout << "if you have " << money << "rs in your acnt, you will receive " << moneyreceived(money) << " after one year" << endl;
    cout << "For VIP:if you have " << money << "rs in your acnt, you will receive " << moneyreceived(money, 1.1) << " after one year" << endl;
    return 0;
}