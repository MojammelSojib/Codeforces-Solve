#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    string s;
    cin>>s;
    set<char>x;

    for(char ch:s)
    {
        x.insert(toupper(ch));
    }

    if(x.size()==26) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    
    
    return 0;
}