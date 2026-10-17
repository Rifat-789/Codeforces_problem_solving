// Problem link: https://codeforces.com/contest/50/problem/A
// Solution: just multiply m and n and get the floor value after dividing the result with 2 

#include <bits/stdc++.h>
using namespace std;

int main(){

    int m = 0, n = 0;
    cin >> m >> n;

    int res = floor((m * n) / 2);

    cout << res;



    return 0;
}