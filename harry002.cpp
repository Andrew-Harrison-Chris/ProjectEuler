#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int x)
{
   if (x <= 1)
   {
       return x;
   }
    
   return fibonacci(x-1) + fibonacci(x-2);
}
int main()
{
    // By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
    int x = 0;
    int sum = 0;
    
    while (fibonacci(x) < 4000000)
    {
        if (fibonacci(x) % 2 == 0)
        {
            sum += fibonacci(x);
            
        }
        x +=1;
    }
    cout << sum << endl;
}
