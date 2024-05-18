#include<iostream>
using namespace std;
class human{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
};
int main()
{
    human Rohit;
    // Rohit.a = 10; --> gives the error
    // Rohit.b = 11;  --> this also gives the error
    Rohit.c  = 12;
    cout << Rohit.c;

}