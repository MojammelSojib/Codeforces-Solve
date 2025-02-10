#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    vector<int>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }

    int cnt1=0,cnt2=0;
    int len=0;

     for (int i=1; i<n; i++) {
        if (s[i]!= s[i-1]) 
        {

            int left = i-1;
            while (left>= 0 && s[left]==s[i-1]) {
                cnt1++;
                left--;
            }
            int right = i;
            while (right< n && s[right]==s[i]) {
                cnt2++;
                right++;
            }
            len = max(len, 2 * min(cnt1,cnt2));
            cnt1=cnt2=0;
        }
    }
    
    cout << len << endl;

    return 0;
}