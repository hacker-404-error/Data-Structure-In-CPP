#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    system("cls");
    int a[100],i,n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nTRAVERSING OF ALL ELEMENTS:\n"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    getch();
    return 0;
}