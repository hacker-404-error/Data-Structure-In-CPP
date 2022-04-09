#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a[10], i, n, pos;
    cout << "enter the number of elements" << endl;
    cin >> n;
    if(n>10)
    {
        cout<<"limit exceeded...."<<endl;
        exit(0);

    }
    cout << "enter the elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "enter the positon of the element you want to DELETE" << endl;
    cin >> pos;

    if (pos < 1 || pos > n + 1)
    {
        cout << "Invalid Position !!" << endl;
        exit(0);
    }
    if (pos == 1)
    {
        int val;
        val = a[0];
        for (i = 0; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
        cout<<"Element Deleted : "<<val<<endl; 
    }
    else if(pos == n)
    {
        n = n - 1;
        cout<<"Element Deleted : "<<a[n]<<endl; 
    }
    else
    {
        int value;
        value = a[pos-1];
        for (i = pos - 1; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
        cout<<"Element Deleted : "<<value<<endl; 
    }

    cout << "elements are: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
