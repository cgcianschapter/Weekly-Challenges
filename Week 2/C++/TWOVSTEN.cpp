#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, x;

    cin>>T;
    while(T--)
    {
        cin>>x;
        if(x%10 == 0)
            cout<<0<<endl;
        else if(x%5 == 0)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}