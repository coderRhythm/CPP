#include<iostream>
using namespace std;
int main()
{
    int num = 14;

    int ans = 0, rem;
    int mul = 1;

    while(num)
    {
        //rem
        rem = num%2;

        // update num
        num/=2;

        ans = rem*mul + ans;
        // cout << ans;
        // cout << endl;

        // update mul
        mul*=10;


    }

    cout << ans;

}