#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2;
    cin >> n1 ;
    cin >> n2;
    int gcd = 1;
    
    for (int i = min(n1,n2) ; i >= 1 ; i-- )
    {
        if(n1%i==0 && n2%i==0){
            gcd = i;
            break;
        }
    }
    cout << gcd ;
    
    return 0;
}

//O(m,n)