#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Ensure a < b and c < d
        if (a > b) swap(a, b);
        if (c > d) swap(c, d);

        // Check for intersection
        // The segments (a, b) and (c, d) intersect if:
        // a < c < b and d is not in (a, b) OR
        // c < a < d and b is not in (c, d)
        bool intersect = (a < c && d < b) || (c < a && b < d);

        if (intersect) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}