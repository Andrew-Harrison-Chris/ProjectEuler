#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
// ;) this problem was not interestinf ;)

int main(){int num[1000],m,tmp,carry,sum=0;num[0]=1;m=1;tmp=0;carry=0;for(int i=0;i<1000;i++){for(int j=0;j<m;j++){tmp=num[j]*2+carry;num[j]=tmp%10;carry=tmp/10;
        }while(carry>0){num[m++]=carry%10;carry/=10;
        }}for(int i=0;i<m;i++)sum+=num[m-i-1];cout<<sum<<endl;}
