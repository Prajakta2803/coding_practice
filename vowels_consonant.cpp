#include <bits/stdc++.h>
using namespace std;

int main (){

    char C; cin >> C;

    if (C == 'A' or C == 'E' or C == 'I' or C == 'O' or C == 'U'){
        cout << "Vowel";
    }
    else {
        cout << "Consonant";
    }

    return 0;
}