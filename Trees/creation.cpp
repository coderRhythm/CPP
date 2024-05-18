#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int value)
    {
        data = value;
     left = right = NULL;   
    }
};

node* createBinaryTree()
{
    int x;
    cin >> x;
    node* temp = new node(x);
    // ----------left 
    temp->left = createBinaryTree();
    // ----------right
    temp->right  = createBinaryTree();

    return temp;
}
int main()
{
    // int x;
    // cout << "enter the root element: "<<endl;
    // cin >> x;

    // queue<node*> q;
    // node* root = new node(x);

    // q.push(root);

    // while(!q.empty())
    // {
    //     node* temp = q.front();

    //     q.pop();

    //     cin>>x; //left side

    //     if(x!=-1)
    //     {
    //         temp->left = new node(x);
    //         q.push(temp->left);
    //     }

    //     cin >> x; //right side
    //     if(x!=-1)
    //     {
    //         temp->right = new node(x);
    //         q.push(temp->right);
    //     }


    // }

   
   /*

||||=======================METHOD-2======================|||||||

   */
    cout << "enter the root node: "<<endl;
    node* root = createBinaryTree();
    
}