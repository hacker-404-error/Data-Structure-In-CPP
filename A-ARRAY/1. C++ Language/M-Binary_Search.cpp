#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");

    int a[100], n, i, low, high, mid, ele;
    cout << "Enter the no of elements you want to enter: ";
    cin >> n;
    cout << "Enter the elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the Element you want to searh: " << endl;
    cin >> ele;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;

    while (a[mid] != ele && low <= high)
    {
        if (ele <= a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = (high + low) / 2;
    }

    if (a[mid] == ele)
    {
        cout << "Element Found At Location :" << mid + 1;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }
    getch();
    return 0;
}