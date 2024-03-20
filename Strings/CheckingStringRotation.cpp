#include<iostream>
#include<string.h>
// checking if string is rotated by two places
using namespace std;

void checkingleft(string &s)
{
    char first = s[0];
    for(int i=0;i<s.size()-1;i++)
    {
        s[i] = s[i+1];
    }

    s[s.size()-1] = first;


}

void checkingright(string &s)
{
    char last  = s[s.size()-1];

    //now rearranging element by 1 to left
    int i = s.size()-2;

    while(i>=0)
    {
        s[i+1] = s[i];
        i--;
    }

    s[0] = last;
}

int main()
{
    string str1 = "ababbc";
    string str2 = "bcabab";

    string clockwise = str1;
    string anticlockwise = str2;

    checkingright(clockwise);
    checkingright(clockwise);

    if(clockwise==str2)
    {
        cout << "true";
    }
    else cout << "false";


}