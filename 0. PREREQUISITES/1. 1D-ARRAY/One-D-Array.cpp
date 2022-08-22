#include<iostream>
using namespace std;
int main()
{
    int a[5] = {0,1,2,3,4};

    cout<<&a<<endl;   //6422188 address of Whole Array
    cout<<&a+1<<endl; //6422208 (Next address after this whole array)

    cout<<endl<<endl;

    cout<<a<<endl;    // 6422188 address of 0
    cout<<a+1<<endl;  // 6422192 address of 1
    cout<<a+2<<endl;  // 6422196 address of 2
    cout<<a+3<<endl;  // 6422200 address of 3
    cout<<a+4<<endl;  // 6422204 address of 4


    cout<<endl<<endl;

    cout<<*a<<endl;     // Value  0
    cout<<*(a+1)<<endl; // Value  1
    cout<<*(a+2)<<endl; // Value  2
    cout<<*(a+3)<<endl; // Value  3
    cout<<*(a+4)<<endl; // Value  4

    cout<<endl<<endl<<endl;


}