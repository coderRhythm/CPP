#include<iostream>
#include<limits>
using namespace std;
void findMini(int a[] , int index,int size, int& mini)
{
    if(index>=size)
    {
        return;
    }
    
    //preprocessing
    mini = min(mini, a[index]);

    //Recursion
    
}
int main()
{
    int a[] = {1,2,3,4};
    
}