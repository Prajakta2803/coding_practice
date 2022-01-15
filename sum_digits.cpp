#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, a, b, sum = 0;
    cin >> n;
    
    while (n){
        
        a = n / 10;
        b = n % 10;
        sum = sum + b;
        n = a;
    }
    cout << sum;
   
    return 0;
}