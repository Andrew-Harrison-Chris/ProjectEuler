#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long grid_problem(int n)
{
    long num = 1;
    for (int i = 1; i <= n; i++)
    {
        num = num * (n + i) / i;
    }
    return num;
}

int main()
{
    cout<< grid_problem(20) << endl;
}
