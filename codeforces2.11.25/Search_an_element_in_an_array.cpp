#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;
    
    bool found=false;

    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        if(num==x){
            found=true;
            break;
        }
    }
    
    if(found) 
            cout<<"YES";
    else 
            cout<<"NO";
    
    
    return 0;
}