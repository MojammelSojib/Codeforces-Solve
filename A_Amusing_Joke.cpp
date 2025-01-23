#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b,last;
    cin>>a>>b>>last;

    string x=a+b;
    sort(x.begin(),x.end());
    sort(last.begin(),last.end());

    // cout<<x<<endl;
    // cout<<last<<endl;
    
    if(x==last){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}