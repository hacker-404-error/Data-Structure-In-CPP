
// FINDING MINIMUM ELEMENTS IN AN ARRAY 
// TIME_COMPLEXITY: THETA(N)
// SPACE_COMPLEXITY: BIGOH(1) OR THETA(1)

#include<iostream>
using namespace std;
int main()
{
   
    unsigned int a[10],n,i;
    cout<<"enter the number of elements: "<<endl;
    cin>>n;
    cout<<"enter the elements: "<<endl;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    int min;
    min=a[0];
    int max;
    max=a[0];
    
    for(i=1;i<n;i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
        
    }
    cout<<"minimum element is:"<<min<<endl;
    cout<<"maximum element is:"<<max;
    return 0;

}
