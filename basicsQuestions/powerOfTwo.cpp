#include<iostream>
using namespace std;
int main()
{
    int a = 65;
    int flag=1;
    int x = a/2;
    
    while(x!=1)
    {
        if(a%2!=0)
        {
            cout << "no";
            flag=0;
            break;
        }
        a/=2;
        x = a;


    }
    if(flag==1)
    cout << "true";
}