#include<bits/stdc++.h> 
using namespace std;

void sum(int i, int s){
    if(i<1){
        cout << "Using the parametrised recursion " << s << endl; 
        return;
    }
    sum(i-1, s+i);
}

int summ(int n){
    if(n<1) return 0;
    return n+summ(n-1);
}

int main(){
    int n,b; 
    cin >> n >> b ;
    sum(n,0);
    int a = summ(b);
    cout << "Using the functional recursion " << a;
    return 0;
}