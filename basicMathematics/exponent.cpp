#include<iostream>
using namespace std;

int fastExponentiation(int a, int b)
{
    int ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans = ans*a;
        }
        // else ans = a;
        a  = a*a;

        b = b>>1;


    }

    return ans;
    
}

// int slowExponentiation(int a, int b)
// {
//     int ans=1;
//     for(int i=1;i<=b;i++)
//     {
//         ans = a*ans;
//     }

//     return ans;
// }

int main()
{
    cout << fastExponentiation(2,4);
}