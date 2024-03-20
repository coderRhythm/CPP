#include<iostream>
#include<vector>

using namespace std;

bool CheckSort(int arr[], int index, int size)
{
    // base case
    if((index)>=size) return true;

    //preprocessing
    if(arr[index-1]>arr[index])
    {
        return false;
    }
    //preprocessing 
    CheckSort(arr,index+1,size);



}
int main()
{
    int arr[] = {1,2,3,4,5};
    int size=5,index=0;

    bool isSort = CheckSort(arr,index+1,size);

    cout << isSort << endl;
}