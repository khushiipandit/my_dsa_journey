#include <iostream>  /*preprocessor directory knows about cout operation */
#include <vector>
using namespace std;
// use -std=c++11 in the command to let the terminal know that we are using c++11 fro vectors ex- "g++ -std=c++11 vectors.cpp && ./a.out"

// ========================================      function definitaions ================================================================
// linear search insided the vector----------------------------- to get the index of the item found in the vector
int linear_search_vector(vector<int>& vactor_linear, int item){
    int size = vactor_linear.size();
    for(int i=0;i<size;i++){
        if(item==vactor_linear[i]){
            return i;
        }
    }
    return -1;
}
// reverse of the vector ------------------------------------
void reverse_of_vector(vector<int>& vactor_linear){
    int size=vactor_linear.size();
    for(int i=size;i>0;i--){
        cout<<vactor_linear[i];
    }
}

int main(){
cout<<"hello"<<endl;
// declaration of vectors 
// vector<int> vac; // size 0 because  no element is stored in it, cout<<vac[0] results in segmentation error i.e, we are trying to access the place from the memory which doe not exists 
// vector<int> vacc={1,2,3,4}; // second type of initialization 
// cout<<vacc[2]<<endl;
// vector<int> vact(5,2); // third declaration type , with size = 5 , and elements are 2
// cout<<vact[0]<<endl;
// cout<<vact[1]<<endl;
// cout<<vact[2]<<endl;
// cout<<vact[3]<<endl;
// cout<<vact[4]<<endl;

// // looping in vectors are like the iteration is not on the indexing but the actual value at that index 
// vector<char> char_vec={'a','b','c'};
// for(char val:char_vec){
//     cout<<val<<endl; // unlike arrays where elements are printed like a[i] here i is the element itself
// }
// // vector functions 

// // vac.size()
// int size= char_vec.size(); // 3
// cout<<size<<endl;

// // vac.push_back() : to add/ push an element to the back of the vactor 
// cout<<"size before push_back: "<<vac.size()<<endl;
// vac.push_back(24);
// cout<<"size after push_back: "<<vac.size()<<endl;
// vac.push_back(14);
// vac.push_back(74);
// vac.push_back(44);
// cout<<"size after push_back: "<<vac.size()<<endl; // to print the values after inserting / pushing into the vactor
// for( int value:vac){
//     cout<<value<<endl;
// }

// // pop_back : to delete the element from the last 
// cout<<"size before pop_back: "<<vac.size()<<endl;
// vac.pop_back();
// cout<<"size after pop_back: "<<vac.size()<<endl;

// // front() : the first/ front value in the vactor
// cout<<vac.front()<<endl;//24

// // back() : the last / back value in the vactor
// cout<<vac.back()<<endl;//74

// // at(): to access a value at a particular index 
// cout<<"the value at 2 index is : "<<vac.at(2)<<endl;//74

// // ================= static   vs    dynamic allocation in vactors ==========================
// vector<int> v={1,2,3}; // static   ----- compile time allocation --- stack memory

// vector<int> v2;       // dynamic   ----- run time allocation  --- heap memory 
// cout<<v2.size()<<endl;       // when we assign value to an empty vector it creates a vector of size 1 and when we add another , this size doubles into 1*2 = 2  
// v2.push_back(4);            // when we add 3 elements using push_back into an empty vector the size and the capacity differes 
// v2.push_back(6);             // the size is the number of element of the vector while the capacity is the number of elements it can carry 
// v2.push_back(8);  
// cout<<v2.size()<<endl; // 3
// cout<<v2.capacity()<<endl;  // 4

// ===================================== leetcode problem no 136 - single number ===============================================================
// the problem talks about printing the single unique value present in the vector , so as we know the bitwise xor operator has a property where 
// 0^0=0, 1^1=0, 1^0=1,0^1=1, so  to cancelout the similar digits we use the bitwise xor to get the unique value as
// int ans=0;
// if(int val:nums){
//     ans^=val;
// }
// return ans;
// when vectors are passed to a function they are passes by value by default so to pass them by referance we use & before the name of the vector
// linear search on vector
vector<int> vactor_linear={2,6,1,5,6};
int item=1;
int res = linear_search_vector(vactor_linear, item);
if(res==-1){
    cout<<"item not found"<<endl;
}else{
    cout<<"item found at : "<<res<<endl;
}
// reverse of the vector -------------------------------------
reverse_of_vector(vactor_linear);


return 0;
}