#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        int cnt=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==t[i])
               cnt++;
            else
               break;
        }

        if(cnt==0) {
            cout<<s.size()+t.size()<<"\n";
        }
        else
        {
            int x=s.size()-cnt;
            int y=t.size()-cnt;
            cout<<cnt+1+x+y<<'\n';
        }


    }
    
    return 0;
}