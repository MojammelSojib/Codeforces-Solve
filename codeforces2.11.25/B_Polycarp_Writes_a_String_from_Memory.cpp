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
        set<char>m;
        int ans=0;

        for(char ch:s){
            m.insert(ch);
            if(m.size()>3)
            {
                ans++;
                m.clear();
                m.insert(ch);
            }
    }
    if(!m.empty()) ans++;
    cout<<ans<<endl;
    }
    return 0;
}