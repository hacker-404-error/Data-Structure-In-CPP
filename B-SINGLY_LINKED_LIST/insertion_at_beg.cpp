#include<iostream>
using namespace std;

struct node
{
    int data;
    node*next=NULL;

};

class linked
{
    private:
     node*head=NULL;
     node*tail=NULL;
    
    public:
     void insert();
     void insert_at_beg();
     void display();

};

void linked :: insert()
{
    node*temp=new node;
    cout<<"enter the element : ";
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

void linked :: display()
{
    node*x;
    x=head;
    cout<<"linked list : ";
    while(x!=tail)
    {
        cout<<x->data<<"-->";
        x=x->next;
    }
    cout<<x->data;
}

void linked :: insert_at_beg()
{
    
    node*temp=new node;
    cout<<"enter data : "<<endl;
    cin>>temp->data;
    temp->next=head;
    head=temp;
}

int main()
{
    linked a;
    int n;
    cout<<"enter the number of elements you want to enter : "<<endl;
    cin>>n;
    while(n!=0)
    {
        a.insert();
        n--;
    }
    a.display();
    int z;
    cout<<endl<<endl<<"do you want to insert at beg : "<<endl;
    cin>>z;
    while(z==1)
    {
        a.insert_at_beg();
         a.display();
         cout<<endl<<endl;
        cout<<"do you want to insert again : "<<endl;
        cin>>z;
    }
    cout<<endl;
    cout<<"final list is : ";
    a.display();
    
    return 0;
}

