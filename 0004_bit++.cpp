// Problem Link: https://codeforces.com/problemset/problem/282/A
// Solution: Store the input on an array that has 3 elements. Check only the middle element. if it's + , increase. If -, decrease.


#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    char arr[3];
    int result = 0;

    cin >> n;
    
    while (n--) {
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }

        if (arr[1] == '+') {
            result++;
        }

        else if (arr[1] == '-') {
            result--;
        }
    }

    cout << result;



    return 0;
}