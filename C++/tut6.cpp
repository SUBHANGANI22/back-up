#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // char a='c';
    // cout<<"the value of a was"<<a<<endl;
    // a='d'; 
    // cout<<"the value of a is"<<a<<endl;
    //constants in C++
    // const char a ='c';
    // cout<<"the value of a was"<<a<<endl;
    // // a='d'; you will get a error coz a is const
    // cout<<"the value of a is"<<a<<endl;

    // manipulators in C++
    // int a=3,b=78,c=1333;
    // cout<<"the value of a without setw is "<<a<<endl;
    // cout<<"the value of b without setw is "<<b<<endl;
    // cout<<"the value of c without setw is "<<c<<endl;

    // cout<<"the value of a is "<<setw(4)<<a<<endl;
    // cout<<"the value of b is "<<setw(4)<<b<<endl;
    // cout<<"the value of c is "<<setw(4)<<c<<endl;

    // operator precedence
    int a=3,b=4;
    // int c=(a*5)+b;
    int c=((((a*5)+b)-45)+67);
    return 0;

}