#include<iostream>
using namespace std;
int main()
{
    // Wild Pointer
    int *a;
    *a = 10;
    cout<<*a<<endl; 

    // Not a Wild Pointer
    int n = 10;
    a = &n;
    cout<<*a<<endl;
    return 0;
}