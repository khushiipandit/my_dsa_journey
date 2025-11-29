// /* to run the cpp code we first need to compile(using g++ code.cpp ) then execute( using ./a.out ) or  (g++ code.cpp && ./a.out) */


#include <iostream>  /*preprocessor directory knows about cout operation */
#include <climits>
#include <vector>   // for vectors usage 
#include <algorithm>  // to use functions like min() and max()
using namespace std ; /* std:: cout << "": ko biapass krne ke lie we write this line */
// function --------------------------------
// buy and sale  ==================  O(n) time complexity============================================================
int buy_sell(vector<int>& prices){
    int max_profit = 0;
    int best_buy = prices[0];
     for(int i=1; i<prices.size();i++){
        if (prices[i]>best_buy){
            max_profit= max(max_profit, prices[i]-best_buy);
        }
        best_buy= min(best_buy,prices[i]);
     }
    return max_profit;
}





int main(){


// buy & sell
vector<int> prices={10,2,1,5,7,3,9};

cout<<buy_sell(prices)<<endl;


    return 0;
}