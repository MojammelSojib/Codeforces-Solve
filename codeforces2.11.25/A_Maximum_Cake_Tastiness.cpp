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
        int n;
        cin>>n;

        int array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        sort(array,array+n);
        
        int sum=array[n-1]+array[n-2];
        cout<<sum<<endl;

    }
    
    return 0;
}