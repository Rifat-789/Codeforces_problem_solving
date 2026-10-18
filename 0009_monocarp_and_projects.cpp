#include <bits/stdc++.h>
using namespace std;

int main() {

    int test = 0;
    cin >> test;

    while (test--) {
        long long x = 0, y = 0, k = 0;
        cin >> x >> y >> k;

        long long res = 0;
        long long count = 0;
        long long temp = 0;

        while (k--) {
            for (int i = 0; i < k; i++) {
                if ((x + i) < (y - x)) {
                    break;
                }

                else {
                    res += (y % x);
                }

                x++;
                y++;
            }

            count = k;
            break;
        }

        temp = count * k;
        res = res + temp;

        cout << res;
    }



    return 0;
}