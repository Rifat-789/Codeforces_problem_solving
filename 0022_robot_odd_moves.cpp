// Problem Link: https://codeforces.com/contest/2271/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t = 0;
    cin >> t;

    int a = 0, b = 0;
    int count = 1;
    while (t--) {
        cin >> a >> b;
        int tempA = 0, tempB = 0;

        if ((b - a) >= 2) {
            cout << "-1" << endl;
        }

        else if (a == b) {
            cout << a << endl;
        }

        else if (a % 2 == b % 2) {
            cout << a << endl;
        }

        else {
            cout << a + 1 << endl;
        }

    }
        



    return 0;
}