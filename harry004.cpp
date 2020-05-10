#include <iostream>
#include <vector>
using namespace std;


int main()
{
   // Find the largest palindrome made from the product of two 3-digit numbers.
    string product = "";
    string product_reverse = "";
    
    vector <int> palindrom_product;
    
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            product_reverse = to_string(i*j);
            reverse(product_reverse.begin(), product_reverse.end());
            product = to_string(i*j);
            
            if (product_reverse == product)
            {
                palindrom_product.push_back(stoi(product));
            }
            
            
        }
    }
    cout << *max_element(palindrom_product.begin(), palindrom_product.end());
   
    
}
