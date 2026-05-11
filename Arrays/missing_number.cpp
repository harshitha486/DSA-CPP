#include <bits/stdc++.h>
using namespace std;

int brute_force(int arr1[], int n){
    for(int i = 1 ; i <= 8 ; i ++){
        int flag = 0 ;
        for(int j = 0 ; j < 7 ; j ++){
            if(arr1[j] == i){
                flag = 1;
                break;
            }
        }
    
        if(flag == 0){
            return i;
        }
    
    }
    return -1;
}

int better(int arr1[], int n){
    int hash[n+2];
    for (int i = 0; i <= n+1 ; i++)
    {
        hash[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        hash[arr1[i]] = 1;
    }
    
    for (int i = 1; i <= n+1 ; i++)
    {
        if(hash[i] == 0){
            return i;
        }
    }
    
    return -1;
}

int optimal(int arr[], int n){

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int s2 = ((n+1)* (n+2)) / 2;

    return s2-sum;
}

int optimal2(int arr[], int n){

    int xor1 = 0, xor2 = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        xor1 = xor1 ^ arr[i];
        xor2 = xor2 ^ (i + 1);
    }

    xor2 = xor2 ^ (i + 1);

    return xor1 ^ xor2;
    
}

int main(){
    int arr1[7] = {1,2,3,4,5,6,8};
    
    int num = brute_force(arr1, 7);
    int num1 = better(arr1, 7);
    int num2 = optimal(arr1, 7);
    int num3 = optimal2(arr1, 7);

    cout << num;
    cout << num1;
    cout << num2;
    cout << num3;

}