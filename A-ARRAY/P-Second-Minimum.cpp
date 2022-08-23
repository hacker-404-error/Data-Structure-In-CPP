#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter no of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int min = a[0];
    for(int i = 0;i<n;i++)
    {
        if(min>a[i])
        {
            min  = a[i];
        }
    }
    int min2;
    if(a[0] != min)
    {
        min2 = a[0];
    }
    else
    {
        min2 = a[1];
    }
    for(int i = 0;i<n;i++)
    {
        if(a[i] == min)
        {
            continue;
        }
        if(min2>a[i])
        {
            min2 = a[i]; 
        }
    }
    cout<<"Smallest : "<<min<<endl;
    cout<<"2nd Smallest : "<<min2;
    return 0;
}