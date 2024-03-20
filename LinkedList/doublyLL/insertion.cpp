#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

//insertion at begin
void insertionAtHead(int data, node* &head)
{
    if(head==NULL)
    {
        head =  new node(data);
    }
    else{
        node *temp = new node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

//insertion at end
void insertionAtEnd(int data, node* &head)
{   
    node* tail;
    if(head==NULL)
    {
        head = new node(data);
        tail = head;
    }
    else{
        node* temp = new node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;

    }
}



void print(node* temp)
{
    while(temp)
    {
        cout << temp->data;
        temp = temp->next;
    }
}


// using recursion
node* createDLL_REC(int arr[], int index, int size, node* back)
{
    if(index==size)
    {
        return NULL;
    }
    
    node* newnode = new node(arr[index]);
    newnode->prev = back;

    newnode->next = createDLL_REC(arr,index+1,size,newnode);

    return newnode;
}


//insert at any given position k 
void insertAtK(node* &head, int k, int data)
{
        if(k==0)
        {
            if(head==NULL)
            {
                head = new node(5);
            }
            else{
                node* temp = new node(data);
                temp->next = head;
                head->prev = temp;
                head = temp;
            }
        }
        else{
            //insert at end or middle
            node* curr = head;
            while(--k)
            {
                curr = curr->next;
            }

            if((curr->next)==NULL)
            {
                // last 
                node* temp = new node(data);
                temp->prev = curr;
                curr->next = temp;
                curr = temp;
            }
            else{
                node* temp = new node(data);
                temp->next = curr->next;
                temp->prev = curr;
                curr->next = temp;
                temp->next->prev = temp;
                
            }
        }
    }

int main()
{
    node* head = NULL;

    //insertion at end
    int arr[] = {1,2,3,4};
    //for loop
    /*
        for(int i=0;i<4;i++)
    {
        insertionAtEnd(arr[i],head);
        
    }
    */

    //recursion
     head  = createDLL_REC(arr,0,4,head);

    insertAtK(head,3,1);

    

    print(head);
}