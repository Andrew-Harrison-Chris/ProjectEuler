//this method works for small arrays so far (5x5)


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

  int n = 40;  // 2*n in mxn bc we skip w/ j+=2
  int x = 19;  //# of rows - 1
  int y = 19; //# of columns - 1
  int p = 0;
  int r = 20;
  int c = 20;
  int num[r][c];    // # of columns and rows you want 
  string a;
  string b;
  int side_product = 1;
  int side_product_max = 0;
  int vert_product = 1;
  int vert_product_max = 0;
  int right_diagonal = 0;
  int right_diagonal_max = 0;
  int left_diagonal = 0;
  int left_diagonal_max = 0;
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
      y = y-1;  //moves from right to left down row
    }
    x = x-1;  //x goes up one row (take one away each iteration)
    y = c-1;    //reset y back to far right of each row
  }

  //this will calculate the product of digits in horizontal direction

  for (int i = 0; i < r; i++) {
    for (int j=c; j>=4; j--) {
      for (int k=1; k<=4; k++) {
	//cout << num[i][j-k] << endl;
	side_product *= num[i][j-k];
	//cout << "side product: " << side_product << endl;
	}
	if (side_product >= side_product_max) {
	  side_product_max = side_product;
	}
	//cout << endl;
	side_product = 1;
    }
  }
  cout << "Max Horizontal Product: " << side_product_max << endl;


  // this will calculate the product of digits in vertical direction
  for (int j=0; j<c; j++) {  
    for (int i=r; i>=4; i--) {
      for (int k=1; k<=4; k++) {
	//cout << num[i-k][j] << endl;
	vert_product *= num[i-k][j];
	//cout << "vertical product: " << vert_product << endl;
      }
      if (vert_product >= vert_product_max) {
	vert_product_max = vert_product;
      }
      //cout << endl;
      vert_product = 1;
    }
  }
  cout << "Max Vertical Product: " << vert_product_max << endl;


  
  //this  will calculate the product of digits in rightward diagonal direction
  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      if (i+3 < r && j+3 < c) {
	right_diagonal = num[i][j]*num[i+1][j+1]*num[i+2][y+2]*num[i+3][j+3];
	if (right_diagonal >= right_diagonal_max) {
	  right_diagonal_max = right_diagonal;
	}
      }
    }
  }
  cout << "Max Right Diagonal Product: " << right_diagonal_max << endl;

  
  //this  will calculate the product of digits in leftward diagonal direction
  for (int i = 0; i<r; i++) {
    for (int j = 0; j<c; j++) {
      if (i+3 < r && j >= 3) {
	left_diagonal = num[i][j]*num[i+1][j-1]*num[i+2][j-2]*num[i+3][j-3];
	if (left_diagonal >= left_diagonal_max) {
	  left_diagonal_max = left_diagonal;
	}
      }
    }
  }
  cout << "Max Left Diagonal Product: " << left_diagonal_max << endl;
  


    
  return 0;
}
