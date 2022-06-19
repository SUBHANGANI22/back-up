//there are two types of headerfiles

//system headerfiles : it comes with compilers
#include<iostream>

//user derfined headerfiles : it is written by programmer
// #include<this.h>
using namespace std;
int main()
{
   int a=5,b=4;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    //Arithmetic operators
    cout<<"The value of a+b is"<<a+b<<endl;
    cout<<"The value of a-b is"<<a-b<<endl;
    cout<<"The value of a*b is"<<a*b<<endl;
    cout<<"The value of a/b is"<<a/b<<endl;
    cout<<"The value of a%b is"<<a%b<<endl;
    cout<<"The value of a++ is"<<a++<<endl;
    cout<<"The value of a-- is"<<a--<<endl;
    cout<<"The value of ++a is"<<++a<<endl;
    cout<<"The value of --a is"<<--a<<endl;

    //Assignment operator
    //int a=b;

    //comparision operator
    cout<<"Following are the types of comparision operators in C++"<<endl;
    cout<<"The value of a==b is"<<(a==b)<<endl;
    cout<<"The value of a!=b is"<<(a!=b)<<endl;
    cout<<"The value of a>b is"<<(a>=b)<<endl;
    cout<<"The value of a<b is"<<(a<=b)<<endl;
    cout<<"The value of a>b is"<<(a>b)<<endl;

    //logical operator
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a>b)) is:"<<((a==b) && (a>b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a>b)) is:"<<((a==b) || (a>b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl;
    return 0;
} 