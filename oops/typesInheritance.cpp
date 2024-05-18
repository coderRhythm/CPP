#include<iostream>
using namespace std;

/*
    
    In inheritance, firstly base constructor is called then derived constructor is called

    but in destructor, firstly derived destructor is called then base desctrutor is called

*/

// single inheritance: student->human

class human{
    public:
    string name;
    int age;

    human()
    {
        cout << "human selected\n";
    }

    void display()
    {
        cout << "human display called";
    }
};

class student: public human{
    public:
    student()
    {
        cout << "student called\n";
    }

    void display(){
        cout << "student display called\n";
    }
};
int main()
{
    student s;

}