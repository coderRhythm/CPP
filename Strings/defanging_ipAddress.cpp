#include<iostream>
using namespace std;

string changingform(string address,int n)
{
    string ans = "";

    int index= 0 ;
    while(index<n)
    {
        if(address[index]=='.')
        {
            ans+="[.]";
        }
        else {
            ans+=address[index];
        }

        index++;
    }

    return ans;
}

int main()
{
    string address = "1.1.1.1";
    // int index = 0;
    string ans = changingform(address,address.length());
    cout << "original ip address: "<<address<<endl;
    cout << "new ip address: "<< ans << endl;
}