#include<bits/stdc++.h> 
using namespace std;

int fact(int n){
    if(n<2) return 1;
    return n*fact(n-1);
}


int main(){
    int n,b; 
    cin >> n;
    cout << "Using the functional recursion " << fact(n);
    return 0;
}