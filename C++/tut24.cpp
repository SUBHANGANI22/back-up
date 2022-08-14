#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    void setNumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void printNumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
    //below line means that non member- subcomplex  function is allowed to do anything with my private members
    friend Complex sumComplex(Complex o1,Complex o2);
};
int main()
{
    
    return 0;
}