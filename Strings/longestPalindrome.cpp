/*

    class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]=0;
        }
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            
        }

        int count=0;
        int count1 = 0;
        bool odd=0;
        for(char i='a';i<='z';i++)
        {
            cout << m[i] << endl;
            if(m[i]%2==0)
            {
                count+=m[i];
            }
            else {
                count+=(m[i]-1);
                odd = 1;
            }

            
        }
        int odd1 = 0;
        for(char  i= 'A'; i<='Z';i++)
        {
            if(m[i]%2==0)
            {
                count+=m[i];
            }
            else {
                count+=(m[i]-1);
                odd = 1;
            }
        }

        return count+odd;
    }
};
*/