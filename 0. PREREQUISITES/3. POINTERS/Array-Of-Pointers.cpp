#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    int **a;
    int row;
    int col;
    cin>>row;
    cin>>col;
    a = new int *[row];
    for(int i = 0;i<row;i++)
    {
        a[i] = new int [col];
    }
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}