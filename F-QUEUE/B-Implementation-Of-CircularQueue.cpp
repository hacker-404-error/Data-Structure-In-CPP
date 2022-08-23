#include <iostream>
#include <stdlib.h>
using namespace std;

void enqueue(int a[], int *front, int *rear, int *n)
{
    int x;
    if (*rear == -1 && *front == -1)
    {
        *rear = *rear + 1;
        *front = *front + 1;
        cout << "Enter the element: " << endl;
        cin >> x;
        a[*rear] = x;
    }
    else if ((*rear + 1) % (*n) == *front)
    {
        cout << "Overflow" << endl;
        return;
    }
    else
    {
        cout << "Enter the element: " << endl;
        cin >> x;
        *rear = (*rear + 1) % (*n);
        a[*rear] = x;
    }
}
void dequeue(int a[], int *front, int *rear, int *n)
{
    if (*front == -1)
    {
        cout << "Underflow" << endl;
    }
    else if (*front == *rear)
    {
        *front = -1;
        *rear = -1;
    }
    else
    {
        *front = (*front + 1) % (*n);
    }
}
void display(int a[], int *front, int *rear, int *n)
{
    int i;
    // for (i = *front; i + 1 != *rear; i = (i + 1) % (*n))
    // {
    //     cout << a[i] << " ";
    // }
    i = *front;
    while(i<=*rear)
    {
        cout<<a[i]<<" ";

        i = (i+1)%(*n);
    }
}
int main()
{
    system("cls");
    int n;
    cout << "Enter the number of elements you want to enter" << endl;
    cin >> n;
    int a[n];
    int front = -1;
    int rear = -1;
    int c;
    do
    {
        cout << "Enter Your Choice:" << endl;
        cout << "1 : Enqueue" << endl;
        cout << "2 : Dequeue" << endl;
        cout << "3 : Display" << endl;
        cout << "4 : Quit" << endl;
        cin >> c;
        if (c == 1)
        {
            enqueue(a, &front, &rear, &n);
        }
        if (c == 2)
        {
            dequeue(a, &front, &rear, &n);
        }
        if (c == 3)
        {
            display(a, &front, &rear, &n);
        }

    } while (c != 4);

    return 0;
}