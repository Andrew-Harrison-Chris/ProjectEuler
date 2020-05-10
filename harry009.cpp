#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main()
{
    // There exists exactly one Pythagorean triplet for which a + b + c = 1000.
    // Find the product abc.
    
    int a,b,c,product;
    for (int i = 1; i < 500; i++)
    {
        a = i;
        for (int j = 2; j < 500; j++)
        {
            b = j;
            for (int k = 3; k < 500; k++)
            {
                c = k;
                if ((pow(a,2) + pow(b,2) == pow(c, 2)) && (a+b+c==1000))
                {
                    product = a*b*c;
                    cout << product;
                    break;
                }
                
                
            }
        }
    }
}
