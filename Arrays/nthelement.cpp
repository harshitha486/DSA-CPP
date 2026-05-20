#include <bits/stdc++.h>
using namespace std;

int ncr(int n, int r){
    int res = 1;
    for(int i = 0; i < r ; i ++){
        res = (res * (n-i))/(i+1);
    }
    return res;
}

int main(){
    int n,r;
    cin >> n >> r;
    int res = ncr(n-1, r-1);
    cout << res;
}