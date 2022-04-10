#include<iostream>
#include<conio.h>
using namespace std;
class node
{
    public:
        int data;
        node* link=NULL;
};
class linked_list
{
    private:
        node*head;
        node*tail;

    public:
        linked_list()
        {
            head=NULL;
            tail=NULL;
        }
        void Insert();
        void Insert_At_Beg();
        void Display();
};

void linked_list ::Insert()
{
    node*temp=new node;
    cin>>temp->data;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->link=temp;
        tail=tail->link;
    }
}

void linked_list :: Display()
{
    node*x;
    x=head;
    if(x == NULL)
    {
        cout<<"There is No element in the list !!! "<<endl;
    }
    else
    {
        cout<<"linked list : ";
        while(x!=tail)
        {
            cout<<x->data<<"-->";
            x=x->link;
        }
        cout<<x->data;
    }
}

void linked_list :: Insert_At_Beg()
{
    node*temp=new node;
    cout<<"Enter the Element to Insert At Beginning : ";
    cin>>temp->data;
    temp->link=NULL;
    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->link = head;
        head = temp;
    }
    
}

int main()
{
    system("cls");
    linked_list l;
    int n;
    cout<<"Enter the number of elements you want to enter :"<<endl;
    cin>>n;
    if(n == 0)
    {
        cout<<"No element inserted"<<endl;
        l.Display();
        int z;
        cout<<endl<<endl<<"do you want to insert at Beginning : "<<endl;
        cin>>z;
        while(z==1)
        {
            l.Insert_At_Beg();
             l.Display();
             cout<<endl<<endl;
            cout<<"do you want to insert again : "<<endl;
            cin>>z;
        }
        cout<<endl;
        cout<<"final ";
        l.Display();
        
    }
    else
    {
        cout<<"Enter the elements :"<<endl;
        while(n!=0)
        {
            l.Insert();
            n--;
        }
        l.Display();
        int z;
        cout<<endl<<endl<<"do you want to insert at Beginning : "<<endl;
        cin>>z;
        while(z==1)
        {
            l.Insert_At_Beg();
             l.Display();
             cout<<endl<<endl;
            cout<<"do you want to insert again : "<<endl;
            cin>>z;
        }
        cout<<endl;
        cout<<"final ";
        l.Display();
    }
    return 0;
}

