#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, a = 0; cin >> n;

    for(int i = 1; i <= n; i++){
        
        a = a + (i * i);
    }
    cout << a;
    
    return 0;
}