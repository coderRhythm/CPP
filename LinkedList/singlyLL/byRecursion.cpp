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

node* createLinkedList(int arr[], int index,int size)
{
    if(index==size)
    {
        return NULL;
    }

    node* temp;

    temp = new node(arr[index]);

    temp->next = createLinkedList(arr,index+1,size);

    return temp;
}

void print(node* head)
{
    while(head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

//storing the numbers from last to end
node* lte(int arr[], int index, int size, node* prev)
{
    node* temp;
    if(index==size)
    {
        return prev;

    }

    temp = new node(arr[index]);

    temp->next = prev;

    return lte(arr,index+1,size,temp);

}
int main()
{
    int arr[] = {1,2,3,4};

    node* head  = NULL;
    // head = createLinkedList(arr,0,4);

    //printing from last to end
    head = lte(arr,0,4,head);
    print(head);
}