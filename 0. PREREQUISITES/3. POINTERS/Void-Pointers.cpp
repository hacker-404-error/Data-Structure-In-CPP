

#include<iostream>
using namespace std;
int main()
{
    int n = 10;
    void *a = &n;
    cout<<*(int*)a;
    return 0;
}