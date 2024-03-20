#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    int arr[] = {1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        s.push(arr[i]);
    }

    stack<int> s1;
    int i =0;
    while(!s.empty())
    {
        s1.push(s.top());
        cout << s1.top();
        i++;
        s.pop();
    }



}