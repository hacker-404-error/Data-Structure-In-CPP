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
        void reverse();
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

    }
    else
    {
        tail->next = temp;
        tail = tail->next;
    }

}
void cll :: display()
{
    node *tmp  = head;
    while(tmp->next != NULL)
    {
        cout<<tmp->data<<"->";
        tmp = tmp->next;
    }
    cout<<tmp->data;
}
void cll :: reverse()
{
    node*temp1 = head;
    node*temp2 = head->next;
    node*temp3 = head->next->next;
    head->next = NULL;
    tail = head;
    while(temp3 !=NULL)
    {
        temp2->next = temp1;
        temp1 = temp2;
        temp2 = temp3;
        temp3 = temp3->next; 
    }
    temp2->next = temp1;
    head = temp2;
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
    cout<<endl<<"reverse : "<<endl;
    a.reverse(); 
    a.display();
    return 0;
}