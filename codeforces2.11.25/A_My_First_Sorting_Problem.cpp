#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin>>x;
    while(x--)
    {
        int a,b;
        cin>>a>>b;
        cout<<min(a,b)<<" "<<max(a,b)<<"\n";
    }
    
    return 0;
}