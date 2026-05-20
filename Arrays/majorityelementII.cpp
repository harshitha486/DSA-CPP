#include <bits/stdc++.h>
using namespace std;


vector<int> brute(vector<int> nums){
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if(find(ans.begin(), ans.end(), nums[i]) == ans.end()){
            int cnt = 0;
            for(int j = 0 ; j < n; j++){
                if(nums[i] == nums[j]) {
                    cnt++;
                }
            }
            if(cnt > (n/3)){
                ans.push_back(nums[i]);
            }
        }
        if(ans.size() == 2) 
            break;
    }
    return ans;
}


vector<int> better(vector<int> nums){
   
    unordered_map<int,int> hashMap;
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        hashMap[nums[i]]++;
    }
    for(auto it:hashMap){
        if(it.second > (n/3)) ans.push_back(it.first);
    }
    return ans;
}
   
vector<int> optimal(vector<int> nums){
   
    int n = nums.size();
    vector<int> ans;
    int c0 =0, c1 = 0;
    int ele1 = INT_MIN, ele2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(c0 == 0 && nums[i] != ele2){
            ele1 = nums[i];
            c0 = 1;
        }
        else if(c1 == 0 && nums[i] != ele1){
            ele2 = nums[i];
            c1 = 1;
        }
        else if(nums[i] == ele1){
            c0 ++;
        }
        else if(nums[i] == ele2){
            c1 ++;
        }
        else{
            c0--;
            c1--;
        }
    }
        int count = 0, count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if(nums[i] == ele1) count++;
            else if(nums[i] == ele2) count1 ++;
        }
        if(count > (n/3)) ans.push_back(ele1);
        if(count1 > (n/3)) ans.push_back(ele2);
        
    
    return ans;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,4,5};

    vector<int> nums1 = brute(nums);
    vector<int> nums1 = better(nums);
    vector<int> nums1 = optimal(nums);
    for(auto it : nums1){
        cout << it << " ";
    }
    
}