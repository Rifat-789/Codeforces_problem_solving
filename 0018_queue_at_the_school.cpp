// Problem Link: https://codeforces.com/problemset/problem/266/B

#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    int n = 0, t = 0;
    cin >> n >> t;

    string s;

    cin >> s;

    while (t--) {
        for (int i = 0; i < n - 1; i++) {
            bool swap = false;
            if (s[i] == 'B' && s[i + 1] == 'G') {
                char temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
                swap = true;
            }

            if (swap == true) {
                i++;
            }
        }
    }

    cout << s;
 
 
 
 
    return 0;
}