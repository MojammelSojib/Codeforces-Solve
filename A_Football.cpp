#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    if(s.find("0000000")!=-1 || s.find("1111111")!=-1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    
    return 0;
}