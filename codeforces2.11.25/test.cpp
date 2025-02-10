#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<string,int>student={"md kahim",2};
    cout<<student.first<<" "<<student.second<<"\n";
    auto[name,roll]=student;
    cout<<name<<" "<<roll<<"\n";

    // int n;
    // cin>>n;
    // pair<string,int>student[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>student[i].first>>student[i].second;
    // }
    // for(auto[x,y]:student)
    // {
    //     cout<<x<<" "<<y<<"\n";
    
    // }

    // tuple<string,int,string> t =make_tuple{"ss",10,"017"};
    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\n";

    // auto[name,roll,phn]=t;

    // cout<<name<<" "<<roll<<" "<<phn<<"\n";

    // pair<string,pair<int,string>>p={"x",{8,"015"}};

    // string name=p.first;
    // int roll=p.second.first;
    // string phn=p.second.second;

    // cout<<name<<" "<<roll<<" "<<phn<<"\n";
    
    return 0;
}