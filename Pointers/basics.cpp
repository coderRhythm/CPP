#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int* b = &a;

    cout << a << endl;
    cout << *b << endl;
    int* ptr;
    cout <<"this is any ptr: "<< *ptr<< endl;
    char ch = 'a';
    char* cptr = &ch;

    cout << sizeof(b) << " " << sizeof(cptr) << endl;
}