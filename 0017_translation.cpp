//Problem Link: https://codeforces.com/contest/41/problem/A

#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    cin >> s;

    string t;
    cin >> t;

    int len = s.length();
    int len2 = t.length();
    int res = 0;

    if (len != len2) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (s[i] == t[len - i - 1]) {
            res++;
        }
    }

    if (len == res) {
        cout << "YES";
    }

    else {
        cout << "NO";
    }


    return 0;
}