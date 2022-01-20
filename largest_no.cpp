#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, max = INT_MIN; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int p = 0; p < n; p++){
        if (max < arr[p]){
            max = arr[p];
        }
    }
    cout << max;
    return 0;
}