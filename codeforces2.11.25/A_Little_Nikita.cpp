#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;
        if(a==b) cout<<"Yes"<<"\n";
        else if(a>b) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
    
    return 0;
}