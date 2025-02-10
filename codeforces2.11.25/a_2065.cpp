#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin>>x;
    while(x--){
        string w;
        cin>>w;

        w=w.substr(0,w.size()-2)+"i";
        cout<<w<<'\n';
    }
    
    
    return 0;
}

