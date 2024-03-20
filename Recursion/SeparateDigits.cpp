#include<iostream>
#include<vector>
using namespace std;

void seperateDigit(int integer, vector<int> &v)
{

    if((integer)==0)
    {
        return;
    }

    seperateDigit(integer/10, v);
    v.push_back(integer%10);
}
int main()
{
    int integer = 123;
    vector<int> v;
    // cout << "hello";
    seperateDigit(integer,v );

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
}