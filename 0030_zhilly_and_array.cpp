#include <bits/stdc++.h>

using namespace std;

int main() {

    // Problem link: https://codeforces.com/contest/2224/problem/A

    int t = 0;
    cin >> t;

    while(t--){
        long long n = 0;
        cin >> n;

        int count = 0;
        long long arr[n];
        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }

        for (int i = n-1; i >= 1; i--){
            if(arr[i] > 0 && arr[i - 1] + arr[i] > 0) {
                arr[i - 1] = arr[i] + arr[i - 1];
            }
        }

        for(int i = 0; i < n; i++) {
            if(arr[i] > 0){
                count++;
            }
        }

        cout << count << endl;
    }




    return 0;
}