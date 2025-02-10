#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> sushi(n);
    
    for (int i = 0; i < n; i++) {
        cin >> sushi[i];
    }
    
    int max_length = 0;
    int count1 = 0, count2 = 0;
    
    for (int i = 1; i < n; i++) {
        if (sushi[i] != sushi[i - 1]) {
            int left = i - 1;
            while (left >= 0 && sushi[left] == sushi[i - 1]) {
                count1++;
                left--;
            }
            int right = i;
            while (right < n && sushi[right] == sushi[i]) {
                count2++;
                right++;
            }
            max_length = max(max_length, 2 * min(count1, count2));
            count1 = count2 = 0;
        }
    }
    
    cout << max_length << endl;
    return 0;
}
