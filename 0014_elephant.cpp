#include <iostream>
#include <string>

using namespace std;

int main(){

    int steps = 0, cords = 0;
    cin >> cords;

    steps += cords / 5;
    cords = cords % 5;

    steps += cords / 4;
    cords = cords % 4;

    steps += cords / 3;
    cords = cords % 3;

    steps += cords / 2;
    cords = cords % 2;

    steps += cords / 1;

    cout << steps;



    return 0;
}