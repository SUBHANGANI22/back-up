#include <iostream>
using namespace std;

int main()
{
    // Basic example
    int a = 4;
    int *ptr = &a;
    *ptr = 999;
    cout << "the value of a is " << *(ptr) << endl;

    // new keyword
    float *p = new float(40.60);
    cout << "the value of p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    // delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // delete operator
    return 0;
}