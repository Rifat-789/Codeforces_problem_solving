// Problem Link: https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    cin >> s;

    int up = 0, low = 0;
    int len = s.length();

    for (int i = 0; i < len; i++) {
        if (isupper(s[i]) == 0) {
            low++;
        }

        else {
            up++;
        }
    }

    string res;
    if (low >= up) {
        for (int i = 0; i < len; i++) {
            res += tolower(s[i]);
        }
    }

    else if (up > low) {
        for (int i = 0; i < len; i++) {
            res += toupper(s[i]);
        }
    }

    cout << res;



    return 0;
}