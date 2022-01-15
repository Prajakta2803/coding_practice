#include <bits/stdc++.h>
using namespace std;

int main(){

    int i,n1,n2,gcd; cin >> n1 >> n2;

    if (n1 < n2){
        i = n1;
    }
    else if (n2 < n1){
        i = n2;
    }

    for (; i >= 1; i--){
        
        if (n1 % i == 0 && n2 % i == 0){
            gcd = i;
            break;
        }
    }
    cout << gcd;
    
    return 0;
}