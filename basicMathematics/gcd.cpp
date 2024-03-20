#include<iostream>
using namespace std;

// gcd(a,b) = gcd(a-b,b) or gcd(a,b-a);



int gcd(int a, int b)
{
    if(a==0) return b;
    if(b==0) return a;

    while (a>0 and b>0)
    {
        if(a>b)
        {
            a= a-b;
        }
        else b = b-a;

    }
    
    return a==0? b:a;
}

int main()
{
    cout << gcd(3,6);
}