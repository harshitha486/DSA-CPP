#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    int d;
    cin >> d;
    int temp[d];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0 ; i < d ; i++){
        temp[i] = arr[i];
    }
    for(int i = d; i < n ; i++){
        arr[i-d] = arr[i];
    }
    for (int i = 0 ; i < n; i++){
        arr[n-d+i] = temp[i];
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << "\n";
    }
    
    
}
