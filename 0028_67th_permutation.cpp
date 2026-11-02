#include <bits/stdc++.h>

using namespace std;

int main() {

    // Problem Link: https://codeforces.com/contest/2218/problem/C

    int t = 0;
    cin >> t;

    while (t--) {
        int n = 0;
        cin >> n;

        int size = n * 3;
        int arr[size];

        int smallest = 1;
        int largest = size;

        for (int i = 0; i < size; i+= 3) {
            arr[i] = smallest;
            arr[i + 2] = largest;
            arr[i + 1] = largest - 1;
            largest = largest - 2;
            smallest++;
        }

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }

        cout << "\n";

    }




    return 0;
}