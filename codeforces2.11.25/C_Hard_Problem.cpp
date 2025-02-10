#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)
    {
        int m,a,b,c;
        cin>>m>>a>>b>>c;

        int row1=min(m,a); //(m,a modde compare)
        int row2=min(m,b); //(m,b modde compare)

        int sit=2*m;
        int filup=sit-(row1+row2); //koita sit baki ace

        int blank_c=min(filup,c); //baki sit ar c er modde mini ber krbo

        int ans=row1+row2+blank_c;

        cout<<ans<<endl;

        
    }
    
    
    return 0;
}