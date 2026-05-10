// /* to run the cpp code we first need to compile(using g++ code.cpp ) then execute( using ./a.out ) or  (g++ code.cpp && ./a.out) */

#include <iostream>  /*preprocessor directory knows about cout operation */
#include <climits>
#include <vector>   // for vectors usage 
#include <algorithm>  // to use functions like min() and max()
using namespace std ; /* std:: cout << "": ko biapass krne ke lie we write this line */


// rotated sorted array O(logn)
int search(vector<int>& nums, int target) {
        int st=0;
        int end = nums.size()-1;
        while(st<=end){
            int mid= st+(end-st)/2;
        if(target==nums[mid]){
            return mid;
        }

        else if(nums[st]<=nums[mid]){
            if(nums[st]<=target && target<=nums[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }

        else {
            if(nums[mid]<=target && target<=nums[end]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        }
        return -1;
        
    }







int main(){

vector<int> nums={4,5,6,7,0,1,2};
int target = 6;
cout<<search(nums, target)<<endl;







    return 0;
}