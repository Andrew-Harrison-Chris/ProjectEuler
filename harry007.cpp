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
    // What is the 10 001st prime number?
    int num = 2;
    int counter = 1;
    
    while (num < 110000)
    {
        if (isPrime(num))
        {
            if (counter == 10001)
            {
                cout << num << " is " << counter << " prime" << endl;
            }
            counter++;
        }
        num++;
        
    }
    
}
