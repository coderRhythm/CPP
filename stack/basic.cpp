#include<iostream>
using namespace std;

// class Stack
// {
//     int* arr;
//     int size;
//     int top=-1;


//     public:
//     Stack(int s)
//     {
//         size = s;
//         top = -1;
//         arr = new int[s];
//     }

//     void push(int value)
//     {
//         if(top==size-1)
//         {
//             cout << "stack overflow";
//         }
//         else{
//             top++;
//             arr[top] = value;
//         }
//     }

//     void pop()
//     {
//         if(top==-1)
//         {
//             cout << "underflow";
//         }
//         else{
//             top--;
//         }
//     }


//     int peek()
//     {
//         if(top==-1)
//         {
//             cout << "underflow";
//         }
//         else {
//             return arr[top];
//         }
//     }

//     bool isEmpty()
//     {
//         return top==-1;
//     }

//     int isSize(){
//         return top+1;
//     }



// };


class node{
    public:
    node* next;
    int data;


    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class stack{
    
    node* top;
    // int *arr;
    int size;

    public:
    stack()
    {
        top = NULL;
        size = 0;

    }

    void push(int value)
    {
        node* temp = new node(value);
        temp->next = top;
        top = temp;
        size++;
    }

    void pop()
    {
        node* curr = top;
        node* prev = NULL;
        while(curr->next)
        {   
            prev = curr;
            curr =curr->next;
        }
        prev->next = NULL;
        delete curr;
    }

    int peek()
    {
        node* curr = top;
        while(curr->next)
        {
            curr = curr->next;
        }

        return curr->data;
    }
};


int main()
{
    
    stack s;
    s.push(2);
    s.push(3);


    s.pop();
    cout << s.peek()<<endl;

    


}