#include <iostream>
using namespace std;

int main() {

    int val = 0;
    cin >> val;

    int count = 0;
    if (val >= 100) {
        count += (val / 100);
        val = val % 100;
    }

    if (val >= 20) {
        count += (val / 20);
        val = val % 20;
    }

    if (val >= 10) {
        count += (val / 10);
        val = val % 10;
    }

    if (val >= 5) {
        count += (val / 5);
        val = val % 5;
    }

    if (val >= 1) {
        count += (val / 1);
        val = val % 1;
    }

    if (val == 0) {
        cout << count;
    }




    return 0;
}