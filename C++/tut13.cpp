#include<iostream>
using namespace std;

//function prototype
//type function-name (arguments);
// int sum(int a,int b);-- acceptable 
// int sum(int a, b);-- not acceptable
int sum(int ,int);//--  acceptable
void p();
int main()
{
  int num1,num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameter 
    cout<<"the sum is "<<sum(num1,num2); 
    p();
  return 0;
}
int sum(int a,int b)
{
  //formal parameter a and b will be taking values from actual parawmeters num1 and num2
  int c=a+b;
  return c;
}

void p()
{
  cout<<"Hello Good morning";
}