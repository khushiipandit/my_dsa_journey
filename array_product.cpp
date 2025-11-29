// /* to run the cpp code we first need to compile(using g++ code.cpp ) then execute( using ./a.out ) or  (g++ code.cpp && ./a.out) */

#include <iostream>  /*preprocessor directory knows about cout operation */
#include <climits>
#include <vector>   // for vectors usage 
#include <algorithm>  // to use functions like min() and max()
using namespace std ; /* std:: cout << "": ko biapass krne ke lie we write this line */
// function --------------------------------

// brute force approach 
// vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int> ans= {};
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             int product= 1;
//             for(int j=0;j<n;j++){
//                 if(i!=j){
//                     product*= nums[j];
//                 } 
//             }
//             ans.push_back(product);
//         }
//     return ans;   
// }
// optimized approach---------------------------------

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans= {};
    vector<int> prifix(n,1);
    vector<int> suffix(n,1);

    // prifix
    for(int i=1;i<n;i++){
        prifix[i]= prifix[i-1] * nums[i-1];

    }

    // suffix
    for(int i=n-2;i>=0;i--){
        suffix[i]= suffix[i+1] * nums[i+1];
    }

    for(int j=0;j<n;j++){
        int prod = prifix[j] * suffix[j];
        ans.push_back(prod);
    }


    return ans;   
}

// most optimized ( space optimized too )

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans= {};
    vector<int> suffix(n,1);

    // prifix
    for(int i=1;i<n;i++){
        ans[i]= ans[i-1] * nums[i-1];
    }
    // suffix
    int suffix=1;
    for(int i =n-2;i>=0;i--){
        suffix*= nums[i+1];
        ans[i]*=pointersuffix;
    }


    return ans;   
}





int main(){

vector<int> nums=[3,6,2,8,5];
cout<<productExceptSelf(nums)<<endl;













    return 0;
}