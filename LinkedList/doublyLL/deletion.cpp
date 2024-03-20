#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node* createLL(int arr[],int index, int size, node* back)
{
    if(index==size) return NULL;
    
    node* temp = new node(arr[index]);
    temp->prev = back;
    temp->next = createLL(arr,index+1,size,temp);


}

void print(node* temp)
{
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }


}

void deletionAtBegin(node* &head)
{
    node* temp = head;
    head = head->next;
    if(head)
    head->prev = NULL;
    delete temp;

}

void deletionAtlast(node* &head)
{
    node* temp = head;
    while(temp->next)
    {
        temp = temp->next;

    }
    if(temp->prev)
    temp->prev->next = NULL;
    
    delete temp;

}
int main()
{
    int arr[] = {1,2,3,4};
    node* head = NULL;
    head = createLL(arr,0,4,head);
    //deletion at begin
    deletionAtBegin(head);
    deletionAtlast(head);
    print(head);
}   