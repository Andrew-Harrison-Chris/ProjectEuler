#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    // Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
    int sum_squares = 0;
    int sum = 0;
    
    for (int i = 1; i < 101; i++)
    {
        sum_squares += pow(i, 2);
        sum += i;
    }
    int sum_squared = pow(sum,2);
    cout << sum_squared - sum_squares << endl;
}
