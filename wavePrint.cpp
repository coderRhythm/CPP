#include<iostream>
using namespace std;
int main()
{
    int ** arr = new int*[3];
    cout << "initializing two d pointer array"<<endl;
    for(int i=0;i<3;i++)
    {
        arr[i] = new int[3];
    }
    cout << "Enter the elements:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> arr[i][j];
        }
    }


    cout << "printing the wave like structure:-->";
    cout << endl;
    for(int j=0;j<3;j++)
    {
        if(j%2==0)
        {
            for(int i=2;i>=0;i--)
            {
                cout << arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<=2;i++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}


