#include <bits/stdc++.h>
using namespace std;


vector<int> brute(vector<int> nums){
    int n = nums.size();
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i+1; j < n; j++)
        {
            if(nums[i] < nums[j]){
                leader = false;
                break;
            }
        }
        if(leader) temp.push_back(nums[i]);
        
    }
    return temp;
    
}

vector<int> optimal(vector<int> nums){
    int maxi = INT_MIN;
    int n = nums.size();
    vector<int> temp;
    for (int i = n-1; i >= 0; i--)
    {
        if(nums[i] > maxi){
            temp.push_back(nums[i]);
            maxi = nums[i];
        }
    }
    
    reverse(temp.begin(), temp.end());
    return temp;
    
}
int main(){
    vector<int> nums {10,22,12,0,6};
    vector<int> arr= brute(nums);

    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl;

    vector<int> arr1 = optimal(nums);
    for(auto it: arr1){
        cout << it << " ";
    }         
}