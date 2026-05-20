#include <bits/stdc++.h>
using namespace std;


void brute(vector<vector<int>> &matrix){

    int n = matrix.size();
    vector<vector<int>> mat1(n, vector<int>(n));
    
    for(int i = 0; i < n ; i ++){
        for(int j = 0 ; j < n ; j ++){
            mat1[j][n-1-i] = matrix[i][j];
        }
    }
    for(int i = 0; i < n ; i ++){
        for(int j = 0 ; j < n ; j ++){
            cout << mat1[i][j];
        }
        cout << "\n";
    }
}

void optimal(vector<vector<int>> &matrix){

    int n = matrix.size();
    for(int i = 1 ; i < n; i ++){
            for(int j = 0 ; j < i ; j ++ ){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    for(int i = 0 ; i < n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}


int main(){
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // brute(arr);

    optimal(arr);
    int n = arr.size();
    for(int i = 0; i < n ; i ++){
        for(int j = 0 ; j < n ; j ++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
}