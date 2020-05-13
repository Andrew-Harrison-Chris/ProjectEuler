#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    string hundred = "hundred";
    string hundredand = "hundredand";
    long length = 0;
    string numbers[29] = {"zero","one","two","three","four",
                     "five","six","seven","eight","nine","ten","eleven","twelve",
                     "thirteen","fourteen","fifteen","sixteen","seventeen","eighteen",
        "nineteen","twenty","thirty","forty","fifty","sixty",
        "seventy","eighty","ninety"};
    
    // 1 - 19
    for (int i = 1; i < 20; i++)
    {
        cout << numbers[i] << endl;
        length += numbers[i].length();
    }
    
    // 20-99
    for (int i = 20; i < 28; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 0)
            {
                cout << numbers[i] << endl;
                length += numbers[i].length();
            }
            else
            {
                cout << numbers[i];
                cout << numbers[j];
                cout << endl;
                length += numbers[i].length() + numbers[j].length();
            }
            
        }
    }
    // 100-999
    for (int i = 1; i < 10; i++)
    {
        cout << numbers[i];
        cout << "hundred";
        cout << endl;
        length += numbers[i].length() + hundred.length();
        
        for (int j = 1; j<20;j++)
        {
            cout << numbers[i];
            cout << "hundredand";
            cout << numbers[j];
            cout << endl;
            length += numbers[i].length() + numbers[j].length() + hundredand.length();
        }
        for (int k = 20; k < 28; k++)
        {
            for (int l = 0; l < 10; l++)
            {
                if (l == 0)
                {
                    cout << numbers[i];
                    cout << "hundredand";
                    cout << numbers[k] << endl;
                    length += numbers[i].length() + hundredand.length() + numbers[k].length();
                }
                else
                {
                    cout << numbers[i];
                    cout << "hundredand";
                    cout << numbers[k];
                    cout << numbers[l];
                    cout << endl;
                    length += numbers[i].length() + hundredand.length()+numbers[k].length()+numbers[l].length();
                }
                
            }
        }
        
        
        
    }
    cout << "onethousand" << endl;
    length += 11;
    cout << length << endl;

}
