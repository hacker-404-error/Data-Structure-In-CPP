#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

class linkedList
{
    private:
        node*head = NULL;
        node*tail = NULL;
    public:
        void insert();
        void display();
        void search();
};

void linkedList :: insert()
{
    node* temp = new node;
    temp->next = NULL;
    cout<<"Enter the data : ";
    cin>>temp->data;

    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = tail->next;
    }
} 
void linkedList :: display()
{
    node* temp;
    temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void linkedList :: search()
{
    if(head == NULL)
    {
        cout<<"There is no element in the list"<<endl;
    }
    else 
    {
        int flag = 0,count = 0;
        int element;
        cout<<"Enter the element you want to search: "<<endl;
        cin>>element;
        node*temp = head;
        while(temp != NULL)
        {
            if(temp -> data == element)
            {
                flag = 1;
                count++;
                break;
            }
            temp=temp->next;
            count++;
        }
        if(flag == 1)
        {
            cout<<endl<<element<<" found at : "<<count<<endl;
        }
        else
        {
            cout<<"Element not found !!"<<endl;
        }

    }
}

int main()
{
    system("cls");
    linkedList l;
    l.insert();
    int x;
    cout<<"Do you want to insert more data (1/0)?"<<endl;
    cin>>x;
    while(x==1)
    {
        l.insert();
        cout<<"Do you want to insert more data (1/0)?"<<endl;
        cin>>x;
    }
    l.display();

    int n;
    cout<<"Do you want to search element(1/0)? :"<<endl;
    cin>>n;
    while(n==1)
    {
        l.search();
        cout<<"Do you want to search element again (1/0)? :"<<endl;
        cin>>n;
    }
    return 0;
}