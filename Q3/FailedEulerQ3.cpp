#include  <iostream>
#include  <cmath>

using namespace std;
int Xfunc(long int N);

int main ()  {


  long int N = 8012345;
  int x, a, b = 0;
  double y = 0;
 
  x = Xfunc(N);

  for (int i=x; i<N; i++) {
    y = x*x-N;
    if (sqrt(y) == (int)sqrt(y)) {
      a = x - sqrt(y);
      b = x + sqrt(y);;
      cout << "x: " << x << endl;
      cout << "y: " << sqrt(y) << endl;
      cout << "x-y = " << a << endl;
      cout << "x+y = " << b << endl;
      cout << "Largest Prime: " << b << endl;
      exit(0);
    } else {
      x = x+1;
      cout << "y: " << sqrt(x*x-N) << endl;
    }
  }

  return 0;
}

int Xfunc(long int N) {
  double x=0;
  if (sqrt(N) == (int)sqrt(N)) {
    x = sqrt(N);
  } else {
    x = static_cast<int>(sqrt(N)) + 1;
  }
  return x;
}
