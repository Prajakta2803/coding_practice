#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, a = 1;
    cin >> n;

    for (int i = 1; i <= n; i++){
        a = a*i;
    }
   
    cout << a;
    return 0;
}