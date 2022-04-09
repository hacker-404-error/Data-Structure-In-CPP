
// FINDING MINIMUM ELEMENTS IN AN ARRAY
// TIME_COMPLEXITY: THETA(N)
// SPACE_COMPLEXITY: BIGOH(1) OR THETA(1)

#include <iostream>
using namespace std;

int main()
{
    system("cls");
    unsigned int a[10], n, i;
    cout << "enter the number of elements: " << endl;
    cin >> n;
    if(n>10)
    {
        cout<<"limit exceeded...."<<endl;
        exit(0);

    }
    cout << "enter the elements: " << endl;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min;
    int max;
    int lb = 0, ub = a[n - 1]; // lb : Lower Bound ; ub: Upper Bound

    if (n == 1) // If array contain only one element
    {
        min = a[lb];
        max = a[lb];
    }

    else if (n == 2) // if array contain only two element
    {
        if (a[lb] > a[ub])
        {
            min = a[ub];
            max = a[lb];
        }
        else
        {
            min = a[lb];
            max = a[ub];
        }
    }

    else // If array contain more than two elements
    {
        min = a[lb];
        max = a[lb];
        for (i = 1; i < n; i++)
        {
            if (min > a[i])
            {
                min = a[i];
            }
            if (a[i] > max)
            {
                max = a[i];
            }
        }
    }

    cout << "minimum element is:" << min << endl;
    cout << "maximum element is:" << max;
    return 0;
}
