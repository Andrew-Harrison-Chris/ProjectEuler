#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main() {

  int n = 40;  // how many numbers total
  int x = 19;  // 1 - # of rows
  int y = 19; // 1 - # of columns
  int p = 0;
  int num[20][20];    // # of columns and rows you want 
  string a;
  string b;
  string s = "0802229738150040007504050778521250779108"
"4949994017811857608717409843694804566200"
"8149317355791429937140675388300349133665"
"5270952304601142692468560132567137023691"
"2231167151676389419236542240402866331380"
"2447326099034502447533537836842035171250"
"3298812864236710263840675954706618386470"
"6726206802621220956394396308409166499421"
"2455580566739926971778789683148834896372"
"2136230975007644204535140061339734313395"
"7817532822753167159403800462161409535692"
"1639054296353147555888240017542436298557"
"8656004835718907054444374460215851541758"
"1980816805944769287392138652177704895540"
"0452088397359916079757321626267933279866"
"8836688757622072034633674655123263935369"
"0442167338253911249472180846293240627636"
"2069364172302388346299698267598574043616"
"2073352978319001743149714886811623570554"
"0170547183515469169233486143520189196748";

  for (int i=s.size(); i>=n; i-=n)  {
    for (int j=1; j<=n; j+=2)  {
      a = s[i-j-1];
      b = s[i-j];
      p = stoi(a+b);
      num[x][y] = p;
      
     cout << "[x][y] = " << "[" << x << "][" << y << "] = " << num[x][y] << endl;
     y = y-1;  //moves from right to left down row
    }
    x = x-1;  //x goes up one row (take one away each iteration)
    y = 19;    //reset y back to m (far right of each row)
  }



  for (int i=0; i<20; i++) {
    cout << "[ ";
    for (int j=0; j<20; j++) {
      cout  << num[i][j] << " ";
    }
    cout << "]" << endl;
  }

  return 0;
}