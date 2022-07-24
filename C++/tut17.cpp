#include<iostream>
using namespace std;
int sum(int a,int b)
{
    cout<<"using functions with 3 arguments"<<endl;
    return a+b;
}
int sum(int a,int b, int c)
{
    cout<<"using functions with 3 arguments"<<endl;
    return a+b+c; 
}
int volume(double r,int h)
{
    return(3.14*r*r*h);
}
int volume(int a )
{
    return (a*a*a);
}
int volume(int l,int b,int h)
{
    return (l*b*h);
}
int main()
{
    cout<<"the sum of 3 and 6 is"<<sum(3,6)<<endl;
    cout<<"the sum of 3,7 and 6 is"<<sum(3,6,7)<<endl;
    cout<<"the volume cuboid of 3,7 and 6 is"<<volume(3,6,7)<<endl;
    cout<<"the volume cylinder of  radius 7 and 6 is"<<volume(6,7)<<endl;
    cout<<"the volume cube of  radius 6 is"<<volume(6)<<endl;

    return 0;
}