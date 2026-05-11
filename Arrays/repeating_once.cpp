#include <bits/stdc++.h>
using namespace std;


int bruteForce(int arr[], int n){
    int count = 0;
    int num;
    for (int i = 0; i < n; i++)
    {
        num = arr[i];
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if(arr[j] == num) count ++;
        }
        
        if(count == 1) return num;
    }
    return -1;
    
}

int better(int arr[], int n){
    int maxi = *max_element(arr, arr + n);
    int hash[maxi];
    for (int i = 0; i <= maxi ; i++)
    {
        hash[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 1; i <= maxi; i++)
    {
        if(hash[i] == 1){
            return i;
        }
    }
    
    return -1;
}

int main(){
    int arr[9] = {1,1,2,2,3,3,4,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int num = bruteForce(arr, n);
    cout << better(arr,n);
    cout << num;

}