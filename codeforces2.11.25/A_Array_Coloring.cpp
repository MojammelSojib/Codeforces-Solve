#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;

        int array[x];
        for(int i=0;i<x;i++)
        {
            cin>>array[i];
        }

        int sum=0;
        for(int i=0;i<x;i++)
        {
            sum+=array[i];
        }
        if(sum%2==0) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    
    return 0;
}