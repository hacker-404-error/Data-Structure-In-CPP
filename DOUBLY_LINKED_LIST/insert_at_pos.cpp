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
    void insert_at_pos();
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

void dll::insert_at_pos()
{
    int count=0,x;
    cout<<"enter position of data : "<<endl;
    cin>>x;
    node*temp=head;
    while(temp!=NULL)
    {
       
        count++;
        if(count==x)
        {
            break;
        }
        else
        {
             temp=temp->next;
        }
    } 
    node*tmp=new node;
    cout<<"enter data : "<<endl;
    cin>>tmp->data;
    tmp->next=NULL;
    tmp->pre=NULL;
    if(head==NULL)
    {
        head=tmp;
        tail=tmp;
    }
    else if(temp==head)
    {
        tmp->next=head;
        temp->pre=tmp;
        head=tmp;

    }
    else if(temp==NULL)
    {
        tail->next=tmp;
        tmp->pre=tail;
        tail=tmp;
    }
    else
    {
        tmp->pre=temp->pre->next;
        tmp->next=temp;
        temp->pre->next=tmp;
        temp->pre=tmp;
    }
}

void dll :: display()
{
    node*x;
    x=head;
    while(x!=tail)
    {
        cout<<x->data<<"->";
        x=x->next;
    }
   cout<<x->data;

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
    cout<<endl<<"do you want to insert at pos : "<<endl;
    cin>>x;
    while(x==1)
    {
        a.insert_at_pos();
        a.display();
        cout<<endl;
        cout<<"do you want to enter again "<<endl;
        cin>>x;
    }
    cout<<"your final dll is : "<<endl;
    a.display();

    return 0;
}