#include<bits/stdc++.h>
using namespace std;
int main(){
        int x;
        cin >> x;
        int sum = 0;
        int rem = 0;
        int a = x;
        while (x>0){
            rem = x%10;
            if (sum > INT_MAX/10 || (sum == INT_MAX/10 && rem >7))
                return 0;
            if(sum < INT_MIN/10 || (sum == INT_MIN/10 && rem < -8))
                return 0;
            sum = (sum * 10) + rem;
            x =x/10;
        }
        if(a==sum){
            cout << "true";
        }
        else 
            cout << "false";
    
}