#include <iostream>
using namespace std;

int main() {
	int n, goo_rat, rating;
	cin>>n>>goo_rat;
	for(int i=0; i<n; i++)
	{
	    cin>>rating;
	    if(rating >= goo_rat)
	        cout<<"Good boi"<<endl;
	    else
	        cout<<"Bad boi"<<endl;
	}
	return 0;
}
