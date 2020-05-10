#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int Reverse(int n);

int main () {

  int n=0;
  vector<int> pal;
  
  
  for (int i=999; i>99; i--) {
    for (int j=999; j>99; j--) {
      n = i*j;
      if (n == Reverse(n)) {
	cout << " Palindrome added: " << n << endl;
	pal.push_back(n);
      }
    }
  }
  int max = *max_element(pal.begin(), pal.end());
  cout  << "Largest Palindrome: " << max << endl;
  return 0;
}

int Reverse(int n) {
  int num=0;
  int rev=0;
  int digit=0;
  num = n;
  do {
    digit = num%10;
    rev = (rev*10) +  digit;
    num =  num/10;
  } while (num!=0);

  return rev;
}
    
