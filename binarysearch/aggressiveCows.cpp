#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

                   // full coomplexity => O(nlog(Range))

int isPossible(vector<int>& arr, int n, int m,int possibleDistance) {  //    O(n)
    int cows = 1 , lastStallPos = arr[0];

    for(int i=1; i<n; i++) {
        if(arr[i] - lastStallPos >= possibleDistance) {
            cows++;
            lastStallPos = arr[i];
        }
        if(cows == m) {
            return true;
        }
    }
    return false;  
}


int cowsDistance(vector<int>& arr, int n , int m) {     // O(nlogn)
    // sort array => also gives max value->arr[n-1] , min value -> arr[0]
    sort(arr.begin() ,arr.end());
    int ans = 0;
    int st=1;
    int end = arr[n-1]-arr[0];    //FIND THE END "Biggest"
    

    // case 1
    if(arr.size() == 1) {
        return -1;
    }

    // main loop=====================================
    while(st <= end) {     // O(log(Range))
        int mid = st + (end-st)/2;
        if(isPossible(arr,n,m,mid)) {
            ans = mid;
            st = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return ans;
}


int main() {
    vector<int> arr = {1,2,8,4,9} ;
    int n = 5;
    int m = 3;

    cout<< cowsDistance(arr, n, m) << endl ;

    return 0;

}
