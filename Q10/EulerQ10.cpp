#include <iostream>
#include <vector>

using namespace std;

int main () {

  int N=2000000;
  long int sum=2;
  vector<int> primes;
  primes.push_back(2); //this starts the vector at 2

  for (int i=3; i<N; i+=2) {   //no need for even numbers

    bool isPrime = true;

    for (int j=0; j<primes.size() && primes[j]*primes[j] <= i; j++) {
      if (i%primes[j] == 0) {
	isPrime = false;
	break;
      }
    }
    if (isPrime) {
      primes.push_back(i);
      sum += i;
    }
  }
  
  cout << "Sum of primes: " << sum << endl;
  
  return 0;
}
