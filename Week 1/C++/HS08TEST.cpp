#include <bits/stdc++.h>
using namespace std;

int main() {
	double X, Y;
	
	cin >> X >> Y;
	if((Y >= X+0.5) && ((int)X % 5 == 0))
	    Y -= X+0.5;
	cout << fixed << setprecision(2) << Y << endl;
	
	return 0;
}

