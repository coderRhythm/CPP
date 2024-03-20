#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> v(3,vector<int>(3,0));
    cout << "Enter the elements:"<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> v[i][j];
        }
    }


    int row = v.size();
    int col = v[0].size();
    int total = row*col;

    int starting_row = 0;
    int ending_col   = col-1;
    int ending_row = row-1;
    int starting_col = 0;

    vector<int> ans;
    int count =0;
    while(count<total)
    {
        for(int i = starting_col;i<=ending_col && count<total;i++)
        {
            ans.push_back(v[starting_row][i]);
            count++;
        }
        starting_row++;
        for(int i = starting_row;i<=ending_row && count<total;i++)
        {
            ans.push_back(v[i][ending_col]);
            count++;
        }
        ending_col--;

        for(int i = ending_col;i>=starting_col && count<total;i--)
        {
            ans.push_back(v[ending_row][i]);
            count++;
        }
        ending_row--;
        for(int i = ending_row;i>=starting_row && count<total;i--)
        {
            ans.push_back(v[i][starting_col]);
            count++;
        }
        starting_col++;
    }
}       