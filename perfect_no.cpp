#include <bits/stdc++.h>
using namespace std;

int main(){

    for (int i = 1; i <= 500; i++){
        int a = 0;

        for (int n = 1; n < i; n++){
            if (i % n == 0){
                a = a + n;
            }
        }
        if (i == a)
        cout << i << endl;
    }
    return 0;
}