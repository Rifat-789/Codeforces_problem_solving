// Problem Link: https://codeforces.com/problemset/problem/443/As

#include <iostream>
#include <string>

using namespace std;

int main () {
    string s;
    getline(cin, s);

    int n = s.length();
    int count = 0;
    int freq[27] = {0};

    for (int i = 1; i < n; i = i + 3) {
        freq[s[i] - 'a'] = 1;
    }

    for (int i = 0; i < 27; i++) {
        if (freq[i] != 0) {
            count++;
        }
    }

    cout << count;


    return 0;
}