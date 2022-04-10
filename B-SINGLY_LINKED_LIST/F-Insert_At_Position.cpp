#include<iostream>
#include<conio.h>
struct node
{
    int data;
    node * next;
};
class linkedList
{
    private:
        node* head = NULL;
        node* tail = NULL;
    public:
        void insert();
        void insert_At_Pos();
        void display();
};
 void linkedList :: insert()
{

}
int main()
{
    system("cls");

    return 0;
}