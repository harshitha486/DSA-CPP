#include <bits/stdc++.h>
using namespace std;

int brute(int arr[], int n, int k){

    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if(sum == k) maxi = max(maxi, j-i+1 );
        }
        
    }
    
    return maxi;
}

int better(int arr[], int n , int k){
    int sum = 0;
    int maxi = 0;
    map<int,int> preMap;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum == k){
            maxi = max(maxi, i+1);
        }
        int rem = sum - k;
        if(preMap.find(rem) != preMap.end()){
            int len = i - preMap[rem];
            maxi = max(maxi, len);
        }
        if(preMap.find(sum) == preMap.end()){
            preMap[sum] = i;
        }
    }
    return maxi;
}

int optimal(int arr[], int n, int k){
    int i = 0, j = 0, maxi = 0, sum = 0;
    while(j < n){
        sum += arr[j];
        
        while(sum > k){
            sum -= arr[i];
            i++;
        }
        if(sum == k) maxi = max(maxi, j-i+1 );
        j++;
    }
    return maxi;
}


int main(){
    int n,k;
    cout << "enter n";
    cin >> n;
    int arr[n];
    cout << "enter k\n";
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << brute(arr, n, k);
    cout << better(arr, n, k);
    cout << optimal(arr, n, k);
}