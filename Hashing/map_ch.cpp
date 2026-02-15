#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="abc)@deg#64#abd";
    unordered_map<char,int> mpp;

    //precomputing hash[256]={0} works for all characters

    for(int i=0; i<s.length(); i++){
        mpp[s[i]]++;
    }

        //Iterating 
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }


    int q;
    cin >> q;

    while(q--){
        char a;
        cin >> a;
        //fetching
        cout << mpp[a] << endl;
    }
    return 0;
}
