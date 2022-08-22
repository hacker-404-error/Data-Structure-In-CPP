#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");

    // pointer is not pointing to any array , so any arithmetic operation will giove error
    // int i = 10;
    // int *a = &i;
    // cout<<*(a+3);

    // arithmetic operation between two pointers which are pointing to two different array leads to undifined error
    // int a[10]={1,2,3,4,5};
    // int b[10]={6,7,8,9,10};
    // int *x = a;
    // int *y = b;
    // cout<<(*x-*y);
    // cout<<*(x-y);
    return 0;
}