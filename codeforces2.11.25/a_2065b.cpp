#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int found=false;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1])
            {
                cout<<1<<'\n';
                found=true;
                break;
            }
        }
        if(found==false) cout<<s.size()<<'\n';

    }
    
    return 0;
}