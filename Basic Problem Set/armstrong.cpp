#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = n;
    int sum = 0;
    int rem = 0;
    int temp = n;
    int c = 0;
    if (n == 0) {
        cout << "Armstrong";
        return 0;
    }
    while(temp >0){
        temp = temp/10 ;
        c++;
    }
    while(n>0){
        rem = n % 10;
        sum = sum + pow(rem,c);
        n = n/10;
    }
    if (a == sum){
        cout << "Armstrong" ;
    }
    else{
        cout << "Not armstrong";
    }
}