#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    //finding greatest element
    int large = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(large < arr[i]) {
            large = arr[i];
        }
    }

    int second_large = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if( arr[i] != large && second_large < arr[i]) second_large = arr[i];
    }
    

    cout << " largest element is " << large << "second largest is " <<  second_large ;


    return 0;
    
}
