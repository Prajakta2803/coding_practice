#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while (t--){

        int n, a = 1; cin >> n;

        for (int i = 1; i <= n; i++){
            a = a * i;
        }
        cout << a << endl;
    }
    return 0;
}