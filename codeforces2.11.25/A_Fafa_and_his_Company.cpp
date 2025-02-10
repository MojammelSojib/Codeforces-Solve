#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
 {
    ll n;
    cin>>n;
    ll cnt=0;
    for(ll i=1;i*i<=n;i++)
    { 
       if(n%i==0)
       {
        //  cout<<i<<" "<<n/i<<endl;
          if(i==(n/i))
          {
                cnt++;
          }
          else 
           cnt+=2;
       }
    }
    cout<<cnt-1<<endl;
   
}
int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}