#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;


int isValid(vector<int> &arr, int n , int m , int maxAllowedTime ) { // ============== O(n) 
    int painter = 1;
    int time = 0;
    for(int i=0; i<n; i++) {                         
        if(time + arr[i] <= maxAllowedTime) {
            time += arr[i] ;
        }
        else { // new painter
            painter++;
            time = arr[i];
        }
    }
    return painter <= m;
}


int minTime(vector<int> &arr, int n, int m) {
    // finding the smmallest 
    int maxVal = INT_MIN;
    int sum=0;

    for(int i=0; i<n; i++) {                        // ======== O(n)
        maxVal = max(maxVal, arr[i]);
        sum += arr[i];     // for sum of array

    }    
    int start = maxVal, end = sum, ans = -1;

    while(start<=end) {                    // ======== O(log(sum) * n)
        int mid = start + (end-start)/2 ;

        if(isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    return ans;
}


int main() {

    vector<int> arr = {40,30,10,20} ;
    int n = 4;
    int m = 2;

    cout << minTime(arr,n,m) << endl;
    return 0;
}