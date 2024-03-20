#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node()
    {
        data=0;
        next = NULL;
    }

    node(int data)
    {
        this->data = data;
        this->next  = NULL;
    }


};


void createLinkedList(int arr[], int size, node* &head)
{
    node* temp = NULL;

    for(int i=0;i<size;i++)
    {
        if(head == NULL)
        {
            head = new node(arr[i]);
            temp = head;
        }
        else{
            temp->next = new node(arr[i]);
            temp = temp->next;
        }
    }




}

void print(node* temp)
{
    while(temp)
    {
        cout << temp->data << " ";
        temp  = temp->next;
    }
}

void deleteKNode(int arr[], int size, node* head)
{
    node* curr = head;
    int k = 1;
    node* prev = NULL;
    while(curr)
    {   
        if(size==1)
        {
            head = NULL;
            break;
        }
        if(k==3)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
            k  = 1;
        }
        else{
            prev = curr;
            curr = curr->next;
            k++;
        }
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    node* head = NULL;
    createLinkedList(arr,9,head);
    deleteKNode(arr,9,head);
    print(head);
}