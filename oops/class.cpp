#include<iostream>

using namespace std;

class student{
    string gfName;
    student(string gfName)
    {
        this->gfName = gfName;
    }


    public:
    string name;
    int age;
    bool present;
    int nos;

    // CONSTRUCTOR-->
    //parametrized contructor
    // we can also use copy constructor without making the copy contructor 
    student(string name, int age, bool present, int nos)
    {
        this->name = name;
        this->age = age;
        this->present = present;
        this->nos = nos;
    }

    //copy contructor
    student(const student&srcobj)    //const--> we can't change any value in this copy const function 
    {
        this->name = srcobj.name;
        this->age = srcobj.age;
        this->present = srcobj.present;
        this->nos = srcobj.nos;
    }

   
    //DESTRUCTOR
    ~student()
    {
        cout << "destructor called: ";
    }


};
int main()
{
     //this student object stores in stack
    student s1("Chotta bheem",19,true,5);

    // assigning 
    s1.name = "rhythm";
    s1.age = 19;
    
    // //to allocate in heap , we use different syntax
    // student *s1   = new student("bheem",19,true,5);


    cout << "for s1: "<<s1.name << " " << s1.age<<endl;
    
    
    // copy contructor
    student s2(s1); //this is only copy the data members (not the member function)


    cout << "for s2: "<<s2.name << " " << s2.age << endl;
    //after using s1 we can delete because it is stores in heap
    // delete s1; --> no leak

    
}