#include <iostream>
using namespace std;

class BankDeposit
{
    int pri, yr;
    float intr, ret;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int r);   // r can be a value like 14
    void show();
};
BankDeposit::BankDeposit(int p, int y, float r)
{
    pri = p;
    yr = y;
    intr = r;
    ret = pri;
    for (int i = 0; i < y; i++)
    {
        ret = ret * (1 + intr);
    }
}
BankDeposit::BankDeposit(int p, int y, int R)
{
    pri = p;
    yr = y;
    intr = float(R) / 100;
    ret = pri;
    for (int i = 0; i < y; i++)
    {
        ret = ret * (1 + intr);
    }
}
void BankDeposit::show()
{
    cout << endl
         << "Principal amount was " << pri
         << " return value after " << yr
         << " year is " << ret << endl;
}
int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p y nd r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p y nd R" << endl;
    cin >> p >> y >> R;
    bd1 = BankDeposit(p, y, R);
    bd1.show();
    return 0;
}