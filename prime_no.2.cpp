#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int i;

    for (i = n -1; i >= 0; i--){
        int k;
        for (k = 2; k < i; k++){
            if (i % k == 0)
            break;
        }
        if (k == i){
            cout << i;
            break;
        }
    }
    return 0;
}