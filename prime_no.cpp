#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, count = 0; cin >> n;
    int i;

    for(i = 2; i <= n; i++){
        if (n % i == 0){
            count++;
        }
    }
    if (count == 1){
        cout <<"The Number Is Prime"<< endl;
    }
    else{
        cout << "The Number Is Not Prime";
    }
    return 0;
}