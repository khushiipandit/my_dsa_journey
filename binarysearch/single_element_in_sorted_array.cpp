// /* to run the cpp code we first need to compile(using g++ code.cpp ) then execute( using ./a.out ) or  (g++ code.cpp && ./a.out) */

#include <iostream>  /*preprocessor directory knows about cout operation */
#include <climits>
#include <vector>   // for vectors usage 
#include <algorithm>  // to use functions like min() and max()
using namespace std ; /* std:: cout << "": ko biapass krne ke lie we write this line */
// function --------------------------------
//==================================================== leetcode 540  =========================================
int single_in_sorted_array(vector<int>& arr){
    int n = arr.size();
    int st=0;
    int end=n-1;
    if(n==1){
        return arr[0];
    }
    while(st<=end){
        int mid = st+(end-st)/2;
        if(mid==0 && arr[0]!=arr[1]){
            return arr[mid];
        }

        if(mid==n-1 && arr[n-1]!=arr[n-2]){
            return arr[mid];
        }

        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }

        if(mid%2==0){
            if(arr[mid-1]==arr[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{
            if(arr[mid-1]==arr[mid]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return 0; 
}

int main(){

vector<int> arr={1,1,3,3,4,4,5};
cout<<single_in_sorted_array(arr)<<endl;




    return 0;
}