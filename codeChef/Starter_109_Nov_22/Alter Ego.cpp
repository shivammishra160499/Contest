#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> odd;
        vector<int> even;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 1)
                odd.push_back(x);
            else
                even.push_back(x);
        }
        if (odd.size() % 2 != 0 or even.size() % 2 != 0) {
            cout << -1 << endl;
            continue; // Use continue instead of break
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        int result[n];
        int count = 0;
        for (int i = 0; i < odd.size() / 2; i++) {
            result[count] = (odd[i] + odd[i + odd.size() / 2]) / 2;
            result[count + n / 2] = (odd[i + odd.size() / 2] - odd[i]) / 2;
            count++;
        }
        for (int i = 0; i < even.size() / 2; i++) {
            result[count] = (even[i] + even[i + even.size() / 2]) / 2;
            result[count + n / 2] = (even[i + even.size() / 2] - even[i]) / 2;
            count++;
        }
        for (int i = 0; i < n; i++)
            cout << result[i] << " ";
        cout << endl;
    }

    return 0;
}

