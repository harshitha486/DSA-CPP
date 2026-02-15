#include<bits/stdc++.h> 
using namespace std;

void f(int i,int n){
    if(i>n){
        return;
    }
    cout << "Banni" << endl;
    f(i+1,n);
}
int main(){
    int n;
    cin >> n;
    int i = 1;
    f(i,n);
    return 0;
}
