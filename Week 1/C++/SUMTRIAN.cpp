#include <iostream>
using namespace std;

int main() {
	int t, s;
	
	cin >> t;
	for(int i = 0; i < t; i++) {
	    cin >> s;
	    int trian[s][s] = {};
	    for(int j = 0; j < s; j++)
	        for(int k = 0; k <= j; k++)
	            cin >> trian[j][k];
	    for(int j = s-1; j > 0; j--)
	        for(int k = 0; k < j; k++)
	            trian[j-1][k] += trian[j][k]>trian[j][k+1] ? trian[j][k] : trian[j][k+1];
	    cout << trian[0][0] << endl;
	}
	
	return 0;
}

