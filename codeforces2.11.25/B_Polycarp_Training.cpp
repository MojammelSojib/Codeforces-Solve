#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    multiset<int>ml;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ml.insert(x);
    }

    int ans=0,prblm=1;
    while(!ml.empty()){
        auto LB=ml.lower_bound(prblm);
        if(LB!=ml.end())
        {
            ans++;
            ml.erase(LB);
        }
        else{
            break;
        }
        prblm++;
    }
    cout<<ans<<'\n';
    return 0;
}