
// USING: NODE AS A STRUCTURE

/*
#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
    int data;
    struct node* next;

};
class linked_list
{
    private:
     node*head=NULL;
     node*tail=NULL;
    
    public:
     void insert_elements();
     void display();
};

void linked_list :: insert_elements()
{
    node*temp=new node;
    cout<<"enter the data : ";
    cin>>temp->data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=tail->next;    
    }   
 }

void linked_list :: display()
{
    node*x;
    x=head;
    cout<<"your linked list is : "<<endl;
    while(x!=tail)
    {
        cout<<x->data<<"->";
        x=x->next;
    }
    cout<<x->data;
}

int main()
{
    system("cls");
    linked_list a;
    int n;
    cout<<"enter the number of elements you want to enter"<<endl;
    cin>>n;
    while(n!=0)
    {
      a.insert_elements();
      n--;
    }
    cout<<endl<<endl<<endl;
    a.display();
    getch();
    return 0;
}
*/

// USING:  NODE AS A CLASS 
#include<iostream>
#include<conio.h>
using namespace std;

class node
{
    public:
        int data;
        node* next;

};
class linked_list
{
    private:
     node*head=NULL;
     node*tail=NULL;
    
    public:
     void insert_elements();
     void display();
};

void linked_list :: insert_elements()
{
    node*temp=new node;
    cout<<"enter the data : ";
    cin>>temp->data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=tail->next;    
    }   
 }

void linked_list :: display()
{
    node*x;
    x=head;
    if(x == NULL)
    {
        cout<<"There is No element in the list !!! "<<endl;
    }
    else
    {
        cout<<"your linked list is : "<<endl;
        while(x!=tail)
        {
            cout<<x->data<<"->";
            x=x->next;
        }
        cout<<x->data;
    }
}

int main()
{
    system("cls");
    linked_list a;
    int n;
    cout<<"enter the number of elements you want to enter"<<endl;
    cin>>n;
    
    while(n!=0)
    {
      a.insert_elements();
      n--;
    }
    cout<<endl;
    a.display();
    return 0;
}

