#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int t;
	
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int count = 0;
	    cin >> s;
	    for(int j = 0; j < s.size(); j++)
	        if(s[j] == '4')
	            count++;
	    cout << count << endl;
	}
	
	return 0;
}

