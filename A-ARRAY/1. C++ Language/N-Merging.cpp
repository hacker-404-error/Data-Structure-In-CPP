#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a[100], n, m, i, x, flag = 0;
    int b[10];
    cout << "enter the number of elements for first array" << endl;
    cin >> n;
    if (n > 10)
    {
        cout << "limit exceeded...........we are sorry" << endl;
        exit(0);
    }
    cout << "enter the elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "enter the number of elements for second array" << endl;
    cin >> m;
    if (m > 10)
    {
        cout << "limit exceeded...........we are sorry" << endl;
        exit(0);
    }
    cout << "enter the elements" << endl;
    for (i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l;
    l = m + n;
    int c[l], j;

    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (i = n, j = 0; i < m + n && j < m; i++, j++)
    {
        c[i] = b[j];
    }
    cout << "merge array :" << endl;
    for (i = 0; i < l; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}