#include <iostream>

using namespace std;

int main() {

  //const char *firstLetters[20] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
  int firstNumbers[] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
  //const char *letterTens[8] =  { "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
  int numberTens[] = {6, 6, 5, 5, 5, 7, 6, 6};
  //const char *letterHundreds[9] = {"Onehundred", "Twohundred", "Threehundred", "Fourhundred", "Fivehundred", "Sixhundred", "Sevenhundred", "Eighthundred", "Ninehundred"};
  int numberHundreds[] = {10, 10, 12, 11, 11, 10, 12, 12, 11};
  int sum = 0;
  int hundredsum = 0;
  int repeatsum = 0;
  int totalsum = 0;
  

  for (int i=0; i<20; i++) {
    sum += firstNumbers[i];
  }

  for (int i=0; i<8; i++) {
    for (int j=0; j<10; j++) {
      sum += numberTens[i] + firstNumbers[j];
    }
  }

  for (int i=0; i<9; i++) {
    hundredsum += numberHundreds[i];
    repeatsum += 99*(numberHundreds[i]+3);
  }

  totalsum = 10*sum + hundredsum + repeatsum + 11;
  cout << totalsum << endl;
  
  return 0;
}
