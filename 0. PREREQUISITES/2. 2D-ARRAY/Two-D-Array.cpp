#include<iostream>
using namespace std;
int main()
{
    int a[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<a<<endl;    // 6422172 address of {1,2,3}
    cout<<a+1<<endl;  // 6422184 address of {4,5,6}
    cout<<a+2<<endl;  // 6422196 address of {7,8,9}
    cout<<a+3<<endl;  // 6422208 next address of {{1,2,3},{4,5,6},{7,8,9}}
    cout<<&a<<endl;   // 6422172 address of {{1,2,3},{4,5,6},{7,8,9}}
    cout<<&a+1<<endl; // 6422208 next address of {{1,2,3},{4,5,6},{7,8,9}}  
    cout<<endl<<endl<<endl;
    cout<<*a+0<<" Element is: "<<*(*a+0)<<endl;   // 6422172 address of element 1 
    cout<<*a+1<<" Element is: "<<*(*a+1)<<endl; // 6422176 address of element 2
    cout<<*a+2<<" Element is: "<<*(*a+2)<<endl; // 6422180 address of element 3
    cout<<*a+3<<" is equivalent to "<<*(a+1)+0<<" Element is: "<<*(*(a+1)+0)<<endl; // 6422184 address of element 4
    cout<<*a+4<<" is equivalent to "<<*(a+1)+1<<" Element is: "<<*(*(a+1)+1)<<endl; // 6422184 address of element 4
    cout<<*a+5<<" is equivalent to "<<*(a+1)+2<<" Element is: "<<*(*(a+1)+2)<<endl; // 6422184 address of element 4
    cout<<*a+6<<" is equivalent to "<<*(a+2)+0<<" Element is: "<<*(*(a+2)+0)<<endl; // 6422184 address of element 4
    cout<<*a+7<<" is equivalent to "<<*(a+2)+1<<" Element is: "<<*(*(a+2)+1)<<endl; // 6422184 address of element 4
    cout<<*a+8<<" is equivalent to "<<*(a+2)+2<<" Element is: "<<*(*(a+2)+2)<<endl; // 6422184 address of element 4

}