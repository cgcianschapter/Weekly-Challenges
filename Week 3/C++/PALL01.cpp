#include <iostream>
using namespace std;

int main() {
	int t;
	
	cin >> t;
	for (int i = 0; i < t; ++i) {
	    int  n, temp, rev = 0;
	    cin >> n;
	    temp = n;
	    while (temp) {
	        rev = rev * 10 + temp % 10;
	        temp /= 10;
	    }
	    if (n == rev)
	        cout << "wins" << endl;
	    else
	        cout << "loses" << endl;
	}
	    
	return 0;
}
