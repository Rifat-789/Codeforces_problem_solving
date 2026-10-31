#include <bits/stdc++.h>

using namespace std;

int main(){

    // Problem Link: https://codeforces.com/problemset/problem/1353/B

    int t = 0;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < k; i++) {
            if (a[i] < b[n - i - 1]) {
                swap(a[i], b[n - i - 1]);
            }
        }

        int res = 0;
        res = accumulate(a.begin(), a.end(), 0);
        cout << res << endl;
    }




    return 0;
}