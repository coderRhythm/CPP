#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<vector<int>> v;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin >> v[i][j];
        }
    }

    //logic  the transpose
    for(int i=0;i<4-1;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }

    //printing the transpose
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout << v[i][j];
        }
    }
}