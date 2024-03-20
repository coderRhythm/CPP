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
        this->data  = data;
        next = NULL;
    }
};

void print(node* head)
{
    while(head)
    {
        cout << head->data;
        head = head->next;
    }
}
int main()
{
    node* l1 = new node(1);
    l1->next = new node(2);
    l1->next->next = new node(3);
    l1->next->next->next = new node(4);

    node* head = l1;
    node* temp = head;


    //delete the first node
    /* 
    if(head!=NULL)
    {
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    */


    //delete the last node
    // node* prev = NULL;
    // while(temp->next)
    // {
    //     prev=  temp;
    //     temp = temp->next;
    // }
    /*

    
    node* curr = temp->next->next;     //curr pointing to last node
    temp->next = NULL;
    delete curr;
    */

    //using prev pointer
    // delete temp;
    // prev->next = NULL;






    //delete a particular node
    int x = 3;
    int count = 1;
    node* prev = NULL;
    while(count<(x) and (temp!=NULL))
    {
        prev = temp;
        temp = temp->next;
        count++;
    }
    
    // curr->next = NULL;
    prev->next = temp->next;
    
    delete temp;


    print(head);
    

}