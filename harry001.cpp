#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Find the sum of all the multiples of 3 or 5 below 1000
    int sum = 0;
    for (int i=0; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
}