#include <iostream>
using namespace std;

int main() {
	int n, a, solved=0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
	    solved = 0;
	    for(int j=0; j<5; j++)
	        {
	            cin>>a;
	            if(a == 1)
	                solved++;
	        }
	        if(solved == 0)
	            cout<<"Beginner"<<endl;
	        else if(solved == 1)
	            cout<<"Junior Developer"<<endl;
	        else if(solved == 2)
	            cout<<"Middle Developer"<<endl;
	        else if(solved == 3)
	            cout<<"Senior Developer"<<endl;
	        else if(solved == 4)
	            cout<<"Hacker"<<endl;
	        else
	            cout<<"Jeff Dean"<<endl;
	}
	return 0;
}