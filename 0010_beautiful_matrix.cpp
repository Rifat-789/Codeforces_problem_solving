#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }

    int row = 0, column = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] == 1) {
                row = i + 1;
                column = j + 1;
            }
        }
    }

    int rowShift = abs(row - 3);
    int columnShift = abs(column - 3);
    int total = rowShift + columnShift;

    cout << total;




    return 0;
}