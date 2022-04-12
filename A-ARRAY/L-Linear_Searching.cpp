#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, x, flag = 0;
    cout << "enter the number of elements" << endl;
    cin >> n;
    if (n > 10)
    {
        cout << "limit exceeded...." << endl;
        exit(0);
    }
    cout << "enter the elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the element you want to search" << endl;
    cin >> x;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << x << " is found at location " << i + 1 << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << " element " << x << " not found" << endl;
    }
    return 0;
}