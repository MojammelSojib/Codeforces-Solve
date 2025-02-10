#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>=b) cout<<a<<'\n';
        else
        cout<<max(0,2*a-b)<<'\n';
    }
    
    return 0;
}