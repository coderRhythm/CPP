#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    

    //processing
    int rec = factorial(n-1);

    int n1 = n*rec;

    return n1;

}

int main()
{
    int n = factorial(5);

    cout << "the factorial of n: "<<n<< endl;
}