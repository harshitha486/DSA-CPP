#include <bits/stdc++.h>
using namespace std;

bool ls(vector<int> nums, int k){
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == k) return true;
    }
    return false;
}
int brute(vector<int> nums){
    int n = nums.size();
    int longest = 0;
    for (int i = 0; i < n; i++)
    {
        int x = nums[i];
        int count = 1;
        while(ls(nums, x+1) == true){
            x+=1;
            count++;
        }
        longest = max(longest, count);
    }
    return longest;
}

int better(vector<int> nums){
    sort(nums.begin(), nums.end());
    int lastsmall = INT_MIN;
    int count = 1;
    int longest = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]-1 == lastsmall ){
            count ++;
            lastsmall = nums[i];
        }
        else if(nums[i] == lastsmall)   {}
        else if(nums[i] != lastsmall){
            count = 1;
            lastsmall = nums[i];
        }
        longest = max(longest, count);
    }
    return longest;
}

int optimal(vector<int> nums){
    unordered_set<int> st;
    int count = 0;
    int longest = 1;
    if(nums.size() == 0) return 0;
    for (int i = 0; i < nums.size(); i++)
    {
        st.insert(nums[i]);
    }
    for(auto it : st){
        if(st.find(it-1) == st.end()){
            count = 1;
            int x = it;
            while (st.find(x+1) != st.end()){
                count ++;
                x++;

            } 
            
        }
        longest = max(longest, count);
    }
    return longest;
}

int main(){
    vector<int> nums{100,4,200,1,3,2};
    cout << brute(nums);
    cout << better(nums);
    cout << optimal(nums);
}