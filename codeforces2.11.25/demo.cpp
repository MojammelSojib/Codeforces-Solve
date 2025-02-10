#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     int t;
    cin >> t;  // Read number of test cases

    while (t--) {
        int l, r;
        cin >> l >> r;  // Read l and r

        int count = 0;  // Counter for minimal coprime segments

        for (int i = l; i <= r; i++) {
            if (__gcd(l, i) == 1) { // Check if gcd(l, i) == 1
                count++;
            }
        }

        cout << count << endl;  // Output the result for this test case
    }

    
    
    return 0;
}