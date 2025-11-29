
// /* to run the cpp code we first need to compile(using g++ code.cpp ) then execute( using ./a.out ) or  (g++ code.cpp && ./a.out) */

#include <iostream>
#include <vector>
#include <climits> // for the INT_MAX and INT_MIN 
using namespace std;

// vector<int> pair_sum(vector<int> &inp, int target){
//     vector<int> ans;
//     int n= inp.size();

//     // not optimize method including 2 loops resulting in O(n^2)
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){

//             if(inp[i]+inp[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;

//             }
            
//         }
//     }
//     return ans;
// }
// // optimized method using two pointer approach 

// vector<int> two_pointer_sum(vector<int>& inp, int target){
//     int n= inp.size();
//     int st=0;
//     int end=n-1;
//     vector<int> ans;
//     while(st<end){
//         int sum = inp[st]+inp[end];
//         if(sum>target){
//             end--;
//         }if(sum<target){
//             st++;
//         }if(sum==target){
//             ans.push_back(st);
//             ans.push_back(end);
//             return ans;
//         }
//     }
//     return ans;
// }
// // majority element : bruite force approach 
// int majorityElement(vector<int>& inp) {
//        int n= inp.size();

//        for(int val:nums){
//         int count=0;

//         for(int var:nums){
//             if(val==var){
//                 count++;
//             }
//         }
//         if(count>n/2){
//             return val;
//         }
//        }
//        return -1;

//     }
// // majority element: more optimized approach using sorting
// vector<int> major_el_sorted(vector<int> inp){
//     int n = arr.size();
//     // sort using sort function as sort(arr.begin(), arr.end()) arr.begin is the first element and arr.end is the last one
//     sort(inp.begin(), inp.end());
//     int count=1;
//     int ans= inp[0];
//     for(i=1;i<n;i++){

//         if(inp[i]==inp[i-1]){
//             count++;
//         }else{
//             count=1;
//             ans = inp[1];
//         }
//         if(count>n/2){
//             return ans;
//         }

//         return ans;
//     }
// }
// majority element : most opptimized method using moore's voting algo
vector<int> major_el_moore(vector<int>& arr){
    int n = arr.size();
    int count=0;
    int ans=0;
    vector<int> result;

    for(int i=0;i<n;i++){
        if(count==0){
            ans=arr[i];
        }
        if(ans == arr[i]){
            count++;
        }else{
            count--;
        }
    }
    int counter = 0;
    for(int val : arr){
        if(val==ans){
            counter ++;
        } 
    }
    if(counter>n/2){
        result.push_back(ans);
    }
    return result;
    
}

// compute x^n expression WITH LOG N COMPLEXITY
double mypow(double x, int n){
    long binform = n;
    double ans = 1;
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n%2==0) return 1.0;
    if(x==-1 && n%2!=0) return -1.0;

    if(binform <0){
        x= 1/x;
        binform = -binform;
    }

    while(binform > 0){
        if(binform % 2 == 1){ //binform like 1 0 1
            ans *=x;             
        }
        x *= x;
        binfrom /=2;
    }
    return ans;
}








int main(){


// to calculate the two sum of an array     
// vector<int> inp={2,5,7,8,9};
// int n= inp.size();
// int target=11;
// vector<int> ans = pair_sum(inp, target);
// cout<<ans[0]<<","<<ans[1]<<endl;
    
// // optimized method using two pointer

// vector<int> ans = two_pointer_sum(inp, target);
// cout<<ans[0]<<","<<ans[1]<<endl;
 
// majority element: ME is found in the array for more than floor(n/2) times like in an array[5] ME apperas for >3 tym
//=================== leetcode problem no 169  ============================================================

// bruite force approach : not feasable 
vector<int> arr={9,8,2,9,2};

vector<int> res = major_el_moore(arr);
cout<<"The Majority Element is : ";
for(int val: res){
    cout<< val <<" ";
}
cout<< endl ;

// compute x^n expression 






    return 0;
}