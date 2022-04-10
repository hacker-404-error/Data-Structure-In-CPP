#include<iostream>
using namespace std;

struct nodes
{
    int data;
    struct nodes* next;

};

class linked
{
    private:
     nodes*head=NULL;
     nodes*tail=NULL;
    
    public:
     void insert();
     void insert_after_node();
     void display();
};

void linked :: insert()
{
    nodes*temp=new nodes;
    cout<<"enter the data : "<<endl;
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
    nodes*x=head;
    cout<<"elements are : ";
    while(x!=tail)
    {
        cout<<x->data<<"-->";
        x=x->next;
    }
    cout<<x->data;
}
void linked ::insert_after_node()
{
    int x,flag=0;
     cout<<"enter the element after which you want to enter the data : ";
     cin>>x;
     nodes*a=head;
      while(a->data!=x && a->next!=NULL)
    {
        a=a->next;
    }
    if(a->data==x)
    {
     nodes*temp=new nodes;
     cout<<"enter your data : ";
     cin>>temp->data;
     temp->next=NULL;

    if(a==tail)
    {
        tail->next=temp;
        tail=tail->next;
    }
    else
    {
        temp->next=a->next;
        a->next=temp;
    }
    }

    else
    {
        cout<<"element not found : ";
    }

}

int main()
{
    linked a;
    int n;
    cout<<"entetr the number of entries : "<<endl;
    cin>>n;
    while(n!=0)
    {
        a.insert();
        n--;
        a.display();
        cout<<endl;
    }
    int l;
    cout<<"do you want to insert data after the node (press 1) : ";
    cin>>l;
    while(l==1)
    {
        a.insert_after_node();
        a.display();
        cout<<endl;
        cout<<"do you want to insert again (press 1) : ";
        cin>>l;
    }

    return 0;
}