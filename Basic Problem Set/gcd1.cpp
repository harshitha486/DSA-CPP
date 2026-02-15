#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2, temp;
    cin >> n1 >> n2;

    // while(n1!=0 && n2!=0){
    //     if(n1 > n2){
    //         n1 = n1 % n2 ;
    
    //     }
    //     else {
    //         n2 = n2 % n1;
    
    //     }
    // }
    // cout << (n1==0?n2 : n1);

    while (n2!=0)
    {
        int r  = n1 % n2;
        n1 = n2;
        n2 = r;
    }
    
    cout << n1;


    return 0;
}