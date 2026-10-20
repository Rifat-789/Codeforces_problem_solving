// Problem link: https://codeforces.com/problemset/problem/271/A
// Comment: Sometimes things are much simple than they look.

#include <iostream>

using namespace std;

int main() {

    int year = 0;

    cin >> year;

    int res = year + 1;

    for (int i = 0; i <= 9000; i++) {
        int a = res / 1000;
        int b = (res / 100) % 10;
        int c = (res / 10) % 10;
        int d = res % 10;

        if (a == b || a == c || a == d) {
            res++;
            continue;
        }

        if (b == c || b == d) {
            res++;
            continue;
        }

        if (c == d) {
            res++;
            continue;
        }

        else {
            break;
        }

    }

    cout << res;







    return 0;
}