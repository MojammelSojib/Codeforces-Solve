#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }

    for(auto value: s)
    cout<<value<<" ";
    cout<<"\n";
    
    // auto it=s.find(6);//log(n)
    //     if(it!=s.end())
    //     {
    //         cout<<"found"<<'\n';
    //     }
    //     else{
    //         cout<<"Not found">>'\n';
    //     }

    // s.erase(6);
    // for(auto value: s)
    // cout<<value<<" ";
    // cout<<"\n";

    // cout<<s.count(7)<<'\n';//log(n)

    // int N;
    // cin>>N;
    // auto it=s.lower_bound(N);
    // if(it==s.end()){
    //     cout<<"END"<<'\n';
    // }
    // else{
    //     cout<<*it<<'\n';
    // }

    int N;
    cin>>N;
    auto it=s.upper_bound(N);
    if(it==s.end()){
        cout<<"END"<<'\n';
    }
    else{
        cout<<*it<<'\n';
    }
    
    
    return 0;
}