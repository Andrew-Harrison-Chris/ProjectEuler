#include <iostream>
#include <cmath>

using namespace std;

///Thank you Harrison :) 

bool isPrime(int n);

int main () {

  int num = 2;
  int counter=1;

  while (num < 200000) {
    if (isPrime(num)) {
      cout << num << endl;
      if (counter == 10001) {
	cout << "The " << counter << " Prime number is: " << num << endl;
	exit(0);
      }
      counter++;
    }
    num++;
  }

  return 0;
}

bool isPrime(int n) {

  for (int i = 2; i<n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
