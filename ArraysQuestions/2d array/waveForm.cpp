#include<iostream>
using namespace std;
int main()
{
    int arr[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin >> arr[i][j];
        }
    }

    //printing in wave form
    for(int j=0;j<4;j++)                 // taking the column
     {
        if(j%2==0)
        {
            for(int i=0;i<4;i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else {
            for(int i=3;i>=0;i--)
            {
                cout << arr[i][j] << " ";
            }
        }

        cout << endl;
    }


}