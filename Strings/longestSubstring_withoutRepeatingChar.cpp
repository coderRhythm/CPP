#include<iostream>
#include<map>
#include<set>
using namespace std;
int main()
{
    string s = "abcdabcbb";
    
    map<char,int> m;
    for(char ch = 'a'; ch<='z'; ++ch)
    {
        m[ch] = 0;
    }

    int i = 0;
    int j = 0;
    int ans = -1;
    while(j<=s.length()-1)
    {
        m[s[j]]++;

        // checking 
        while(m[s[j]]>1)
        {
            m[s[j]]--;
            i++;
        }

        //assign maximum
        ans = max(ans,j-i+1);

        j++;
    }

    cout << ans;
}