#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node()
    {
        data = 0;
        next = NULL;
    }

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int main()
{
    int arr[] = {10,20,30,40,50};

    node *head,*tail;
    head = tail = NULL;
    for(int i=0;i<5;i++)
    {
        if(head==NULL)
        {
            head = new node(arr[i]);
            tail = head;
        }
        else{
            tail->next = new  node(arr[i]);
            tail = tail->next;
        }
    }
    node* temp = head;
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }



}