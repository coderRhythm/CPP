#include<iostream>
using namespace std;
int power(int n)
{
    if(n==0)
    {
        return 1;
    }

    int n1 = 2*power(n-1);

    return n1;



}
int main()
{
    int n = power(3);
    cout << n;
}