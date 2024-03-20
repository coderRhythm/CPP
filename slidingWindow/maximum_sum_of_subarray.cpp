#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v= {2,3,1,0,5,6,4,9,8};
    int n = v.size();
    int j = 0;
    int i = 0;
    int max_sum  = -1;
    int sum = 0;
    int k = 3;
    while(j<n)
    {
        sum = sum+v[j];

        if((j-i+1)<k)
        {
            j++;
        }
        else if((j-i+1)==k){
            max_sum = max(max_sum,sum);
            sum = sum-v[i];
            i++;
            j++;
        }
    }

    cout << max_sum;

    



}