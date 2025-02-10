#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<int,int>mp;
    mp[10]=20;
    mp[2]=12;
    mp[10]=15; 
    mp[8]=22; 
    mp[17]=5; 
    mp[5]=7; 

    // cout<<mp[10]<<'\n';
    // cout<<mp[2]<<'\n';

    // for(auto [key,value]:mp){
    //     cout<<key <<"->"<<value<<'\n';
    // }
    
    // for(auto it:mp)
    // {
    //     int key=it.first,value=it.second;
    //     cout<<key <<"->"<< value <<'\n';
    // }
    // cout<<'\n'; itai used krci bar bar
    
    // auto it=mp.find(8); log(n)
    // cout<< it->first<<" "<<it->second<<'\n';
    // if(it==mp.end())
    // {
    //     cout<< "Value Not Found"<<'\n';
    // }
    // else
    // {
    //     cout<< it->first<<" "<<it->second<<'\n';
    // }

    // cout<<mp[26]<<'\n';
    // cout<<mp[6]<<'\n';

    // for(auto it:mp)
    // {
    //     int key=it.first,value=it.second;
    //     cout<<key <<"->"<< value <<'\n';
    // }

    // mp.erase(8);
    // for(auto it:mp)
    // {
    //     int key=it.first,value=it.second;
    //     cout<<key <<"->"<< value <<'\n';
    // }

    // auto it=mp.find(10);
    // if(it!=mp.end()){
    //     mp.erase(it);
    // }
    
    mp[6]=49;
    for(auto it:mp)
    {
        int key=it.first,value=it.second;
        cout<<key <<"->"<< value <<'\n';
    }

    
    // auto it=mp.lower_bound(6);greater than or equal( soman baboro)
    auto it=mp.upper_bound(9);
    cout<<it->first<<" "<<it->second<<'\n';

    // cout<<mp.size()<<'\n';
    // cout<<mp.empty()<<'\n';

    // auto it=mp.begin();
    // it++;
    // cout<<it->first<<" "<<it->second<<'\n';

    return 0;
}