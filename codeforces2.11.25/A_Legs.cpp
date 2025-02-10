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

        if(x%4==0)
        {
            cout<<x/4<<'\n';
        }
        else{
            cout<<(x/4)+1<<'\n';
        }
    }
    
    return 0;
}