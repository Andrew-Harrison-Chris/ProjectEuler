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
    // Find the sum of all the primes below two million.
    long sum = 0;
    int i = 2;
    
    while (i < 2000000)
    {
        if (isPrime(i))
        {
            sum += i;
        }
        if (i % 87657 == 0)
        {
            cout << (float) i / 2000000 << "% done" << endl;
        }
        i++;
    }
    cout << sum << endl;
}
