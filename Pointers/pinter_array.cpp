#include<iostream>
using namespace std;

void solve(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }


    cout << "the address of \"solve\" function of arr: " << &arr;
    cout << "the address of solve  function of the arr: " << arr;

}

int main()
{
    int arr[]={1,2,3,4};
    cout << "the address of main function of the arr: " << &arr<<endl;
    cout << "the address of main function of the arr: " << arr<<endl;
    solve(arr,4);

}