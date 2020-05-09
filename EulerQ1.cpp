#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main () {

vector<int> multiples;

for (int i=0; i<1000; i++) {
	if (i%3 == 0 || i%5 == 0) {
		multiples.insert(multiples.begin(), i);
	}
}

cout << "Sum = " << accumulate(multiples.begin(), multiples.end() ,  0);
cout << endl;

return 0;
}

