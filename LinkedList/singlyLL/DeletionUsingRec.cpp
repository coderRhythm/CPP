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
};
int main()
{
    node* l1 = new node(1);
    l1->next = new node(2);
    l1->next->next = new node(3);
    l1->next->next->next = new node(4);


    
}