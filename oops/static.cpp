#include<iostream>
using namespace std;
class abc{
    public:
    static int x,y;
    
    // we can define the static member function also
    static void printing()
    {
        cout << "hello ia ma static member"<<endl;
    }
    void print() const
    {
        cout <<this->x << " " << this->y<< " "<< endl;
    }
};

int abc::x;
int abc:: y;


int main()
{
    // we can pass object in this ALSO
    // abc obj1  = {1,2};
    // abc obj2 = {3,4};

    // NOW WE HAVE TO DEFINE THE STATIC 
    abc obj1,obj2;

    obj1.x = 2;
    obj1.y = 3;
    obj1.print();
    obj2.print();
    obj1.printing();
    obj1.x = 4;
    obj2.y = 5;
    obj1.print();
    obj2.print();
}