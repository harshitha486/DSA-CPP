#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    for (int i = 0; i < n-1 ; i++)
    {
        if(arr[i] <= arr[i+1]){

        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    bool x= isSorted(arr,n);
    if(x == 1){
        cout << "Sorted";
    }
    else{
        cout << "Not Sorted";
    }
}
