#include <bits/stdc++.h>
using namespace std;

int main() {
    
	long int n, x;
	cin >> n;
	vector<long int> v(n);
	
	for(int i = 0; i < n; ++i)
	    cin >> v[i];
	    
	sort(v.begin(), v.end());
	
	for(int i = 0; i < n; ++i)
	    cout << v[i] << endl;
	    
	return 0;
}

