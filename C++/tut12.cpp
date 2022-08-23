#include<iostream>
using namespace std;
// typedef struct employee
// {
//     int eid; //4
//     char favchar; //1
//     float salary; //4
// }ep;


union money
{
    int rice; //4
    char car; //1
    float pounds; //4  
};

int main()
{
    enum meal{breakfast,lunch,dinner};
    meal m1 =lunch;
    cout<<(m1==2); 
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;



    // union money m1;
    // m1.rice=45;
    // m1.pounds=12;
    // cout<<m1.pounds<<endl;


    
    // ep Harry;
    // struct employee suar; 
    // Harry.eid=1;
    // Harry.favchar='d';
    // Harry.salary=1200000;
    // cout<<Harry.salary<<endl; 
    // cout<<Harry.eid<<endl; 
    return 0;
}