#include <iostream>
#include <vector>
#include <climits> // for the INT_MAX and INT_MIN 
using namespace std;

int main(){
int n =5;
int arr[5]= {1,2,3,4,5};
// printing all the subarrays of an array O(N^3)
// for(int st=0;st<n;st++){
//     for(int end=st;end<n;end++){
//         for(int i=st;i<=end;i++){
//             cout<<arr[i];
//         }
//         cout<<" ";
//     }
//     cout<<endl;
// }

// printing the maximum subarray using broute froce approach O(N^2)
// int max_sum= INT_MIN;
// for(int st=0;st<n;st++){
//     int current_sum=0;
//     for(int end=st;end<n;end++){
//         current_sum += arr[end];
//         max_sum= max(current_sum, max_sum);
       
//     }
// }
// cout<<"maximum subarray is : "<< max_sum<<endl;
//======================= leetcode problem no 53 - maximum subarray (using kadane's algo)=============================
// Kadane's algo fro printing the max subarray (most optimized with O(n) time complexity) 
// it is an example of dynamic programming where we breakdown the bigger problem into smaller ones
int max_sum=INT_MIN;
int current_sum=0;
for(int i=0;i<n;i++){
    current_sum +=arr[i];
    max_sum=max(current_sum,max_sum);
    if(current_sum<0){
        current_sum=0;
    }
}
cout<<"maximum subarray is : "<< max_sum<<endl;


    return 0;
}