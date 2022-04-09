#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    system("cls");
    int a[100],i,n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    if(n>10)
    {
        cout<<"limit exceeded...."<<endl;
        exit(0);

    }
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int pos,x;
    cout<<"Enter The position Whose value you wabt to change : "<<endl;
    cin>>pos;
    if(pos<1 || pos>n+1)
    {
        cout<<"Invalid position !!! "<<endl;
        exit(0);
    }
    else
    {
        cout<<"Enter the Value : "<<endl;
        cin>>x;
        a[pos-1] = x;
    }


    cout<<"Updated Array : \n"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}