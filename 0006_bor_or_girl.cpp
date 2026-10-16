#include <bits/stdc++.h>
using namespace std;

int main(){

    string name;
    bool arr[26] = {false};
    int count = 0;

    cin >> name;

    for (int i = 0; i < name.size(); i++) {
        if (arr[name[i] - 'a'] == false) {
            count++;
            arr[name[i] - 'a'] = true;
        }
    }

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!";
    }

    else {
        cout << "IGNORE HIM!";
    }



    

    




    return 0;
}