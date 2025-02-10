#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool isPerfect = true; 
        for (int i = 1; i < n; i++)
        {
            int diff = abs(arr[i] - arr[i - 1]);
            if (diff != 5 && diff != 7) // If any interval is invalid
            {
                isPerfect = false; // Mark the melody as not perfect
                break; // No need to check further
            }
        }

        
        if (isPerfect)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}