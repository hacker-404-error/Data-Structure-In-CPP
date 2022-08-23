#include<iostream>
#include<stdlib.h>
using namespace std;

class node
{
    public:
        int data;
        node* next = NULL;
};

class cll
{
    private:
        node*head = NULL;
        node*tail = NULL;
    public:
        void insert();
        void display();
};

void cll :: insert()
{
    node*temp = new node;
    cout<<"Enter the number : ";
    cin>>temp->data;
    temp->next = NULL;
    if(head == NULL && tail == NULL)
    {
        head = temp;
        tail = temp;
        temp->next = head;
    }
    else
    {
        tail->next = temp;
        tail = tail->next;
        temp->next = head;
    }

}
void cll :: display()
{
    node *tmp  = head;
    while(tmp->next != head)
    {
        cout<<tmp->data<<"->";
        tmp = tmp->next;
    }
    cout<<tmp->data<<"->";
    cout<<tmp->next->data;
}

int main()
{
    system("cls");
    cll a;
    int n;
    cout<<"Enter the number of elements you want to enter"<<endl;
    cin>>n;
    while(n!=0)
    {
        a.insert();
        n--;
    }
    cout<<"Elements are : "<<endl;
    a.display();
    return 0;
}