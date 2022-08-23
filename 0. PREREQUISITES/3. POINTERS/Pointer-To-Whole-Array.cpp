#include<iostream>
using namespace std;
int main()
{
    // int p[]={1,2,3,4,5};
    // int (*a)[5] = &p; // a pointer "a" pointing to whole array

    // for(int i = 0;i<5;i++)
    // {
    //     cin>>(*a)[i];
    // } 
    // cout<<"Array is : "<<endl;
    // for(int i = 0;i<5;i++)
    // {
    //     cout<<(*a)[i]<<" ";
    // }

    int p[2][3]={1,2,3,4,5,6};
    int (*a)[3] = p; // a pointer "a" pointing to whole array

    cout<<"Array is : "<<endl;
    for(int i = 0;i<3;i++)
    {
            cout<<*(*a+i)<<" ";
    } 
    a++;
    for(int i = 0;i<3;i++)
    {
            cout<<*(*a+i)<<" ";
    } 
    return 0;
}