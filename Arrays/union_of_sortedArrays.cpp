#include <bits/stdc++.h>
using namespace std;

vector<int> Union(int arr1[], int arr2[],int n1, int n2){
    
    int i = 0; 
    int j = 0;
    vector<int> unionArr;
    while ( i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else {
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while( j < n2){
        {
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while( i < n1){
        {
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
    }
    return unionArr;
}
int main(){
    int arr1[7] = {1, 1, 2, 2, 3, 4, 5};
    int arr2[6] = {2, 3, 4, 4, 5, 6};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> unionArr = Union(arr1, arr2, n1, n2);
    for(auto it : unionArr){
        cout << it << " ";
    }

}