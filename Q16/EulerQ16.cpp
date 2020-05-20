#include<iostream>

using namespace std;

 
int main(){

  int i, j, arr[1000];

  //initialize array
  for(i=0; i<999; i++){
    arr[i]=0;
  }
  arr[999]=1;
  //input ends
  
  for(int k=0; k<1000; k++){
    i=999;
    do{
      arr[i] *= 2;
      i--;
    }while(i >= 0);
    //carry operatons
    j=999;
    while(j>=0){
      if(arr[j]>9){
	arr[j-1] += ((arr[j] - (arr[j]%10))/10);
	arr[j] %= 10;
      }
      j--;
    }
    //carry operations end
  }
  long int sum=0;
  for(i=0; i<1000;i++){
    sum+=arr[i];
  }

  cout << sum << endl;
  return 0;
  
}
