#include<iostream>
using namespace std;
class abc{
    int x;
    int* y;

    public:
    abc(int x,int* y, int _x = 0, int* _y = new int(0))   //now initializing default arguement
    {
        
        this->x = x;
        this->y = new int(*y);
    }

    int getX() //const   //ab is funciton ke under koi bhi variable kisi bhi value se assign nhi hoga --> hame bas funciton ke baad const likhna hota hai 
    {
        return x;
    }
    void setx(int x)
    {
        this->x = x;

    }

    int getY()
    {
        return *y;
    }
    void setY(int value)
    {
        *y =  value;
    }


};
int main()
{
    // const int a = 1;
    // a = 2  this gives the error because const cannot be modifieable 

    // const with pointers
    // const int *a = new int(2);

    // cout << "initially printing: "<< *a << endl;

    // int b  =10;
    // a = &b;
    // cout<< "after printing: "<< *a << endl;



    // int* const a = new int(2);
    // *a = 20; yeh chal jaega 
    // but 
    // int b = 3;
    // // a = &b;--> yeh nhi chalenga 


    // // const pointer, const data
    // const int* const a = new int(10);
    // // but 
    // // *a = 20 --> error
    


    // now using class
    abc a(1,0);
    
    cout << a.getX() << " "<<a.getY()<<endl;



}