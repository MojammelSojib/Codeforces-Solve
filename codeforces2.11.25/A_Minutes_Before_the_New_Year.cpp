#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        int h,m,totalminute;
        cin>>h>>m;
        totalminute=h*60+m;
        int ans=1440-totalminute;
        cout<<ans<<'\n';
    }
    
    
    return 0;
}