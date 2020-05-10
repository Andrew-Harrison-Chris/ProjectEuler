#include <iostream>

using namespace std;

int main () {

  int n = 101;
  int squaresum = 0;
  int sum=0;
  
  for (int i=0; i<n; i++) {
    squaresum  += i*i;
    sum += i;
  }
  cout << "sum of squares of first " << n << " numbers is: " << squaresum << endl;
  cout << "square of sum of " << n << " digits is " << sum*sum << endl;

  cout << "difference between numbers is: " << sum*sum-squaresum << endl;

  return 0;
}
