#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k, string s) {
    int ans = 1;

    // For each character A-Z
    for(char c = 'A'; c <= 'Z'; c++) {
        vector<int> pos;

        // Collect positions of this character
        for(int i = 0; i < n; i++) {
            if(s[i] == c) pos.push_back(i);
        }

        int m = pos.size();
        if(m == 0) continue;

        // Sliding window on positions
        for(int i = 0; i < m; i++) {
            for(int j = i; j < m; j++) {
                int count = j - i + 1;  // how many same chars
                int mid = (i + j) / 2;  // target center

                long long swaps_needed = 0;
                for(int p = i; p <= j; p++) {
                    swaps_needed += abs(pos[p] - pos[mid] - (p - mid));
                }

                if(swaps_needed <= k)
                    ans = max(ans, count);
            }
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    string s;

    cin >> n;
    cin >> k;
    cin >> s;

    cout << solve(n, k, s) << "\n";

    return 0;
}