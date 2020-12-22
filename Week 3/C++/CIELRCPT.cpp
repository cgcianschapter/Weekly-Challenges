#include <iostream>
using namespace std;

int main() {
	int prices[] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
	
	int t, p;
	cin >> t;
	for(int i = 0; i < t; ++i) {
	    cin >> p;
	    int count = 0;
	    while (p > 0) {
	        for(int j = 11; j >= 0; --j) {
	            if (prices[j] <= p) {
	                p -= prices[j];
	                ++count;
	                break;
	            }
	        }
	    }
	    cout << count << endl;
	}
	
	return 0;
}
