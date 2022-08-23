#include<iostream>
using namespace std;
// int sum(int a,int b)
// {
//     int c=a+b;
//     return c;
// }

//this will not swap a and b
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}

// call by reference using pointers 
void swappointer(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

// call by reference using reference variables   
void swappointer(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}


int & swapreference(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    return a;
}
int main()
{
    int x=4,y=5;
    // cout<<"The sum of 4 and 5 is"<<sum(x,y);
    cout<<"The value of x is "<<x<<"the value of y is "<<y<<endl;
    // swap(x,y);//this will not swap a and b

    // swappointer(&x,&y);//this will swap and b using pointer reference;

    // swappointer(x,y);//this will swap and b using reference variable;

    swapreference(x,y)=76;
    cout<<"The value of x is "<<x<<"the value of y is "<<y<<endl;
    return 0;
} 