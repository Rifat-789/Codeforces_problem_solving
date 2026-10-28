#include <iostream>
#include <string>

using namespace std;

int main() {

    int n = 0;
    cin >> n;

    string s;
    cin >> s;

    char temp[n];

    for (int i = 0; i < n; i++) {
        temp[i] = tolower(s[i]);
    }

    int freq[26];
    for (int i = 0; i < n; i++) {
        freq[temp[i] - 'a'] = 1;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 1) {
            count = -1;
        }
    }

    if (count != -1) {
        cout << "YES";
    }

    else {
        cout << "NO";
    }



    return 0;
}