#include <iostream>
#include <conio.h>
using namespace std;
class node
{
public:
    int data;
    node *link = NULL;
};
class linked_list
{
private:
    node *head;
    node *tail;

public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
    void Insert();
    void Display();
};

void linked_list ::Insert()
{
    node *temp = new node;
    cin >> temp->data;
    temp->link = NULL;
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->link = temp;
        tail = tail->link;
    }
}

void linked_list ::Display()
{
    node *x;
    x = head;
    if (x == NULL)
    {
        cout << "There is No element in the list !!! " << endl;
    }
    else
    {
        cout << "linked list : ";
        while (x != tail)
        {
            cout << x->data << "-->";
            x = x->link;
        }
        cout << x->data;
    }
}

int main()
{
    system("cls");
    linked_list l;
    int n;
    cout << "Enter the number of elements you want to enter :" << endl;
    cin >> n;
    if (n == 0)
    {
        cout << "No element inserted" << endl;
        l.Display();
    }
    else
    {
        cout << "Enter the elements :" << endl;
        while (n != 0)
        {
            l.Insert();
            n--;
        }
        l.Display();
    }
    return 0;
}
