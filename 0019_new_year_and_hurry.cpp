// Problem Link: https://codeforces.com/problemset/problem/750/A

#include <iostream>

using namespace std;

int main () {

    int n = 0, k = 0;
    cin >> n >> k;

    int left = 240 - k;
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if ((left - (5 * i)) >= 0) {
            count++;
            left -= (5 * i);
        }
    }

    cout << count;

    


    return 0;
}