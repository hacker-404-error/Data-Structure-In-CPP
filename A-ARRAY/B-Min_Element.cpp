
// Time Complexity:  Theta(n)
// Space Complexity: Theta(1) OR Order(1)

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int a[100], n, i, min;
    cout << "Enter the no of elements you want to enter :" << endl;
    cin >> n;
    if (n > 10)
    {
        cout << "limit exceeded...." << endl;
        exit(0);
    }
    cout << "Enter the elements :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    min = a[0];

    for (i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    cout << "Minimum Element Is: " << min;
    getch();
    return 0;
}
