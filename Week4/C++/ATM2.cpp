#include <iostream>
using namespace std;

int main() {
	int t, n, k, a;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    while(n--){
	        cin>>a;
	        if(k >= a){
	            k -= a;
	            cout<<1;
	        }else{
	            cout<<0;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
