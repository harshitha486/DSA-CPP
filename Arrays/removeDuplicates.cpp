#include <bits/stdc++.h>
using namespace std;


int removeDuplicates(int arr[], int n){
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto it : st){
        arr[index] = it;
        index++;
    }
    return index;
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int newSize = removeDuplicates(arr,n);
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
}
