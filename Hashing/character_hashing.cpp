#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="abcdegabd";

    //precomputing hash[256]={0} works for all characters


    int hash[26]={0};

    for(int i=0; i<s.length(); i++){
        hash[s[i]-'a']+=1;
    }

    int q;
    cin >> q;

    while(q--){
        char a;
        cin >> a;
        //fetching
        cout << hash[a-'a'] << endl;
    }
    return 0;
}
