#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

// Method--1--> Naive approach
// bool checkPrime(int n)
// {

//     if(n<=1) return false;
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             return false;
//         }
//     }

//     return true;
// }

// Method-2--> sqrt Approach
// bool checkPrime(int n)
// {

//     if(n<=1) return false;
//     for(int i=2;i<=sqrt(n);i++)
//     {
//         if(n%i==0)
//         {
//             return false;
//         }
//     }

//     return true;
// }


// method-3--> sieve of eratosthenes
// int countPrimes(int n)
// {
//     if (n==0) return 0;

//     vector<bool> Prime(n,true);

//     Prime[0] = Prime[1] = false;
//     int ans =0;
//     for(int i=1;i<n;i++)
//     {
//         if(Prime[i])
//         {
//             ans++;
//             int j = 2*i;
//             while(j<n)
//             {
//                 Prime[j] = false; //mark as non-prime
//                 j += i;
//             }
//         }
//     }

//     return ans;

// }

// method-4--> Segmented sieve
int countPrimes(int low, int high)
{
    

    vector<int> v(high,true);
    int ans = 0;

    v[0] = v[1] = false;


    for(int i = low;i<=high;i++)
    {
        if(v[i])
        {
            ans++;
            int j = 2*i;
            while(j<=high)
            {
                v[j] = false;
                j+=i;
            }
        }
    }

    return ans;
}

// method-5 --> updated Sieve array
int countPrimes_updatedSieveMethod(int n)
{
    if (n==0) return 0;

    vector<bool> Prime(n+1,true);

    Prime[0] = Prime[1] = false;
    int ans =0;
    for(int i=2;i*i<=n;i++)
    {
        if(Prime[i])
        {
         
            int j = i*i;
            while(j<=n)
            {
                Prime[j] = false; //mark as non-prime
                j += i;
            }
        }
    }

    // we can't do ans++ above the code because it is traversed only to root(n)
   for(int i=0;i<Prime.size();i++)
   {    
       if(Prime[i]) ans++;
   }

    return ans;
}
int main()
{
    // int first=0;
    // int second=10;


    // int count=0;
    // for(int i=first;i<=second;i++)
    // {
    //     if(checkPrime(i))
    //     {
    //         count++;
    //     }
    // }

    // cout << "The number of primes: "<<count;


    // for Mthod-3;
    // cout << "no of prime number from 1 to 10 : "<< countPrimes(10);

    // method-4--> segmented sieve

    // cout << "no of prime number from 1 to 15 : "<< countPrimes(1,15);


    // method-5
    cout << "ans: "<<countPrimes_updatedSieveMethod(10);


    
}