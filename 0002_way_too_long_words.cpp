// Problem link: https://codeforces.com/problemset/problem/71/A
// Solution: Count the number of charecters first. If it exceeds 10 print the first word, number of words -2 and the last word


#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    char word[100] = "0";

    for (int i = 0; i < n; i++){
        cin >> word;

        if (strlen(word) > 10){
            cout << word[0] << strlen(word) - 2 << word[strlen(word) -1] << endl;
        }
        
        else {
            cout << word << endl;
        }
    }



    return 0;
}