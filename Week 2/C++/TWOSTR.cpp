#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, str_len;
    string str1, str2;
    bool matched;

    cin>>T;
    
    while(T--)
    {
        cin>>str1>>str2;
        str_len = str1.length();
        matched = true;
        for(int i=0; i<str_len; i++)
        {
            if(str1[i] != '?' && str2[i] != '?' && str1[i] != str2[i])
            {
                cout<<"No"<<endl;
                matched = false;
                break;
            }
        }
        if(matched)
            cout<<"Yes"<<endl;
    }

    return 0;
}