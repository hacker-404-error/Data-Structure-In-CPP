#include<iostream>
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
     void delete_from_pos();
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
    if(head==NULL)
    {
        cout<<"there is no element in the list"<<endl;
    }
    else
    {
    node*x;
    x=head;
    while(x!=tail)
    {
        cout<<x->data<<"->";
        x=x->next;
    }
    cout<<x->data<<endl;
    }
}


void linked_list :: delete_from_pos()
{ 
    if(head==NULL)
    {
        cout<<"there is no element in the list"<<endl;
    }
    else
    {
    node*x,*y;
    x=new node;
    x->next=NULL;
    cout<<"enter the data after which you waant to delete : "<<endl;
    cin>>x->data;
    y=head;
    while(y->next->data!=x->data && y==NULL)
    {
        y=y->next;

    }
    if(y==NULL)
    {
        cout<<"element not found "<<endl;
    }
    else
    {
        node*g;
        g=y->next;
        y->next=y->next->next;
        cout<<g->data<<" is deled from the list ...!!"<<endl;
        free(g);      
    }
    }


}


int main()
{
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
    cout<<"your linked list is : "<<endl;
    a.display();

    int h;
    cout<<endl;
    cout<<"do you want to delete : "<<endl;
    cin>>h;
    while(h!=0)
    {
        a.delete_from_pos();
        cout<<"your linked list after deletion is : "<<endl;
        a.display();
        cout<<"do you want to delete more (press 1) : "<<endl;
        cin>>h;
    }
    return 0;
}
