#include<iostream>
using namespace std;
int main()
{
    int a[10],i,n,x;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++) 
    {
        cin>>a[i];
    } 

    cout<<"enter the positon of the element you want to DELETE"<<endl;
    cin>>x;

    
    for(i=x-1;i<n;i++)
    {
       a[i]=a[i+1];              
    }    
    n--; 
    cout<<"elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
