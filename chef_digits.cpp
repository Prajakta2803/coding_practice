#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while (t--){

        string d; int count_one = 0, count_zero = 0;

        for (int i = 0; i < d.length(); i++){
            if (d[i] == 0){
                count_zero++;
            }
            else {
                count_one++;
            }
        }
        if (count_one == 1 or count_zero == 1){
            cout << "Yes";
        }
        else {
            cout <<"No";
        }
        cout << endl;
    }
    return 0;
}