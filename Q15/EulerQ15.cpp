//I think thats the first time I ever put a function
//inside of another function and I'm very proud of myself. 


#include <iostream>

using namespace std;

double Factorial(int x);
double Choose(int m, int n);

int main () {

  int m = 20;
  int n = 20;

  cout.precision(13);
  cout << Choose(m, n) << endl;

  
  return 0;
}

double Factorial(int x) {
  
  double f=1;
  for (int i=x; i>0; i--) {
    f *= i;
  }
  return f;
}

double Choose(int m, int n) {

  double chooseTop = 1;
  for (int i=m+n; i>m; i--) {
    chooseTop *= i;
  }

  return chooseTop/Factorial(m);

}
