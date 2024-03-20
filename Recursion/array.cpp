#include<iostream>
using namespace std;
// void printArray(int a[], int n)
// {
//     if(n==0)
//     return;

//     cout << *a << endl;
//     printArray(a+1,n-1);
// }


void printArray(int A[], int size, int index)
{
    if(index>=size)
    {
        return;
    }
    cout << A[index] << " ";
    printArray(A,size, index+1);
}
int main()
{
    int arr[] = {1,2,3,4};

    printArray(arr,4,0);
}