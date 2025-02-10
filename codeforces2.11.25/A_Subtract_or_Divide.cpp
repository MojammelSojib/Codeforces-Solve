
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 

int solve(int n)
{
    if(n<=3)
    return n-1;
    else if(n & 1)
    return 3;
    return 2;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}