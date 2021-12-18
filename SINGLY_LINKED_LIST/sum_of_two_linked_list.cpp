#include<iostream>
using namespace std;

struct node
{
    int data;
    node*next=NULL;

};

class linked
{
    
    public:
     node*head=NULL;
     node*tail=NULL;
     void insert();
     void display();
    int sum(int,int,linked);

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


 int linked :: sum(int n,int m, linked b)
{
        node*x;
        x=head;
        node*y;
        y=b.head;
    if(n==m)
    {
       
        while(x!=NULL && y!=NULL)
        {
            cout<<(x->data) + (y->data)<<"->";
            x=x->next;
            y=y->next;
        }
        cout<<(x->data) + (y->data);
        return 0;

    }
    /*
    else if (n>m)
    {
           while(y!=b.tail)
        {
            cout<<(x->data) + (y->data)<<"->";
            x=x->next;
            y=y->next;
        }
        cout<<(x->data) + (y->data);
        while(x!=a.tail)
        {
            cout<<x->data<<"->";
            x=x->next;
        }
        
    }
    else
    {
           while(x!=a.tail)
        {
            cout<<(x->data) + (y->data)<<"->";
            x=x->next;
            y=y->next;
        }
        cout<<(x->data) + (y->data);
        while(y!=b.tail)
        {
            cout<<y->data<<"->";
            y=y->next;
        }

    }
    */
    
    
}



int main()
{
    linked a,b;
    int n,m,x,y;
    cout<<"enter the number of elements you want to enter for linked list 1: "<<endl;
    cin>>n;
    x=n;
    while(n!=0)
    {
        a.insert();
        n--;
    }
    //a.display();
    cout<<endl;
    cout<<"enter the number of elements you want to enter for linked list 2: "<<endl;
    cin>>m;
    y=m;
    while(m!=0)
    {
        b.insert();
        m--;
    }
   // b.display();
    
    cout<<endl;
    cout<<"sum of two singly list is :"<<endl;
    a.sum(x,y,b);
    
    
    
    return 0;
}