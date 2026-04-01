#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    int d;
    cin >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr , arr+d );
    reverse(arr + d, arr + n);
    reverse(arr, arr+n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << "\n";
    }
    
    
    
}