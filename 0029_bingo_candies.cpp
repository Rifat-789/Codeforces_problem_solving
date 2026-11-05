#include <bits/stdc++.h>

using namespace std;

int main() {

    // Problem Link: https://codeforces.com/contest/2208/problem/A

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int arr[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        int freq[n * n + 1];
        for (int i = 0; i <= n * n; i++){
            freq[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <n; j++) {
                freq[arr[i][j]] += 1;
            }
        }
        
        int det = 0;
        for (int i = 1; i <= n*n; i++) {
            if(freq[i] > ((n * n) - n)){
                cout << "NO" << endl;
                det = 1;
                break;
            }
        }

        if (det != 1) {
            cout << "YES" << endl;
        }

    }







    return 0;
}