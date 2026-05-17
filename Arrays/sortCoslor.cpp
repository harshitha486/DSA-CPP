#include <bits/stdc++.h>
using namespace std;

void better(vector<int>& nums){
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 0) count0 ++;
        else if(nums[i] == 1) count1 ++;
        else count2 ++;
    }
    for (int i = 0; i < count0; i++)
    {
        nums[i] = 0;
    }
    for (int i = count0; i < (count0+count1); i++)
    {
        nums[i] = 1;
    }
    for (int i = (count0 + count1) ; i < nums.size(); i++)
    {
        nums[i] = 2;
    }
    
}

void optimal(vector<int>& nums){
    int low = 0, mid = 0, high = nums.size()-1;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid], nums[low]);
            low ++;
            mid ++;
        }
        else if(nums[mid] == 1) mid++;
        else {
            swap(nums[high], nums[mid]);
            high -- ;
        }
    }
}


int main(){
    vector<int> nums {1,0,2,1,0,1,2,0,0,2,1};

    // better(nums);
    optimal(nums);

    for(auto it: nums){
        cout << it << "\n";
    }
}