#include<iostream>
using namespace std;
int main()
{
    int a = 2;
    int* ptr  = &a;
    int** ptr1 = &ptr;
    
    cout << "The value of a : "<<*ptr<<endl;
    cout << "the value of a: "<<**ptr1<<endl;

}