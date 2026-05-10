// /* to run the cpp code we first need to compile(using g++ code.cpp ) then execute( using ./a.out ) or  (g++ code.cpp && ./a.out) */

#include <iostream>  /*preprocessor directory knows about cout operation */
#include <climits>
#include <vector>   // for vectors usage 
#include <algorithm>  // to use functions like min() and max()
using namespace std ; /* std:: cout << "": ko biapass krne ke lie we write this line */
// function --------------------------------
//==================================================== leetcode 852 ========================================
// O(logn) time complexity
int mount_array(vector<int>& arr){
    int n= arr.size();
    int st=1; // as the first and last value of a mountain array can never be he peak value
    int end=n-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid]>arr[mid-1]){
            st=mid+1;
        }
        if(arr[mid]>arr[mid+1]){
            end= mid-1;
        }
    }
    return -1;
}



int main(){
// mountain array are the array where the elements are incresing to a certain point and decreasing after it 

// that elemnet at that certain point is known as the peak elemnet of the mountain ARRAY 
// it is greater than the element to its left and greater than the elements to its right => "a[p-1]<a[p]>a[p+1]"
// also the first and last element can never be the peak element due to the mountain shape of the array points on graph
vector<int> arr={1,3,5,4,2};
cout<<mount_array(arr)<<endl;

















    return 0;
}