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
// =========================================DEREFERENCES=========================================================
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
// cout<<"value in main function :"<<b<<endl;

// ================================ ARRAY POINTER ================================================================

int arr[] = {1,3,5,6};
// arr ( the name of any array) contain the address of the first element of the array

// cout<<arr<<endl; // address of arr[0] i.e 0x7ffe8fa1b7f0
// cout<<*arr<<endl; // value at address arr[0] i,e 1
// array pointers are always constant variables 


/// ================= POINTER ARITHMETICS =========================================================================

// Increment & Decrement operation ++ and -- adds/subtract an integer , i.e 4 bytesfrom the pointer
int x=4;
int y=5;
int* ptrx = &a;
// cout<<ptrx<<endl; // 0x7ffe99066218 => 18 -> 19 -> 1a -> 1b -> 1c
// ptrx++; 
// cout<<ptrx <<endl; // 0x7ffe9906621c => ic <- 1b <- 1a <- 19 <- 18
// ptrx--;
// cout<<ptrx<<endl;  // 0x7ffe99066218


// subraction and addition 

// ptrx = ptrx + 2; // 2 integers => 8 bytes 
// cout<<ptrx<<endl; //  0x7fffb07b3320 added 8 bytes 

// // so in our array 
// cout<<arr<<endl; // arr[0]  => 1
// cout<<*(arr+1)<<endl; //arr[1]  => 3
// cout<<*(arr+2)<<endl; // arr[2] => 5
// cout<<*(arr+3)<<endl;  // arr[3]  => 6
// cout<<*(arr-1)<<endl;

// the addition of two pointers is not allowed in c++ but the subraction is allowed if both pointers has same datatype
int* point1= &x;
int* point2 = point1+2;
// cout<<point2-point1<<endl; // 2 => integers
// comparision 
int* pointerr1;
int* pointerr2;
cout<< pointerr1<<endl;
cout<< pointerr2<<endl;
cout<<(pointerr1<pointerr2)<<endl;
cout<<(pointerr1>pointerr2)<<endl;
cout<<(pointerr1 == pointerr2)<<endl;

    return 0;
}