#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    multiset<int>ml;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ml.insert(x);
    }

    for(auto value:ml){
        cout<<value<<" ";
    }
    cout<<"\n";
    
    // auto it=ml.find(6);//log(n)
    //     if(it!=ml.end())
    //     {
    //         cout<<"found"<<'\n';
    //     }
    //     else{
    //         cout<<"Not found"<<'\n';
    //     }

    // ml.erase(9); //o(logn+k)
    // for(auto value: ml)
    // cout<<value<<" ";
    // cout<<"\n";


    // auto it=ml.find(9);
    // ml.erase(it);//o(logn+logn)
    // for(auto value:ml){
    //     cout<<value<<" ";
    // }
    // cout<<"\n";

    // cout<<ml.count(9)<<'\n';//log(n)

    int N;
    cin>>N;
    auto it=ml.lower_bound(N);
    if(it==ml.end()){
        cout<<"END"<<'\n';
    }
    else{
        cout<<*it<<'\n';
    }

    // int N;
    // cin>>N;
    // auto it=ml.upper_bound(N);
    // if(it==ml.end()){
    //     cout<<"END"<<'\n';
    // }
    // else{
    //     cout<<*it<<'\n';
    // }
    
    
    return 0;
}