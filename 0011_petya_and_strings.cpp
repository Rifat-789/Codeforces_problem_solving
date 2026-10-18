#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char x[100], y[100];
    cin >> x;
    cin >> y;

    int res = strcasecmp(x, y);
    int final = 0;

    if (res > 0) {
        final = 1;
    }

    else if (res < 0) {
        final = -1;
    }

    else {
        final = 0;
    }

    cout << final;



    return 0;
}