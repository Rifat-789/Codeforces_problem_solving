#include <bits/stdc++.h>

using namespace std;

int main(){

    // Problem Link: https://codeforces.com/contest/2247/problem/A

    int t = 0;
    cin >> t;

    while (t--) {
        int n = 0;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }

        if (n % 2 != 0) {
            cout << "NO" << endl;
        }

        else {
            int middle = n / 2;
            int track = 0;
            int small = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] == 1) {
                    track++;
                }
            }

            if (track == middle) {
                cout << "YES" << endl;
                continue;
            }

            else if (track > middle) {
                small = n - track;
            }

            else if (track < middle) {
                small = track;
            }

            while (small <= middle) {
                small += 2;

                if (small == middle) {
                    cout << "YES" << endl;
                    break;
                }
            }

            if (small != middle) {
                cout << "NO" << endl;
            }
        }
    }






    return 0;
}