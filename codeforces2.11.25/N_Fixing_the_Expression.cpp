#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        if(s[0] < s[2])
        {
            s[1] = '<';
        }
        else if(s[0] > s[2]){s[1] = '>';}
        else if(s[0] == s[2]){s[1] = '=';}
        std::cout << s << std::endl;
    }

    
    
    return 0;
}