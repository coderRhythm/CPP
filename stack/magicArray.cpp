// adjacent element should be not alternative sign
#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> s;
    int arr[] = {2,3,5,-4,6,-2,-8,9};
    int size = sizeof(arr)/sizeof(int);

    // if(arr[0]>=0) s.push(arr[0]);

    for(int i=0;i<size;i++)
    {
        if(s.empty())   s.push(arr[i]);
        else if(arr[i]>0)
        {
            if(s.top()>0)
            {
                s.push(arr[i]);
            }
            else{
                s.pop();
            }
        }
        else{
            if(s.top()<0)
            {
                s.push(arr[i]);
            }
            else {
                s.pop();
            }
        }
    }

    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}