#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    system("cls");
    int a[10], i, n;
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

    int x, pos;

    cout << "enter the position" << endl;
    cin >> pos;
    if (pos < 1 || pos > n + 1)
    {
        cout << "invalid position" << endl;
        exit(0);
    }

    cout << "enter the element you want to insert" << endl;
    cin >> x;

    if (pos == 1)
    {
        for (i = n; i >= 0; i--)
        {
            a[i + 1] = a[i];
        }
        a[pos-1] = x;
        n++;
    }
    else if (pos == n + 1)
    {
        a[pos-1] = x;
        n++;
    }

    else
    {
        for(i=n-1;i>=pos-1;i--)
        {
            a[i+1] = a[i];
        }
        a[pos-1] = x;
        n++;
    }

    cout << "elements are: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    getch();
    return 0;
}