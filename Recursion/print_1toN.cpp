#include<iostream>
using namespace std;

// couting from N to 1
// void print(int n)
// {
//     if(n==0)
//     {
//         return;
//     }

//     cout << n << endl;
//     print(n-1);
// }


// couting from 1 to N
void print(int n)
{
    if(n==0)
    {
        return;
    }

    print(n-1);
    cout << n << endl;

}

int main()
{
    print(4);
}