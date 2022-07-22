#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next = NULL;
};

class linked
{

public:
    node *head = NULL;
    node *tail = NULL;
    void insert();
    void display();
    void con(int, int, linked, linked);
};

void linked ::insert()
{
    node *temp = new node;
    cout << "enter the element : ";
    cin >> temp->data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = tail->next;
    }
}

void linked ::display()
{
    node *x;
    x = head;
    while (x != tail)
    {
        cout << x->data << "-->";
        x = x->next;
    }
    cout << x->data;
}

void linked ::con(int n, int m, linked a, linked b)
{
    if (n >= m)
    {
        a.tail->next = b.head;
        head = a.head;
        tail = b.tail;
    }

    else
    {
        b.tail->next = a.head;
        head = b.head;
        tail = a.tail;
    }
}

int main()
{
    linked a, b;
    int n, m, x, y;
    cout << "enter the number of elements you want to enter for linked list 1: " << endl;
    cin >> n;
    x = n;
    while (n != 0)
    {
        a.insert();
        n--;
    }
    cout << endl;
    cout << "linked list 1 : ";
    a.display();
    cout << endl;
    cout << "enter the number of elements you want to enter for linked list 2: " << endl;
    cin >> m;
    y = m;
    while (m != 0)
    {
        b.insert();
        m--;
    }
    cout << endl;
    cout << "linked list 2 : ";
    b.display();
    cout << endl;

    linked c;
    c.con(x, y, a, b);
    cout << "concatination of linked list is : " << endl;
    c.display();

    return 0;
}