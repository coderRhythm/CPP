#include<iostream>
using namespace std;

void change(int arr[], int size, int index)
{
    if(index>=size)
    {
        return;
    }

    arr[index] = arr[index]*2;

    change(arr,size, index+1);
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(int);

    int index = 0;


    // using recursion
    change(arr,size,index);

    for(int i=0;i<size; i++)
    {
        cout << arr[i] << " ";
    }
}