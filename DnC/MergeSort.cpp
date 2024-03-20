#include<iostream>
using namespace std;
void merge(int arr[], int start, int end)
{
    int mid = start+(end-start)/2;

    int lenleft = mid-start+1;
    int lenright = end-mid;

    // create the left and right array 
    int *left = new int[lenleft];
    int *right = new int[lenright];
    int k = start;
    // copy values from the original left and right array 
    for(int i=0;i<lenleft;i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid+1;
    // copy value to right array 
    for(int i=0;i<lenright;i++)
    {
        right[i] = arr[k];
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;

    int mainIndex = start;

    // merging 
    while(leftIndex<lenleft and rightIndex<lenright)
    {
        if(left[leftIndex]<right[rightIndex])
        {
            arr[mainIndex] = left[leftIndex];
            leftIndex++;
            mainIndex++;
        }
        else{
            arr[mainIndex] = right[rightIndex];
            rightIndex++;
            mainIndex++;
        }
    }

    //if left array is still not empty
    while(leftIndex<lenleft)
    {
        arr[mainIndex] = left[leftIndex];
        mainIndex++;
        leftIndex++;
    }

    //right index still not empty 
    while(rightIndex<lenright)
    {
        arr[mainIndex] = right[rightIndex];
        rightIndex++;
        mainIndex++;
    }

    delete[] left;
    delete[] right;
    
}
void mergeSort(int arr[], int start, int end)
{
    if(start>=end)
    {
        return;
    }

    //left
    mergeSort(arr,start,(start+(end-start)/2));

    //right
    mergeSort(arr,(start+(end-start)/2)+1,end);

    //merging 
    merge(arr,start,end);
}
int main()
{
    int arr[] = {1,3,2,5,6,4};
    int size = sizeof(arr)/sizeof(int);
    cout << "Before sorting:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;


    mergeSort(arr,0,size-1);
    cout << "After sorting:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}