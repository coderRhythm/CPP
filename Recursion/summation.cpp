#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }

    

  int ans =   n + sum(n-1);

    return ans;
}

int main()
{
    int ans = sum(5);

    cout << ans;
}