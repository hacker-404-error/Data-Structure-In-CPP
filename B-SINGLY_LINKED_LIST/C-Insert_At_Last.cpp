#include<iostream>
#include<conio.h>
using namespace std;

// struct node
// {
//     int data;
//     node*next=NULL;

// };

// class linked
// {
//     private:
//      node*head=NULL;
//      node*tail=NULL;
    
//     public:
//      void insert();
//      void insert_at_last();
//      void display();

// };

// void linked :: insert()
// {
//     node*temp=new node;
//     cout<<"enter the element : ";
//     cin>>temp->data;
//     temp->next=NULL;
//     if(head==NULL)
//     {
//         head=temp;
//         tail=temp;
//     }
//     else
//     {
//         tail->next=temp;
//         tail=tail->next;

//     }
// }

// void linked :: display()
// {
//     node*x;
//     x=head;
//     cout<<"linked list : ";
//     while(x!=tail)
//     {
//         cout<<x->data<<"-->";
//         x=x->next;
//     }
//     cout<<x->data;
// }

// void linked :: insert_at_last()
// {
    
//     node*temp=new node;
//     cout<<"enter data : "<<endl;
//     cin>>temp->data;
//     tail->next=temp;
//     tail=tail->next;
// }

// int main()
// {
//     linked a;
//     int n;
//     cout<<"enter the number of elements you want to enter : "<<endl;
//     cin>>n;
//     while(n!=0)
//     {
//         a.insert();
//         n--;
//     }
//     a.display();
//     int z;
//     cout<<endl<<endl<<"do you want to insert at last : "<<endl;
//     cin>>z;
//     while(z==1)
//     {
//         a.insert_at_last();
//          a.display();
//          cout<<endl<<endl;
//         cout<<"do you want to insert again : "<<endl;
//         cin>>z;
//     }
//     cout<<endl;
//     cout<<"final list is : ";
//     a.display();
//     return 0;
// }

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
        void Insert_At_Last();
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

void linked_list ::Display()
{
    node*temp;
    temp=head;
    cout<<"your linked list is : "<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->link;
    }
}

void linked_list ::Insert_At_Last()
{
    node*temp=new node;
    cout<<"Enter the Element to Insert At Last : ";
    cin>>temp->data;
    temp->link=NULL;
    tail->link=temp;
    tail=tail->link;
}

int main()
{
    system("cls");
    linked_list l;
    int n;
    cout<<"Enter the number of elements you want to enter :"<<endl;
    cin>>n;
    cout<<"Enter the elements :"<<endl;
    while(n!=0)
    {
        l.Insert();
        n--;
    }
    l.Display();
    int z;
    cout<<endl<<endl<<"do you want to insert at last : "<<endl;
    cin>>z;
    while(z==1)
    {
        l.Insert_At_Last();
         l.Display();
         cout<<endl<<endl;
        cout<<"do you want to insert again : "<<endl;
        cin>>z;
    }
    cout<<endl;
    cout<<"final list is : ";
    l.Display();
    getch();
    return 0;
}