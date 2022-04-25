#include <iostream>
#include <conio.h>
using namespace std;

void push(int *stack, int &ub, int &top)
{
    if (top == ub)
    {
        cout << "Stack is Full (Overflow) " << endl;
    }
    else
    {
        int ele;
        cout << "Enter the Element To PUSH" << endl;
        cin >> ele;
        top++;
        stack[top] = ele;
    }
}

void display(int *stack, int &top)
{
    int i;
    cout << "Elements are :";
    for (i = top; i >= 0; i--)
    {
        cout << stack[i] << "--";
    }
    cout << endl
         << endl
         << "Press Enter To Continue...";
    cout << endl;
    getch();
}
int main()
{
    system("cls");
    int n = 0;
    int ch, i, top = -1;
    cout << "Enter the number of elements you want to push into stack" << endl;
    cin >> n;
    int ub = n - 1;
    int stack[n];
    do
    {
        cout << endl
             << "1-PUSH Operation" << endl;
        cout << "2-POP Operation" << endl;
        cout << "3-IsEmpty ?" << endl;
        cout << "4-PEEP Operation" << endl;
        cout << "5-Change Operation" << endl;
        cout << "6-Display Elements" << endl;
        cout << "7-Exit" << endl
             << endl;
        cout << "Enter your choice : " << endl;

        cin >> ch;
        if (ch == 1)
        {
            push(stack, ub, top);
        }
        // else if(ch == 2)
        // {

        // }
        // else if(ch == 3)
        // {

        // }
        // else if(ch == 4)
        // {

        // }
        // else if(ch == 5)
        // {

        // }
        else if (ch == 6)
        {
            display(stack, top);
        }
    } while (ch != 7);

    return 0;
}