#include <bits/stdc++.h>
using namespace std;

int main (){

    int n; cin >> n;
     
    string str[n];

    for (int i = 0; i < n; i++){
        cin >> str[i];
    } 
    for (int i = 0; i < n; i++){

        if (str[i][0]>= 97 and str[i][0] <= 122){
            str[i][0] = str[i][0] - ' ';
        }
    }
    for (int i = 0; i < n; i++){
        cout << str[i]<<" ";
    }
    return 0;
}