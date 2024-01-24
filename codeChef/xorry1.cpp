#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a = 0, b = 0;
        
        // Iterate from the highest bit to the lowest
        for (int i = 31; i >= 0; i--) {
            if (n & (1 << i)) {
                // If the i-th bit is set in n, set the i-th bit in a
                a |= (1 << i);
                break;
            }
        }
        
        // Calculate b as n XOR a
        b = n ^ a;
        
        cout << min(a, b) << " " << max(a, b) << endl;
    }
    return 0;
}
