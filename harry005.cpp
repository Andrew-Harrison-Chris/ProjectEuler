#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isDivisible(int n)
{
    for (int i = 1; i < 21; i++)
    {
        if ((n % i) != 0)
        {
            return false;
        }
    }
    return true;

}

int main()
{
    // What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
    int num = 2250;
    while (num < 1000000000)
    {
        if (isDivisible(num))
        {
            cout << num << endl;
            break;

        }
        num++;
    }
    
    
}
