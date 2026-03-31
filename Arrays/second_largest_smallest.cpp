//Day 1

#include <bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int n){
    int small = INT_MAX;
    int ssmall;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < small){
            ssmall = small;
            small = arr[i];
        }
        else if(arr[i] != small && arr[i] < ssmall){
            ssmall = arr[i];
        }
    } 
    return ssmall;
}


int secondLargest(int arr[], int n){
    int large = INT_MIN;
    int slarge;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > large){
            slarge = large;
            large = arr[i];
        }
        else if(arr[i] != large && arr[i] > slarge){
            slarge = arr[i];
        }
    } 
    return slarge;
}


int main(){
    int n,i;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int slargest = secondLargest(arr,n);
    int ssmallest = secondSmallest(arr,n);
    cout << "Second largest is " << slargest << " Second smallest is " << ssmallest ; 
}