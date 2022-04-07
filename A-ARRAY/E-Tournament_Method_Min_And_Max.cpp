#include <iostream>
using namespace std;

// structure is used to return
// two values from minMax()
struct Pair
{
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int low,
                      int high)
{
    struct Pair minmax, mml, mmr;
    int mid;

    // If there is only one element
    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    // If there are two elements
    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }

    // If there are more than 2 elements
    mid = (low + high) / 2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high);

    // Compare minimums of two parts
    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;

    // Compare maximums of two parts
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;

    return minmax;
}


int main()
{
    system("cls");
    int arr[10], arr_size, i;
    cout << "Enter the Number of Elements : " << endl;
    cin >> arr_size;
    cout << "Enter the Elements : " << endl;
    for (i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }

    struct Pair minmax = getMinMax(arr, 0, arr_size - 1);

    cout << "Minimum element is :" << minmax.min << endl;
    cout << "Maximum element is :" << minmax.max;

    return 0;
}
