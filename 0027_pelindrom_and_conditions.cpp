#include <bits/stdc++.h>

using namespace std;

int main() {

    // Problem Link: https://codeforces.com/contest/2234/problem/B

    int t = 0;
    cin >> t;

    while (t--) {
        long long n = 0;
        cin >> n;

        if (n == 10) {
            cout << "-1" << endl;
        }

        else if (n % 12 == 10) {
            cout << "22" << " " << n - 22 << endl;
        }

        else if (n % 12 != 10) {
            cout << (n % 12) << " " <<  n - (n % 12) << endl;
        }
    }





    return 0;
}