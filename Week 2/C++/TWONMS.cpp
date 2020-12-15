#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int A,B,N,T;
    cin>>T;
    while(T--)
    {
        cin>>A>>B>>N;
        A *= N%2==0 ? 1:2;
        cout<<int(max(A, B)/min(A, B))<<endl;
    }
    return 0;
}