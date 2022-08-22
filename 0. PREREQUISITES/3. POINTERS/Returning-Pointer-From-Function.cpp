#include<iostream>
#include<stdlib.h>
using namespace std;

// Wrong Way

// int * fun(int n)
// {
//     int x = (n*n);
//     return &x;
// }
// int main()
// {
//     system("cls");
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int *a = fun(n);
//     cout<<"Square of Number is : "<<*a;
//     return 0;
// }


// Correct Way 
int * fun(int n)
{
    static int x = (n*n);
    return &x;
}
int main()
{
    system("cls");
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int *a = fun(n);
    cout<<"Square of Number is : "<<*a;
    return 0;
}