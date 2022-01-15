#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    float sum = 0;

    for (int i = 1; i <= n; i++){
        float denom = 1;

        for (int power = 1; power <= i; power++){
            denom = denom * i;
        }
        sum = sum + (1 / denom * i);
    }
    cout << sum;
    return 0;
}