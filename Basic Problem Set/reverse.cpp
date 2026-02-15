#include<bits/stdc++.h>
using namespace std;
int main(){
        int x;
        cin >> x;
        int sum=0;
        int rem=0;
        
        while(x!=0){
            rem = x%10;
            // if(sum > INT_MAX/10 || (sum == INT_MAX && rem > 7))
            //     return 0;
            // if(sum < INT_MIN/10 || (sum == INT_MIN && rem < -8))
            //     return 0;      
            sum = sum * 10 + rem;      
            x = x/10;
        }
        cout << sum;

}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     return 0;
// }