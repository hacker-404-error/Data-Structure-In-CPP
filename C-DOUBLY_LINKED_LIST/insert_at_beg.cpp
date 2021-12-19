#include<iostream>
using namespace std;

struct node
{
    struct node* pre;
    int data;
    struct node* next;
};
class dll
{
    private:
     struct node* head=NULL;
     struct node* tail=NULL;
    public:
    void insert_at_beg();
    void display();
    void insert();
};

void dll::insert()
{
    node*temp=new node;
    cout<<"enter the data : "<<endl;
    cin>>temp->data;
    temp->next=NULL;
    temp->pre=NULL;

    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        temp->pre=tail;
        tail=temp;

    }
}

void dll::insert_at_beg()
{
    node*temp=new node;
    cout<<"enter data : "<<endl;
    cin>>temp->data;
    temp->next=NULL;
    temp->pre=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        temp->next=head;
        head->pre=temp;
        head=temp;
    }
}

void dll :: display()
{
    node*x;
    x=head;
    while(x!=NULL)
    {
        cout<<x->data<<"->";
        x=x->next;
    }

}
int main()
{
     dll a;
    int n;
    cout<<"enter the number of entries : "<<endl;
    cin>>n;
    while(n!=0)
    {
        a.insert();
        n--;
    }
    cout<<"elements are : "<<endl;
    a.display();
    int x;
    cout<<endl<<"do you want to insert at beg : "<<endl;
    cin>>x;
    while(x==1)
    {
        a.insert_at_beg();
        a.display();
        cout<<endl;
        cout<<"do you want to enter again "<<endl;
        cin>>x;
    }
    cout<<"your final dll is : "<<endl;
    a.display();

    return 0;
}