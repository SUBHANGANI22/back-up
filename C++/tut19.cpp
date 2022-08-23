#include<iostream>
#include<string>
using namespace std;

    class binary
    {
        private:
        string s;//by default everything is private in class
        void chkbin(void);

        public:
        void read(void);
        void ones(void);
        void display(void);
    };
    void binary::read(void)
    {
        cout<<"Enter a binary number"<<endl;
        cin>>s;
        cout<<endl;
    }
    void binary::chkbin(void){
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"Incorrect binary format"<<endl;
                exit(0);
            }
        }
    }

    void binary :: ones(void)
    {
        chkbin();
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='0'){
                s.at(i)='1';
            }
            else if(s.at(i)=='1')
            {
                s.at(i)='0';
            }
        }

    }
    void binary :: display(void)
    {
        for(int i=0;i<s.length();i++)
        {
            cout<<s.at(i);
        }
        cout<<endl;
    }
int main()
{
    // you can declare objects along with the class declarion like this:
    // class employee{
    //     //class defination
    // }abhi,nikki,harry;
    // harry.salary makes no sense if salary is private 

    // nesting of member functions 
    binary b;
    b.read();
    // b.chkbin();
    b.display();
    b.ones();
    b.display();
    return 0;
}