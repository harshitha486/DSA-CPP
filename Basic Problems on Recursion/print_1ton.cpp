#include<bits/stdc++.h> 
using namespace std;

// void f(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout << i << " ";
//     f(i+1,n);
// }
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     f(i,n);
//     return 0;
// }

void f(int i, int n){
    if(i<1) return;
    f(i-1,n);
    cout << i << " ";
}
int main(){
    int n; 
    cin >> n;
    f(n,n);
    return 0;
}