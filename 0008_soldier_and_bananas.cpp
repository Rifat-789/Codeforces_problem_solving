// Problem Link: https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int k = 0, n = 0, w = 0;

    cin >> k >> n >> w;

    int final = 0;

    for (int i = 1; i <= w; i++) {
        final = final + (i * k);
    }

    if (final < n) {
        cout << '0';
    }

    else {
        cout << final - n;
    }




    return 0;
}