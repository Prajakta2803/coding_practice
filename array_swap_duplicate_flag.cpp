#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, i,j,k; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int n1, n2; cin >> n1 >> n2;
    bool flag1, flag2;
    
    for (int p = 0; p < n; p++){
        if (arr[p]==n1 && flag1 == false){
            i = p;
            flag1 = true;
        }
        else if (arr[p]==n2 && flag2 == false){
            j = p;
            flag2 = true;
        }
    }
    k = arr[i];
    arr[i] = arr[j];
    arr[j] = k;
    
    for (int c = 0; c < n; c++){
        cout << arr[c] <<" ";
    }
    return 0;
}