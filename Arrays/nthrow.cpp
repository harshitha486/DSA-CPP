#include <bits/stdc++.h>
using namespace std;

void nth_row(int n){

    cout << 1 << ' ';
    
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        res = (res * (n-i)) / i;
        cout << res << ' ';
    }
    
}

int main(){
    int n;
    cin >> n;
    nth_row(n);
}