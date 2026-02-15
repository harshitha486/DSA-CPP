#include<bits/stdc++.h>
using namespace std ;

//pass by value 
void printVal(int num ){
    num+=5 ;
    cout << num << endl;
}

//pass by reference 
void printStr(string &s){
    s[1] = 'i';
    cout << s << endl;
}

//pass by reference
//arrays always passed by reference 
void doSomething(int arr[]){
    arr[3] = 9889 ;
    cout << "val " << arr[3] << endl ;
}

int main() {

    // int num = 10 ;
    // printVal(num) ;
    // cout << num << endl ;

    // string str = "hot" ;
    // printStr(str);
    // cout << str << endl  ;

    int arr[5];
    for(int i=0; i<5 ; i++){
        cin >> arr[i];
    }
    for(int i=0; i<5 ; i++){
        cout << arr[i] << endl;
    };
    doSomething(arr) ;
    cout << arr[3];
    return 0 ;
}