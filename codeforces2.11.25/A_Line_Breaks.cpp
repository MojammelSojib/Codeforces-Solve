#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<"EASY"<<endl;
    }
    else cout<<"HARD"<<endl;
 
    
 
    return 0;
}