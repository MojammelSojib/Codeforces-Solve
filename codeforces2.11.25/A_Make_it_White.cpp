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
        int n;
        cin>>n;
        string s;
        cin>>s;

        int firstpos=-1,lastpos=-1;
        firstpos=s.find('B');
        lastpos=s.rfind('B');

        // cout<<firstpos<<" "<<lastpos<<'\n';
        cout<<lastpos-firstpos+1<<'\n';
    }
    return 0;
}