#include <iostream>

using namespace std;

int main () {

  long int number = 600851475143;
  long int largest_factor;

  for (long int factor = 2; factor <=number/factor; ++factor)
    if (number%factor == 0) {
      largest_factor = factor;
      do number/= factor; while (number % factor == 0);
    }
    if (number != 1) largest_factor = number;

    cout << "Largest Prime factor is: " << largest_factor << endl;

  return 0;
}
