#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, max = 0, max_1 = 0; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++){
        if (max_1 < arr[i] && arr[i] < max){
            max_1 = arr[i];
        }
    }
    cout << max_1;
    return 0;
}