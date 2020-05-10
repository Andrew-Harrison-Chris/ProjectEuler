#include <iostream>

using namespace std;

int main () {

  int x1 = 0;
  int x2 = 1;
  int x3, sum = 0;

  x3 = x1+x2;
  
  while (x3 <= 4000000) {
    cout << x3 <<endl;
    x1 = x2;
    x2 = x3;
    if (x3%2 == 0) {
      sum += x3;
    }
    x3 = x1+x2;

  }
  cout << "The sum equals: " << sum << endl;
  return 0;
}
