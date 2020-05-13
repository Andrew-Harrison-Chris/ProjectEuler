#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long collatz_length(long start)
{
    long current = start;
    int length = 0;
    while (current != 1)
    {
        
        if (current % 2 == 0)
        {
            current =  current / 2;
            length++;
        }
        else
        {
            current = 3*current + 1;
            length++;
        }
    }
    length++;
    return length;
}
int main()
{
    long lengths = 0;
    int max_val = 0;
    for (int i = 1; i < 1000000; i++)
    {
        
        if (collatz_length(i) > lengths)
        {
            lengths = collatz_length(i);
            max_val = i;
        }
    }
    cout << max_val << endl;
}
