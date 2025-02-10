#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;

        vector<long long>x(n),y(n);
        for(int i = 0;i<n;i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> y[i];
        }

        unordered_set<long long> setX(x.begin(), x.end());
        unordered_set<long long> setY(y.begin(), y.end());

        int dx = setX.size();
        int dy = setY.size();

        if (dx+dy>=4)
        {
            cout <<"YES\n";
        } 
        else 
        {
            cout <<"NO\n";
        }
    }
    return 0;
}