#include<iostream>
#include<string.h>
#include<map>

using namespace std;

int main()
{
    string s = "aabcddeaaeeeccccsssdd";

    map<char,int> m;

    for(char ch = 'a'; ch<='z'; ch++)
    {
        m[ch] = 0;
    }


    for(char ch = 0; ch<s.length(); ch++)
    {
        m[ch]++;
    }

    char maxchar ='a';
    char maxnumber = 0;

    auto it = m.begin();
    
    while(it!=m.end())
    {
       if(maxnumber<it->second)
       {
        maxchar = it->first;
        maxnumber = it->second;
       }
    }



}