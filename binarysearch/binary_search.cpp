// /* to run the cpp code we first need to compile(using g++ code.cpp ) then execute( using ./a.out ) or  (g++ code.cpp && ./a.out) */

#include <iostream>  /*preprocessor directory knows about cout operation */
#include <climits>
#include <vector>   // for vectors usage 
#include <algorithm>  // to use functions like min() and max()
using namespace std ; /* std:: cout << "": ko biapass krne ke lie we write this line */


// =======================================Iteration approach ===================================================

// two pointer approach (optimized due to O(1)=> space complexity and O(logn)=> time complexity )

int binary_search(vector<int>& arr, int target){
    int n= arr.size();
    int st = 0;
    int end= n-1;
    while(st <= end) {

        int mid =st+((end-st)/2); // we're using this formula for minimizing complexity O(logn)

        if(target>arr[mid]){
            st=mid+1;
        }
        if(target<arr[mid]){
            end=mid-1;
        }
        if(target==arr[mid]){
            return mid;
        }
    }
    return -1;
}



//=====================================Recursive appproach=======================================================



int binary_search_2(vector<int>& arr, int target, int st, int end){
    if(st<=end){
        int mid =st+((end-st)/2); // we're using this formula for minimizing complexity O(logn)
        if(target>arr[mid]){
           return binary_search_2(arr,target, mid+1, end);
        }
        if(target<arr[mid]){
            return binary_search_2(arr,target,st,mid-1);
        }
        if(target==arr[mid]){
            return mid;
        }
    }
    return -1;
}



int main(){
vector<int> arr= {2,3,5,6,8,9,10};
int n= arr.size();
int target = 39;
int st=0;
int end = n-1;
cout<<"the target value is at index :"<<binary_search(arr, target)<<endl;;
// cout<<"the target value is at index :"<<binary_search_2(arr,target,st,end)<<endl;;





    return 0;
}