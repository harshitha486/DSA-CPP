#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "Harshitha" ;
    int len = str.size();
    str[len-1] = 'b' ;
    cout << str << endl  ; 
    cout << str[len-1] ;
    return 0 ;
}