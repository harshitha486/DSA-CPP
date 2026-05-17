#include <bits/stdc++.h>
using namespace std;

void markrow(vector<vector<int>> &arr, int i, int m){
    for(int j = 0; j < m ; j ++){
        arr[i][j] = -1;
    }
}

void markcol(vector<vector<int>> &arr, int j, int n){
    for(int i = 0; i < n ; i ++){
        arr[i][j] = -1;
    }
}

void brute(vector<vector<int>> &arr, int m, int n){
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0; j < m ; j ++){
            if(arr[i][j] == 0){
                markrow(arr, i, m);
                markcol(arr, j, n);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == -1) arr[i][j] = 0;
        }
        
    }
    
}

void better(vector<vector<int>> &arr, int m, int n){

    vector<int> row(n,0);
    vector<int> col(m,0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if( arr[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            if( row[i] || col[j]) arr[i][j] = 0;
        }
        
    }
    
}

void optimal(vector<vector<int>> &arr, int m, int n){
    int col0 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == 0){
                arr[i][0] = 0;
                if(j != 0) arr[0][j] = 0;
                else col0 = 0;
            }
        }
        
    }
    
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if(arr[i][j] != 0){
                if( arr[0][j] == 0 || arr[i][0] == 0){
                    arr[i][j] = 0;
                }
            }
        }
        
    }

    if( arr[0][0] == 0){
        for(int j = 0 ; j < m ; j++) arr[0][j] = 0;
    }
    if(col0 == 0){
        for(int i = 0; i < n; i++) arr[i][0] = 0;
    }
    
}

int main(){
    vector<vector<int>> arr = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    int n = arr.size();
    int m = arr[0].size();
    // brute(arr, m, n);
    // better(arr, m ,n);
    optimal(arr, m ,n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}