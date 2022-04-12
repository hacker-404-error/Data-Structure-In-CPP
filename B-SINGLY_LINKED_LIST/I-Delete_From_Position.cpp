#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
class linked_list
{
private:
    node *head = NULL;
    node *tail = NULL;

public:
    void insert_elements();
    void display();
    void delete_from_pos();
};

void linked_list ::insert_elements()
{
    node *temp = new node;
    cout << "enter the data : ";
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

void linked_list ::display()
{
    if (head == NULL)
    {
        cout << "there is no element in the list" << endl;
    }
    else
    {
        node *x;
        x = head;
        while (x != tail)
        {
            cout << x->data << "->";
            x = x->next;
        }
        cout << x->data << endl;
    }
}

void linked_list ::delete_from_pos()
{
    if (head == NULL)
    {
        cout << "there is no element in the list" << endl;
    }
    else
    {
        node *y;
        int element;
        cout << "enter the data you waant to delete : " << endl;
        cin >> element;
        y = head;
        if (element == head->data)
        {
            node *temp;
            temp = head;
            cout << temp->data << " is deleted from the list....!!" << endl;
            head = head->next;
            free(temp);
        }
        else
        {
            while (y != NULL)
            {
                if (y->data == element)
                {
                    break;
                }
                y = y->next;
            }
            if (y == NULL)
            {
                cout << "element not found " << endl;
            }
            else
            {
                node *g;
                if (y->next == NULL)
                {
                    node *temp = head;
                    while (temp->next != y)
                    {
                        temp = temp->next;
                    }
                    temp->next = NULL;
                    free(y);
                }
                else
                {
                    g = y->next;
                    y->next = y->next->next;
                    cout << g->data << " is deleted from the list ...!!" << endl;
                    free(g);
                }
            }
        }
    }
}

int main()
{
    system("cls");
    linked_list a;
    int n;
    cout << "enter the number of elements you want to enter" << endl;
    cin >> n;
    while (n != 0)
    {
        a.insert_elements();
        n--;
    }
    cout << endl;
    cout << "your linked list is : " << endl;
    a.display();

    int h;
    cout << endl;
    cout << "do you want to delete : " << endl;
    cin >> h;
    while (h != 0)
    {
        a.delete_from_pos();
        cout << "your linked list after deletion is : " << endl;
        a.display();
        cout << "do you want to delete more (press 1) : " << endl;
        cin >> h;
    }
    return 0;
}
