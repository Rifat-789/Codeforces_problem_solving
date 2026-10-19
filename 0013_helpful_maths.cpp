#include <iostream>
#include <string>

using namespace std;

int main(){

    string input;
    string res;
    cin >> input;

    int length = input.length();
    int count1 = 0, count2 = 0, count3 = 0;

    for (int i = 0; i < length; i++) {
        if (input[i] == '1') {
            count1++;
        }

        else if (input[i] == '2') {
            count2++;
        }

        else if (input[i] == '3') {
            count3++;
        }
    }

    for (int i = 0; i < count1; i++) {
        res += "1+";
    }

    for (int i = 0; i < count2; i++) {
        res += "2+";
    }

    for (int i = 0; i < count3; i++) {
        res += "3+";
    }

    int resLen = res.length();

    if (resLen > 1) {
        res.pop_back();
    }

    cout << res;
    
    




    return 0;
}