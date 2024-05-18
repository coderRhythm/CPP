#include<iostream>
using namespace std;
class Human{
    string religion,color;
    public:
    string name;
    int age, weight;

    
};



//derived class
class student: private Human{
    int rollno;
    int fees;
    public:
    student(string name, int age, int weight, int roll_number)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->rollno = roll_number;
    }

    void display()
    {
        cout << name << " "<<age << " "<< weight << " "<< rollno<<endl;
    }
};

class teacher : public Human{
    private:
    int id;


};

int main()
{
    // student a("rhythm",20,73,57);

    // a.display();

    teacher t;
    t.name = "rhythm";
    cout << t.name;

}