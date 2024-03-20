#include<iostream>
using namespace std;

int ncr(int n, int r)
{
    int res =1;
    for(int i=0;i<r;i++)
    {
        res = res*(n-i);
        res = res/(i+1);
    }

    return res;
}

int main()
{
    int n = 5;
    //printing the pascal traingle 
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
           cout << ncr(i,j) << " ";
        }

        cout << endl;
    }
}