#include<iostream>
using namespace std;
// binary search using recursion 
bool bin_search(int a[], int start, int end, int size)
{
    int target  = 5;
    if(start>end)
    {
        // cout << "ending start: "<< start << " and ending end is : "<<end << endl;
        return false;
    }
    else {
        // cout << "start: "<< start << " and end is: "<<end << endl;
        int mid = start+((end-start)/2);

        if(a[mid]== target)
        {   
            return true;
        }
        else if(a[mid]> target)
        {
            // cout << start << " " << end;
            return bin_search(a,start,mid-1,size);
        }
        else if(a[mid]<target)
        {
            return bin_search(a,mid+1,end,size);
        }
    }
}
int main()
{
    int arr[] = {1,2,3,4};

   cout <<  bin_search(arr,0,3,4);
}