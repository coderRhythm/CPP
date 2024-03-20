#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> s;
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int x = 0;
    int top = size-1;

    int i = 0;
    while(i<size)
    {
        s.push(arr[top]);
        top--;

    }

    stack<int> s1;
    s1.push(x);
    while(!s.empty())
    {
        s.push(s1.top());
        s1.pop();
    }

    int i = 0;

    while(!s.empty())
    {
        cout << << " ";

    }
}