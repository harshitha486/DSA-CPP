#include <bits/stdc++.h>
using namespace std;

vector<int> intersection_bruteforce(int arr1[], int arr2[],int n1, int n2){
    
    int i = 0; 
    int j = 0;
    vector<int> intersectionArr;
    
    for (int i = 0; i < n1 ; i++)
    {
        for (int j = 0; j < n2 ; j++)
        {
            if(arr1[i] == arr2[j] ){
                if(intersectionArr.size() == 0 || intersectionArr.back() != arr1[i]){
                    intersectionArr.push_back(arr1[i]);
                }
                break;
            }
        }
        
    }
    
    return intersectionArr;
}

vector<int> intersection_optimal(int arr1[], int arr2[], int n1, int n2){
    int i = 0, j = 0;
    vector<int> intersectionArr;
    
    while (i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j]) i++;
        if(arr1[i] > arr2[j]) j++;
        else if(arr1[i] == arr2[j]){
            intersectionArr.push_back(arr1[i]);
            i ++ ;
            j ++;
        }
    }
    return intersectionArr;
}
int main(){
    int arr1[7] = {1, 1, 2, 2, 3, 4, 5};
    int arr2[6] = {2, 3, 4, 4, 5, 6};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // vector<int> intersectionArr = intersection_bruteforce(arr1, arr2, n1, n2);
    vector<int> intersectionArr = intersection_optimal(arr1, arr2, n1, n2);
    for(auto it : intersectionArr){
        cout << it << " ";
    }

}