#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, a,b,k; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int i, j; cin >> i >> j;
    
    for (int p = 0; p < n; p++){
        if (arr[p]==i)
            a = p;
        else if (arr[p]==j)
            b = p;
    }
    
    k = arr[a];
    arr[a] = arr[b];
    arr[b] = k;
    
    for (int c = 0; c < n; c++){
        cout << arr[c] <<" ";
    }
    return 0;
}