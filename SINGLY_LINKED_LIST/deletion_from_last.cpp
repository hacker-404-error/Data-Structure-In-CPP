

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next=NULL;

};
class linked_list
{
    private:
     node*head=NULL;
     node*tail=NULL;
    
    public:
     void insert_elements();
     void display();
     void del_from_last();
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
    if(head==NULL)
    {
       cout<<"there is no element......!!!!"<<endl;  
    } 
    else
    {
    while(x!=tail)
    {
        cout<<x->data<<"->";
        x=x->next;
    }
    cout<<x->data;
    }
}

void linked_list :: del_from_last()
{
    if(head==NULL)
    {
       cout<<"no element in the list"<<endl;
    }
    else
    {
    node*x;
    x=head;
    while(x->next!=tail || tail==head)
    {
        if(tail==head)
        {
            break;
        }
        x=x->next;
        
    }
     if(tail==head)
   {
       head=NULL;
       cout<<x->data<<" is deleted from list....!!"<<endl;
       free(x);
   }
   else
   {
   tail=x;
   x=x->next;
   tail->next=NULL;
   cout<<x->data<<" is deleted from list..."<<endl;
   free(x);
   }
   }
}

int main()
{
    linked_list a;
    int n;
    cout<<endl<<endl;
    cout<<"enter the number of elements you want to enter"<<endl;
    cin>>n;
    while(n!=0)
    {
      a.insert_elements();
      n--;
    }
    cout<<endl<<endl<<endl;
    cout<<"linked list is : "<<endl;
    a.display();

    int h;
    cout<<endl;
    cout<<"do you want to delete data from last : "<<endl;
    cin>>h;
    while(h!=0)
    {
        a.del_from_last();
        cout<<"updated list after deletion is : "<<endl;
        a.display();
        cout<<endl;
        cout<<"do you want to delete again (press 1)"<<endl;
        cin>>h;
    }
    cout<<endl<<endl<<endl;
    return 0;
}
