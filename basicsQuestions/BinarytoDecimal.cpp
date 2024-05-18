#include<iostream>
using namespace std;
int main()
{
    int num = 1110;

    int ans = 0;
    int rem;

    int mul = 1;
    while(num)
    {
        //remainder
        rem = num%10;

        //quotient
        num = num/10;

        //ans
        ans =ans+(mul*rem);

        //update the mul
        mul = mul*2;
    }


    cout << ans;
      
}