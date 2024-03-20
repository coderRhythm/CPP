#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int *a;
    int *b;
    for(int i=0;i<3;i++)
    {
        cin >> a[i];
    }

    for(int j=0;j<2;j++)
    {
        cin >> a[j];
    }


    int i = 2;
    int j = 1;

    int carry=0;
    int sum=0;
    int digit;
    vector<int> ans;
    while(i>=0 and j>=0)
    {
        sum = a[i]+b[j]+carry;
        digit = sum%10;
        ans.push_back(digit);
        carry = sum/10;

        i--;
        j--;

    }

    while(i>=0)
    {
        sum = a[i]+0+carry;
        digit = sum%10;
        ans.push_back(digit);
        carry = sum/10;
        i--;
    }


    while(j>=0)
    {
        sum = b[j]+carry;
        digit = sum%10;
        ans.push_back(digit);
        carry = sum/10;
        j--;
    }


    if(carry)
    {
        ans.push_back(carry);

    }

    while(ans[ans.size()-1]==0)
    {
        ans.pop_back();
    }
}