// /* to run the cpp code we first need to compile(using g++ code.cpp ) then execute( using ./a.out ) or  (g++ code.cpp && ./a.out) */

#include <iostream>
#include <vector>
#include <climits> // for the INT_MAX and INT_MIN 
using namespace std;


// pass by reference using pointer 

void change(int* ptr_value){
    // change the value in main function 
    *ptr_value=40;
}

// pass by reference using alias 

void change2(int &alias_of_b){
    // change the value in main function 
    alias_of_b=40;
}

int main(){

// pointers are the variables which stores the address of other variables
int a=18; // normal variables declaration
int* ptr_of_a= &a;   // declaration of a pponiter of a variable , the type of pointer must be same as the variable
// cout<<a<<endl;
// cout<<ptr_of_a<<endl;
// pointer to pointer : pointer which stores another pointer

float var =2.0;
// cout<<var<<endl; // normal float variable // 2
// cout<<sizeof(var)<<endl;
// cout<<&var<<endl; // pointer of a normal float variable 
float* ptr_var = &var;
// cout<<sizeof(ptr_var)<<endl; // size of a normal pointer
// cout<<ptr_var<<endl;  
float** ptr_ptr_var = &ptr_var;
// cout<<ptr_ptr_var<<endl;
// cout<<sizeof(ptr_ptr_var)<<endl;

// Dereference of pointer : it is when the value at the poniter is returned done by" *(&variable)""

// cout<<*(&var)<<endl; // 2 
// cout<<&var<<endl; // 0x7ffeb6bb99ac
// cout<<*(ptr_var)<<endl; // returns value at ptr_var refer to the image - pointer.jpeg // 2
// cout<<*(ptr_ptr_var)<<endl;  // 0x7ffeb6bb99ac
// cout<<**(ptr_ptr_var)<<endl; // 2 &var == ptr_var == *ptr_ptr_var

// NULL pointer ---------------- pointer with no initial value , #can not be dereferenced
 int** ptr= NULL;
//  cout<<ptr<<endl; /// 0x0


//===================  PASS BY REFERENCE USING POINTERS ===========================================================


// int value= 10;
// change(&value);
// cout<<"value in main function :"<<value<<endl;

//===================  PASS BY REFERENCE USING ALIAS ===========================================================


int b= 10;
change2(b);
cout<<"value in main function :"<<b<<endl;








    return 0;
}