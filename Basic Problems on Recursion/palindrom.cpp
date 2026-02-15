#include<bits/stdc++.h> 
using namespace std;
int palindrome(int i, int l, string str){
    if(i >= l/2) return true;
    if(str[i] != str[l-i-1]){
        return false;
    }
    return palindrome(i+1, l, str);
}
int main(){
    string str;
    cin >> str;
    int l= str.length();
    int p = palindrome(0,l,str);
    cout << p;

    return 0;

}

