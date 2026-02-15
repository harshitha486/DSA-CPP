#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    vector<int> ls;
    //O(sqrt(n))
    for(int i=1; i <= sqrt(x) ; i++){
        if(x%i==0){
            ls.push_back(i);
            if((x/i)!=i){
                ls.push_back(x/i);
            }
        }
    }
    // O(n log n) : n is the number of factors

    sort(ls.begin(),ls.end());
    //o(number of factors)
    for(auto it: ls ) cout << it << " ";
    return 0;
}