#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n] ;

    map<int,int> mpp;
    //pre-storing
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    
    //Iterating 
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }
    int q;
    cin >> q;
    
    while(q--){
        int a;
        cin >> a;
        //fetching
        cout << mpp[a] << endl;
    }
    return 0;
}
