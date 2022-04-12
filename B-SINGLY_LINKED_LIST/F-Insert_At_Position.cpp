#include <iostream>
#include <conio.h>
using namespace std;
struct node
{
    int data;
    node *next;
};

class linkedList
{
private:
    node *head = NULL;
    node *tail = NULL;

public:
    int count = 0;
    void insert();
    void insert_At_Pos();
    void display();
};
void linkedList ::insert()
{
    node *tmp = new node;
    cout << "\nEnter the data :" << endl;
    cin >> tmp->data;
    tmp->next = NULL;
    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else
    {
        tail->next = tmp;
        tail = tail->next;
    }
}
void linkedList ::display()
{
    node *temp;
    temp = head;
    cout << "Elements are : ";
    while (temp != NULL)
    {
        cout << temp->data << "->";
        count++;
        temp = temp->next;
    }
}
void linkedList ::insert_At_Pos()
{
    int pos;
    cout << "Enter the Position where you want to insert : ";
    cin >> pos;
    if (pos > count || pos < 1)
    {
        cout << "Invalid position!!!";
        exit(0);
    }
    node *temp;
    temp = head;
    while (pos != 1)
    {
        temp = temp->next;
        pos--;
    }
    int ele;
    cout << "Enter the element : " << endl;
    cin >> ele;
    temp->data = ele;
}
int main()
{
    system("cls");
    linkedList l;
    l.insert();
    l.display();
    int x;
    cout << endl
         << "Do you want to enter again(1/0) : ";
    cin >> x;
    while (x == 1)
    {
        l.insert();
        l.display();
        cout << endl
             << "Do you want to enter again(1/0) : ";
        cin >> x;
    }
    cout << "Final ";
    l.display();

    int z;
    cout << "\nDo you want to insert more elements based on Index? : ";
    cin >> z;
    while (z == 1)
    {
        l.insert_At_Pos();
        l.display();
        cout << "\nDo you want to insert more elements based on Index? : ";
        cin >> z;
    }

    cout << "Final ";
    l.display();
    return 0;
}