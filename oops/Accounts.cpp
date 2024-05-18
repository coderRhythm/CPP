#include<iostream>
using namespace std;
class customer
{
    string name;
    int amount;
    static int total_customer;

    public:
    customer(string name, int amount)
    {
        this->name = name;
        this->amount = amount;
        total_customer++;

    }
    void printCustomer()
    {
        cout << total_customer;

    }
    void printAmount()
    {
        cout << amount;
    }

    void printName()
    {
        cout << name;
    }
    void deposit(int amount)
    {
        this->amount+=amount;
    }

    void withdraw(int amount)
    {
        this->amount-=amount;
    }

};

int customer:: total_customer = 0;
int main()
{
    // initalizing object 
    customer c1("name1",1000);
    customer c2("name2",1100);
    customer c3("name3",1200);
    
    // deposit and withdrw
    // c1.deposit(1000);

    // c1.withdraw(200);

    // c1.printAmount();

    // lets suppose we have to calculate total people who created the account
    // we have to make the total customer in this case 
    // we have to make a static variable of total customer so that it access to all customer 
    c1.printCustomer();

}