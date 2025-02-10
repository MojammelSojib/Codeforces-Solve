#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>a(n);
    int lucy=0,unlucky=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0){
            lucy++;
        }
        else{
            unlucky++;
        }
    }
    if(lucy>unlucky) cout<<"READY FOR BATTLE"<<'\n';
    else cout<<"NOT READY"<<'\n';
    
    return 0;
}