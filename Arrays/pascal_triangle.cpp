#include <bits/stdc++.h>
using namespace std;

vector<int> nth_row(int n){

    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        ans = (ans * (n-i)) / i;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascal(int n){
    vector<vector<int>> ans;
    for (int i = 1; i <=n; i++)
    {
        ans.push_back(nth_row(i));
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> ans = pascal(n);
    for(auto row : ans){
        for(auto val: row){
            cout << val << " ";
        }
        cout << endl;
    }
}