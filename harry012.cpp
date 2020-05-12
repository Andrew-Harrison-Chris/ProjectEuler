#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int num_factors(int n)
{
  int num = 0;
  
  for (int i = 1; i*i<=n; i++)
  {
    if (n%i == 0)
    {
      num += 2;
    }
  }
  return num;
}
    

int main()
{
    int tri_num = 0;
    for (int i = 1; i < 10000000; i++)
    {
        tri_num += i;
        if (num_factors(tri_num) >= 500)
        {
            cout << tri_num << endl;
            break;
        }
        
    }
}
