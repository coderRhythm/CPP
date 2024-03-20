#include<iostream>
using namespace std;
int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int sum=0;
    int maxi = -1;
    int start = 0;
    int end = 0;

    for(int i=0; i<8;i++)
    {
        if(sum==0) {
            start = i;
        }


        sum+=arr[i];

        if(sum>maxi)
        {
            maxi = sum;
            start = start;
            end = i;
        }
        if(sum<0)
        {
            sum=0;
        }

    }

    cout << maxi;
}