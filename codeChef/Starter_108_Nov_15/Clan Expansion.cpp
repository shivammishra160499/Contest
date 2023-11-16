#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        unordered_map<int, pair<int, int>> mp;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (mp.find(arr[i]) == mp.end()) {
                mp[arr[i]] = {i, i};
            } else {
                mp[arr[i]] = {i, max(mp[arr[i]].second, (i - mp[arr[i]].first) / 2)};
            }
        }

        int ans;
        int day = INT_MAX;

        for (auto i : mp) {
            int a = i.first;
            int t = max(i.second.second, (n - 1 - i.second.first));
            if (t < day) {
                ans = a;
                day = t;
            }
            if (t == day) {
                ans = min(ans, a);
            }
        }

        cout << ans << " " << day << endl;
    }

    return 0;
}
