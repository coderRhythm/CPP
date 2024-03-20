#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node()
    {
        data =0;
        next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
    node* l1 = new node(1);
    l1->next = new node(3);
    l1->next->next = new node(4);

    node * head = l1;
    node* temp = head;
    int x=4;

    int count = 0;
    while(count<(x-2))
    {
        temp = temp->next;
        count++;
    }

    node* new_node = new node(5);
    new_node->next = temp->next;
    temp->next = new_node;


    while(head)
    {
        cout << head->data;
        head = head->next;
    }
}