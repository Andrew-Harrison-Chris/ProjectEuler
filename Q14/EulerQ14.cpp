#include <iostream>

using namespace std;

int Counter(long int n);

int main () {

  int count = 0;
  int count_max = 0;
  long int i_max = 0;

  for (long int i=1; i<1000000; i++) {
    count = Counter(i);
    //cout << "Count[" << i << "]: " << count << endl;
    if (count >= count_max) {
      i_max = i;
      count_max = count;
    }
  }
  //cout << "Count max: " << count_max << endl;
  cout << "i max: " << i_max << endl;
  
  return 0;
}

int Counter(long int i) {
  int count = 0;

  while(true) {
    if (i%2==0) {
      i /= 2;
    }
    else {
      i = 3*i + 1;
    }
    count++;
    if (i==1){
      count ++;
      break;
    }
  }
  return count;
}
    
