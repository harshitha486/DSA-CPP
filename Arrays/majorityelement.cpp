#include <bits/stdc++.h>
using namespace std;

int better(vector<int> nums){
    map<int,int> hashMap;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        hashMap[nums[i]]++;
    }
    for(auto it:hashMap){
        if(it.second > (n/2)) return it.first;
    }
    return -1;
    
}

int optimal(vector<int> nums){
    int n = nums.size();
   
    int count = 0;
    int ele = 0;
    for(int i = 0; i < n; i++){
        if(count == 0){
            ele = nums[i];
            count = 1;
        }
        else if(ele == nums[i]){
            count ++;
        }
        else if(ele != nums[i]){
            count --;
        }
       
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if(ele == nums[i]) c ++;
    }
    if(c > n/2) return ele;
    else return -1;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << better(nums);
    cout << optimal(nums);
}