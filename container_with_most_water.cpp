// /* to run the cpp code we first need to compile(using g++ code.cpp ) then execute( using ./a.out ) or  (g++ code.cpp && ./a.out) */
#include <iostream>  /*preprocessor directory knows about cout operation */
#include <climits>
#include <vector>   // for vectors usage 
#include <algorithm>  // to use functions like min() and max()
using namespace std ; /* std:: cout << "": ko biapass krne ke lie we write this line */

// container with most water function ========== brute force approach O(n^2)
int maxArea(vector<int>& height) {
        int max_water=0;
        int n= height.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int width = j-i;
                int length = min(height[i], height[j]);
                int area = width*length;
                max_water = max(max_water, area);
            }
        }
        return max_water;
    }


// more optimized approach using 2 pointer  ==== O(n) time complexity
 int maxArea_2(vector<int>& height) {
        int max_water=0;
        int n= height.size();
        int lp= 0;
        int rp=n-1;
        while(lp<rp){
            int width = rp-lp;
            int length= min(height[lp], height[rp]);
            int area= length*width;
            max_water = max(max_water, area);
            (height[lp]<height[rp])?lp++ : rp-- ;
            }
        return max_water;
    }









int main(){
    vector<int> height={7,3,9,8,2,6,4};
    cout<<maxArea_2(height)<<endl;













    return 0;
}