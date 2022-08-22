#include<iostream>
using namespace std;
int main()
{
    
    int *a;
    a = (int*)malloc(sizeof(int));
    cout<<a<<endl;
    *a = 10;
    cout<<*a<<endl;

    int *b; 
    b = (int*)malloc(3*sizeof(int));
    cout<<b<<endl;
    // b = {1,2,3} This is illegeal
    b[0] = 1;
    b[1] = 2;
    b[2] = 3;
    cout<<*b<<endl;
    cout<<*(b+1)<<endl;
    cout<<*(b+2)<<endl;

    // dangling pointer
    free(a);
    free(b);
    cout<<a<<endl<<b;

    // Not a Dangling Pointer
    a = NULL;
    b = NULL;
    cout<<a<<endl<<b;
    return 0;
}