#include<bits/stdc++.h>
using namespace std ;


//parameterized void funtion 
void printName( string nam){
    cout << "My name is " << nam <<endl ;
}

//non-parameterized void function 
void print(){
    cout << "My name is Bunny" << endl ;
}


//parameterized return function. 
//Every function other than void need to return the value otherwise garbage value will be stored

int sum(int num1, int num2){
    int num3 = num1+num2 ;
    return num3;
}
int main() {

    string name;
    cin >> name; 
    printName(name) ;
    print();
    int num =sum(8,9);
    cout << num ;
    return 0 ;
}