// Problem Link: https://codeforces.com/problemset/problem/2267/B

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t = 0;
    cin >> t;

    while (t--) {
        int n = 0;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int freq[101] = {};
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }

        int p = 0;
        int res[n];

        while (p < n) {
            for (int i = 100; i >= 1; i--) {
                if (freq[i] > 0) {
                    cout << i << " ";
                    freq[i]--;
                    p++;
                }
            }
        }
    }




    return 0;
}