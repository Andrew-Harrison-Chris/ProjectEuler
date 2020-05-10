#include <iostream>

using namespace std;

int gcd(int a, int b);
long long lcm(long long n);


int main () {

  long long n = 20;

  cout << lcm(n) << endl;
  
  return 0;
}
int gcd(int a, int b) {
  
  return b == 0 ? a : gcd(b, a%b);
}

long long lcm(long long n) {

  long long ans = 1;
  for (long long i = 1; i<= n; i++)
    ans = (ans * i)/(gcd(ans,i));
    return ans;
}


