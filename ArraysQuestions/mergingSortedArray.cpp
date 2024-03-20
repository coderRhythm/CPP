#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i=0,j=0;
    int a[] = {1,2,4,5,7};
    int b[] = {3,6,8,9};
    int n1 = sizeof(a)/sizeof(int);
    int n2 = sizeof(b)/sizeof(int);
    vector<int> v;
    while(i<n1 and j<n2)
    {

        if(a[i]>b[j])
        {
            v.push_back(b[j]);
            j++;
        }
        else if(b[j]>a[i])
        {
            v.push_back(a[i]);
            i++;
        }
    }


    if(i<n1)
    {
        // cout << "hello1";
        for(int k=i;k<n1;k++)
            v.push_back(a[k]);
    }
    else if(j<n2){
        // cout << "hello2";
        for(int k=j;k<n2;k++)
            v.push_back(b[k]);
    }


    for(int f= 0 ; f<8;f++)
    {
        cout << v[f] << " ";
    }
}