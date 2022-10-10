#include <iostream>
using namespace std;

class student
{
protected:
    int rolln;

public:
    void set_roll(int);
    void get_roll(void);
};
void student ::set_roll(int r)
{
    rolln = r;
}
void student ::get_roll()
{
    cout << "the roll number is" << rolln << endl;
}

class exam : public student
{
protected:
    float maths;
    float phy;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam::set_marks(float m1, float m2)
{
    maths = m1;
    phy = m2;
}
void exam::get_marks()
{
    cout << "The marks obtained in phy are " << phy << endl;
    cout << "The marks obtained in maths are " << maths << endl;
}

class result : public exam
{
    float per;

public:
    void display()
    {
        get_roll();
        get_marks();
        cout << "your percantage is " << (maths + phy) / 2 << endl;
    }
};
int main()
{
    /*
    If we are inheriting B form A and C from B:[ A-->B-->C]
    1.A is the base class for A and B is the base class for C
    2.A-->B-->C is called inheritance path
    */
    result abhi;
    abhi.set_roll(9);
    abhi.set_marks(94, 89);
    abhi.display();
    return 0;
}