
// Time Complexity:  Theta(n)
// Space Complexity: Theta(1)

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int a[100],n,i,max;
    cout<<"Enter the no of elements you want to enter :"<<endl;
    cin>>n;
    cout<<"Enter the elements :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];

    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
     cout<<"Maximum Element Is: "<<max;
    getch();
    return 0;
}
