#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;  
    cin >> T;  

    while (T--) {
        string A, B;
        cin >> A >> B;
        
        int n = A.size();
        int m = B.size();
        int j = 0;  // Pointer for B

        // Step 1: Check if B is a subsequence of A
        for (int i = 0; i < n; i++) {
            if (j < m && A[i] == B[j]) {
                j++;  // Move to the next character in B
            }
        }
        
        // If B is not a subsequence of A, print -1
        if (j < m) {
            cout << "-1\n";
            continue;
        }

        // Step 2: Calculate minimum cost to remove extra characters
        int cost = 0;
        int index = 1;  // Current position in the dynamically updating A
        j = 0;  // Reset pointer for B

        for (int i = 0; i < n; i++) {
            if (j < m && A[i] == B[j]) {
                j++;  // Move to next in B (keep it)
            } else {
                cost += index;  // Removing character at 'index' position
            }
            index++;  // Update index after each iteration
        }

        // Print the minimum cost
        cout << cost << "\n";
    }
    
    return 0;
}
