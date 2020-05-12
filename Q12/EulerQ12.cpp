#include <iostream>

using namespace std;

int nFactors(int n);

int main () {

  int n = 1000000000;
  int j = 0;
  int factors=0;

  for (int i=1; i<=n; i++) {
    j = j+i;
    factors = nFactors(j);
    if (factors >= 500) {
    cout << j << endl;
    break;
    }
  }
    
  return 0;
}

int nFactors(int n) {

  int factors=0;
  
  for  (int i = 1; i*i<=n; i++) {
    if (n%i == 0) {
      factors += 2;
    }
  }
  return factors;
}
