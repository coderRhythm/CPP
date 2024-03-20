#include<iostream>
using namespace std;

void findingSubsequence(string s, string output, int index)
{
    if(index>=s.length())
    {
        cout << "->"<< output << endl;
        return;
    }

    char ch = s[index];

    //exclude
    findingSubsequence(s,output, index+1);

    //include
    output.push_back(ch);

    findingSubsequence(s,output,index+1);
    
}

int main()
{
string s = "abc";
string output = "";
int index = 0;
// cout << "->"<<endl;
findingSubsequence(s,output,index);
}