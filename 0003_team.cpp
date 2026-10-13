// Problem Link: https://codeforces.com/problemset/problem/231/A
// Solution: using an array count how many of the members know the solution. If it's 2 or more increase the number of temp. Then print temp


#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int arr[3];

    int temp = 0;

    cin >> n;
    
    while (n--) {
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }

        int check = 0;
        for (int i = 0; i < 3; i++) {
            if (arr[i] == 1) {
                check++;
            }
        }

        if (check >= 2) {
            temp++;
        }

    }

    cout << temp;







    return 0;
}