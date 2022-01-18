#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, a, b, count; cin >> n;

    while (n){

        a = n / 10;
        b = n % 10;
        n = a;
        count++;
    }
    if (count == 0){
        cout << "1";
    }
    else {
        cout << count;
    }
    return 0;
}