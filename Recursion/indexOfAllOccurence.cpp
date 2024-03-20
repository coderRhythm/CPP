#include<iostream>
#include<vector>
using namespace std;
//  we have to store all the occurenceIndex in the vector
void findingOccurence(int a[], int size, int index, int target, vector<int> &v)
{
    if(index==size)
    {
        return ;
    }

    //recursion
    if(a[index] == target)
    {
        v.push_back(index);
    }

    findingOccurence(a,size,index+1,target ,v);
}
int main()
{
    int a[] = {1,2,3,1,4,1};
    vector<int> v;
    int size = sizeof(a)/sizeof(int);
    findingOccurence(a,size,0,1,v);
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";

    }
}