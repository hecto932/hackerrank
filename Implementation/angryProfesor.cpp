#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool myFunc (int i) { return ( i <= 0 ); }

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }
        int attendance = count_if(a.begin(), a.end(), myFunc);
        if(attendance < k){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
