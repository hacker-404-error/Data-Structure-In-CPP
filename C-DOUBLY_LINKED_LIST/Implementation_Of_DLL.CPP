#include <iostream>
using namespace std;

struct node
{
    struct node *pre;
    int data;
    struct node *next;
};

class dll
{
private:
    node *head = NULL;
    node *tail = NULL;

public:
    void insert();
    void display();
};

void dll ::insert()
{
    node *temp;
    temp = new node;
    cout << "enter your data : ";
    cin >> temp->data;
    temp->next = NULL;
    temp->pre = NULL;
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        temp->pre = tail;
        tail = temp;
    }
}

void dll ::display()
{
    node *x;
    x = head;
    while (x != NULL)
    {
        cout << x->data << "->";
        x = x->next;
    }
}

int main()
{
    system("cls");
    dll a;
    int n;
    cout << "enter the number of entries : " << endl;
    cin >> n;
    while (n != 0)
    {
        a.insert();
        n--;
    }
    cout << "elements are : " << endl;
    a.display();
    return 0;
}
