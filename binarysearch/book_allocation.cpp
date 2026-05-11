#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std ;
// is valid function -=========================================================
bool is_valid(vector<int>& arr, int n , int m, int maxAllowedPages) {  // O (logn)
    int stu = 1;
    int pages = 0;
    for(int i=0; i<n; i++) {

        if(arr[i] > maxAllowedPages) {
            return false;
        }

        if(pages + arr[i] <= maxAllowedPages) {
            pages += arr[i];
        }
        else {
            stu ++ ;
            pages = arr[i];
        }
    }
    // if(stu > maxAllowedPages) {
    //     return false;
    // }
    // else {
    //     return true;
    // }

    return stu > m ? false : true ;
}
// =============================================================================




// allocation function---------------
int allocate_books(vector<int>& arr, int n, int m) {   // total time complexity of overall code = O(logN * n)
    // edge case 1---------------------
    if(m>n) {
        return -1;
    }

    // finding the max book page number 
    int sum = 0;
    for (int i=0 ; i<n ; i++) {
        sum += arr[i];
    }

    int st=0 , end= sum ; // range = N: total number of book's pages
    int ans = -1;

    // main loop starts here

    while(st <= end) {
        int mid = st + (end-st)/2;
        // is valid function used

        if(is_valid(arr, n,m,mid)) {
            ans = mid;
            end = mid-1;
        }
        else {
            st = mid+1;
        }            

    }
    return ans;

}








int main() {
    vector<int> arr= {15, 17, 20};
    int n = 3;
    int m = 2;

    cout<< allocate_books(arr, n, m)<<endl;

    return 0;

}