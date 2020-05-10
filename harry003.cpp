#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


bool isPrime(int x)
{
    if (x <= 1)
    {
        return false;
    }
  
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
  
    return true;
}

int main()
{
    // What is the largest prime factor of the number 600851475143 ?
    long d2f = 600851475143;
    int num = 0;
    vector <int> primes;
    
    while (num < sqrt(d2f))
    {
        if (isPrime(num) && (d2f % num == 0))
        {
            primes.push_back(num);
        }
        num += 1;
    }
    
     cout << *max_element(primes.begin(), primes.end());
    
    
}
