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

    for (i = 0; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;

    cout << "Elements are After delete from beginning : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}