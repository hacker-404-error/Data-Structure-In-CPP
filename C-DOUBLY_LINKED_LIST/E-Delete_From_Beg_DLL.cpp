#include <iostream>
using namespace std;

class node
{
public:
    node *next;
    int data;
    node *pre;
};

class dll
{
private:
    node *head;
    node *tail;

public:
    dll()
    {
        head = NULL;
        tail = NULL;
    }
    void insert();
    void display();
    void Delete_From_Beg();
};

void dll::insert()
{
    node *tmp = new node;
    tmp->next = NULL;
    tmp->pre = NULL;
    cout << "Enter the data: ";
    cin >> tmp->data;
    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else
    {
        tail->next = tmp;
        tmp->pre = tail;
        tail = tail->next;
    }
}
void dll::display()
{
    node *tmp;
    tmp = head;
    if (head == NULL)
    {
        cout << "No element to display";
    }
    if (head->next == NULL)
    {
        cout << tmp->data << "->";
    }
    else
    {
        while (tmp != NULL)
        {
            cout << tmp->data << "->";
            tmp = tmp->next;
        }
    }
}
void dll::Delete_From_Beg()
{
    if (head == NULL)
    {
        cout << "No element to delete" << endl;
    }
    if(head->next == NULL)
    {
        head = NULL;
    }
    else
    {
        node *tmp = head;
        head = head->next;
        head->pre = NULL;
        tmp->next = NULL;
        free(tmp);
        tmp = NULL;
    }
}

int main()
{
    dll list;
    int n;
    cout << "Enter the number of entries" << endl;
    cin >> n;
    while (n != 0)
    {
        list.insert();
        n--;
    }
    list.display();
    int c;
    cout << "Do you want to delete from the beg" << endl;
    cin >> c;
    while (c == 1)
    {
        list.Delete_From_Beg();
        cout << endl;
        list.display();
        cout << "Do you want to delete again" << endl;
        cin >> c;
    }

    return 0;
}