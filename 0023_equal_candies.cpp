// Problem Link: https://codeforces.com/contest/1676/problem/B

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int t = 0;
    cin >> t;
 
    
    while (t--) {
        int n = 0;
        cin >> n;

        vector<int> box(n);

        for (int i = 0; i < n; i++) {
            cin >> box[i];
        }

        int smallest = 0;
        smallest = *min_element(box.begin(), box.end());

        int exp = n * smallest;

        int sum = accumulate(box.begin(), box.end(), 0);

        int res = sum - exp;

        cout << res << endl;
    }
 
 
 
    return 0;
}
