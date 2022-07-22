#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    system("cls");
    int n, a[10], i;
    cout << "Enter the Number of elements you want to enter : " << endl;
    cin >> n;
    if (n > 10)
    {
        cout << "limit exceeded...." << endl;
        exit(0);
    }
    cout << "Enter the Elements : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x;
    cout << "Enter the Element you want to insert At End :" << endl;
    cin >> x;

    a[n] = x;
    n = n + 1;

    cout << "Elements are : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}