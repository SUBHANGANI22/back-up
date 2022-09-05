#include<iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;
    public:
    Simple(int a,int b=9,int c=8)
    {
        data1=a;
        data2=b;
        data3=c;
    }
    void printdata();
};
void Simple ::printdata()
{
    cout<<"The value of data is "<<data1<<" and "<<data2<<","<<data3<<endl;
}
int main()
{
    Simple s(34);
    s.printdata();
    return 0;
}