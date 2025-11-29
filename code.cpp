
// /* to run the cpp code we first need to compile(using g++ code.cpp ) then execute( using ./a.out ) or  (g++ code.cpp && ./a.out) */

#include <iostream>  /*preprocessor directory knows about cout operation */
#include <climits>
using namespace std ; /* std:: cout << "": ko biapass krne ke lie we write this line */
// function --------------------------------

int fact(int n){
    int fact=1;
    for(int i=1;i<n;i++){
        fact *=i;
       
    }
     return fact;

}

//sum of digits 
int sum(int num){
    int sumOfDigits=0;
    while (num >0){
            int r = num%10;
            num/=10;
            sumOfDigits+=r;
    }
    return sumOfDigits;

}
//nCr--------
int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;

}
int computenCr(int n, int r){
    int factOfn= factorial(n);
    int factOfr= factorial(r);
    int factOfnmr= factorial(n-r);
    return factOfn/(factOfr*factOfnmr);
}
// check for prime or not 
void checkPrime(int n){
    bool isPrime= true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime=false;
        }
    }
    if(isPrime==true){
        cout<<"the number is prime"<<endl;
    }else{
        cout<<"the number is non prime"<<endl;
    }

}
// function to write all the prime numbers from 2 to n 
void allPrime(int n){

   
    for(int i=2;i<=n;i++){
    bool isPrime=true;
    for(int j=2;j*j<=i;j++){
        if(i%j==0){
            isPrime=false;
        }
    }
     if(isPrime==true){
        cout<<i<<endl;
    }  
}
}
// function to print nth fibonacci--------------------------------------------------------------------------
void nfibonacci(int n){
    int fib=0;
    for(int i=0;i<=n;i++){
        fib+=i;
    }
    cout<<fib<<endl;
}
// function for decimal to binary conversion ----------------------------------------
int decToBinary(int n){
    int pow=1;
    int r=1;
    int ans=0;
    while(n>0){
        r = n%2;
        n/=2;
        ans+=r*pow;
        pow*=10;
        
    }
  return ans;  

}
// binary to decimal ---------------------------------------------------
int binaTodec(int n){
    int bin=0;
    int ans=0;
    int r=0;
    int pow=1;
    while(n>0){
        r=n%10;
        n/=10;
        ans+=r*pow;
        pow*=2;
}
return ans;
}

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}
// linear search function ================================================================
 int search_linear(int ray[], int size, int item){
    for(int i=0;i<size;i++){
        if(ray[i]==item){
            return i;
        }
    }
    return -1;
 }
 // function for printing allm the unique values in an array 
void printUnique(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isUnique = true;

        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
            cout << arr[i] << " ";
    }
}

// to print the intersection of two arrays
void array_intersection(int arr1[], int arr2[], int n){
    
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr1[i]==arr2[j]){
                    cout<<arr1[i]<<endl;
                    break;// avoid printing duplicates if b contains multiple same values
                }
            }
        }
    
}








int main(){
    /* output is produced by using */
//     cout <<"let's do it " << "\n"; /* out <<"let's do it" for the normal output printing and adding  << endl or 
//                                      << "\n" for the next line presence in the output  */
//                                      /* or using cout <<"let's do it\n; works the same " */
//     cout <<"let's do it\n"   ;                             
// /* to print multiple things in the same line */
//     cout <<"hey "<< "khushi"<<" i am here" << endl;



// /* to run the cpp code we first need to compile(using g++ code.cpp ) then execute( using ./a.out ) or  (g++ code.cpp && ./a.out) */

// // now to know about the variables in cpp int(4 bytes) , char(1), 
// int age = 25;
// char name = 'k';
// float PI = 3.14f ; // madateory to put f to let the compilor know that it is a float value not double value
// bool issafe = true; // true -> 1 , false -> 0
// double price = 100.99;
// cout<<PI<<endl;
// cout <<name<<endl;   // k
// string fullname = "khushi";

// cout<<fullname<<endl;
// cout<< price<<endl;  // 100.99
// cout << issafe<<endl;  // 1 as it had the value "true"
// cout <<"the age of my teacher is :"<< age << endl;

// cout<<sizeof(age)<<endl;  // 4
// cout<<sizeof(name)<<endl;  // 1
// cout<<sizeof(PI)<<endl;    // 4
// cout<<sizeof(price)<<endl;  // 8

// // type conversion implicit (om smaller type data type to the larger data type ), explicit (from the larger to the smaller)
// cout<<sizeof(name)<<endl; // 1
// int convertedname = name;  // converting from char to int 
// cout<<price<<endl;
// int shortprice = price;
// cout<<shortprice<<endl;
// cout<<sizeof(convertedname)<<endl; // 4 after convertion
// cout<< convertedname<< endl; // 107 -> it is the ASCII value of the char stored in the int datatype which is k
// cout<< price<<endl;  // 100.99
// int newprice = (int)price;  // explicit type conversation from larger dtype to the smaller dtype 
//                             // explicit type casting here is 100.01 -> 100 and 100.9999 -> 100 
// cout<<newprice<<endl; // 100


// // taking inputs from the user ======================================================================================
// string myname ;
// cout<<"enter you name :"; // giving the input text
// cin>> myname;            // asking forf the name input
// // now giving the output on the screen after using the input value from the user
// cout<<"your name is :"<<myname<<endl;

// // arithmetic operators (bigger dtype will be in the result of the operation ) ==========================================================================================
// int val1 ;
// int val2 ;
// cout<<"enter your first digit :";
// cin>>val1; 
// cout<<"enter your 2nd digit :";
// cin>>val2;

// cout<<"addition is : "<<val1+val2<<endl;
// cout<<"difference is : "<<val1-val2<<endl;
// cout<<"product is : "<<val1*val2<<endl;
// cout<<"division is : "<<val1/val2<<endl;  // division in c++ is dtype sensitive double/int results in double answer
// cout<<(5/(double)2)<<endl; // will reesult in answer in double dtype
// cout<<"reminder is : "<<val1%val2<<endl;

// //  logical operators  ============================================================================================
 
// cout<<(5>1)<<endl;           // 1
// cout<<!(5>1)<<endl;         // 0
// cout<<(true||false)<<endl;  // 1
// cout<<(true||true)<<endl;   // 1
// cout<<(false||false)<<endl;  // 0
// cout<<(true&&false)<<endl;  // 0 
// cout<<(true&&true)<<endl;   // 1
// cout<<(false&&false)<<endl; // 0


// //===============================================================================================================
// //==================================== lecture 2 ================================================================

// // if-else statements 
// int teriage;
// cout<<"enter your age : ";
// cin>>teriage;

// if (teriage>18){
//     cout<<"eligible"<<endl;

//  } else if(teriage == 18) {
//         cout<<"just eligible "<<endl;
//  } else {
//     cout<<"not eligible"<<endl;
//  }
// // terniary statements 
// int a = 45;
// cout<<(a>0 ? "positive" : "negative")<<endl; // posititve

// // looping ======================   while loop --------------------------------------------------------------------

// int i  = 1;
// while (i <= 5){
//     cout<<i<<endl;
//     i++;
// }
// // sum of n odd numbers -------------------
// int i  =0;
// int sum =0;
// int n = 10;
// while(i<10){
//     if(i%2!=0){
//         sum+=i;
//     }
//     i++;
// }
// cout<<"the sum of all "<<n<<" odd numbers is : "<<sum<<endl;


// //--------- for loop ------------------------------------------------------------------------
// int n = 20;
// int i = 1 ;
// int count = 0;
// int countt = 0;
// for (i>0;i<=n;i++){
   
//     if (i%2==0){
//         cout<<"even"<<endl;
//         count++;
        
//     }else if(i==15){
//         countt++;
//         continue;
//     }
//      cout<<"the iteration is : "<<i<<endl;

// }
// cout<<"counted number of even numbers are : "<<count<<endl;
// cout<<"counted number of skip numbers are : "<<countt<<endl;
// //-----------sum of n numbers----------------------------------------------------------------------
// int i  =0;
// int sum =0;
// for (i>0;i<=n;i++){
//     if(i%2!=0){
//         sum +=i;
//     }
// }
// cout<<"the sum of all "<<n<<" odd numbers is : "<<sum<<endl;
// to check whether a number is prime or not ---------------------------
// int n = 10;
// int i =0;
// int j=0;
// bool isPrime= true;
// for (i=2;i*i<=n;i++){  // i<=n-1 is basic , but checkking for i*i <= n means itearting i untill root n as the factors repeats for a number once the underroot of the number is reached 
//     if(n%i==0){
//         isPrime = false;
//         break;
    
//     }
// }
// if(isPrime ==true){
//     cout<<"prime number\n";
// } else{
//     cout<<"non prime\n";
// }
// // another method for prime number detection ==================================================
// for(i=2;i<n-1;i++){
//     if(n%i==0){
//         isPrime=false;
//     }
// }
// if(isPrime==true){
//     cout<<"the number is prime"<<endl;

// }else{
//     cout<<"the number is non-prime"<<endl;
// }

// ========  nested loops --- patterns --------------------------------------------------------------------------

// int n = 5;                            // this prog prints 5 lines with 10m stars each 
// for(int i=1;i<=n; i++){
//     int m = 10;
//     for(int j=1; j<=m; j++){
//         cout<<"*";
//     }
//     cout<<endl;

// }
// // to print 1234 in 4 lines i mean 1234... n in "n" lines 
// int n = 5;
// for (int i=1; i<=n ; i++){
//     for(int j=1;j<=n;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }
// // to print ABCD for n line

// int n = 5;
// for (int i=0; i<n ; i++){
//     char ch ='A';
//     for(int j=0;j<n;j++){
//         cout<<ch;
//         ch++;
//     }
//     cout<<endl;
// }
// // to print 1 2 3 in a line then 4 5 6 in the 2nd line , 7 8 9 in the 3rd line 
// int num = 1;
// int n =3;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<num;
//         num++;
//     }
//     cout<<endl;
// }

// // its abc version 
// char num = 'a';
// int n =3;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<num;
//         num++;
//     }
//     cout<<endl;
// }

// // printing a triangle of stars ------------------

// int n = 5;
// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// // printing a triangle with 1 in 1st row , 2 2 in 2nd row 3 3 3 in third for five rows

// int n = 5;
// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<(i+1);
//     }
//     cout<<endl;
// }
// // similar for abcd

// char chh = 'a';
// int n = 5;
// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<chh;

//     }
//     chh++;
//     cout<<endl;
// }

// //printing another triangle with 1 in the first row 1 2 in the 2nd , 1 2 3 in the 3rd for 5 rows 
// int n = 4;
// for (int i=1;i<n;i++){
//     for(int j=1;j<i+1;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }

// // trying the same in alphabtes 
// int n =4;
// char alpha='a';

// for(int i=1;i<n+1;i++){
//     for(int j=1;j<i+1;j++){
//         cout<<alpha;
//         alpha++;
//     }
//     cout<<endl;

// }



// //reversing the numbers  as 1 in 1st , 2 1 in 2nd and 3 2 1 in 3rd for 4 rows 
// int n= 4;
// for (int i=0;i<n;i++){
//     for(int j=i+1;j>0;j--){
//         cout<<j;
//     }
//     cout<<endl;

// }

//     char alpha ='a';
// for (int i=1;i<=n;i++){
//     for(int j=i;j>=1;j--){
//         cout<<char(alpha+j-1);
//     }
//     cout<<endl;

// }
// /*        a
//           ba
//           cba
//           dcba    */


// int n=4;
// int val=1;
// for(int i=1;i<n+1;i++){
//     for(int j=1;j<i+1;j++){
//         cout<<val;
//         val++;
//     }
//     cout<<endl;
// }



// // triangle with 1 in first row 2 3 in 2nd row , 4 5 6 in 3rd row for 4 rows this is a floyd's triangle
// int n=4;
// int num=1;
// for(int i=1;i<n+1;i++){
//     for(int j=1;j<i+1;j++){
//         cout<<num;
//         num++;
//     }
//     cout<<endl;
// }
// // charactor version of floyd's traiangle

// char chh='A';

// for(int i=1;i<=n;i++){
//     for(int j=1;j<i+1;j++){
//         cout<<chh;
       
//         chh++;
//     }
//     cout<<endl;
// }

// // to print an inverted triangle as 
// // 1 1 1 1 
// //   2 2 2
// //     3 3
// //       4
//  int n = 4;
//  for (int i=0;i<n;i++){
//     for(int j=0;j<i;j++){
//         cout<<" ";
//     }
//     for(int k=0;k<n-i;k++){
//         cout<<i+1;
//     }
//     cout<<endl;
//  }
// // to print the character version 
// char chuprh = 'a';
// int i,j,k=0;
// for(i=0;i<n;i++){
//     for(j=0;j<i;j++){
//         cout<<" ";
//     }
//     for(k=0;k<n-i;k++){
//         cout<<chuprh;
//     }
//     chuprh++;
//     cout<<endl;
// }

// // to print 
// //       1
// //     1 2 1
// //   1 2 3 2 1
// // 1 2 3 4 3 2 1

// int n=4;
// int i,j,k,l=0;
// for(i=0;i<n;i++){
//     for(j=n-i-1;j>0;j--){
//         cout<<" ";
//     }
//     for(k=1;k<=i+1;k++){
//         cout<<k;
//     }
//     for(l=i;l>=1;l--){
//         cout<<l;
//     }
//     cout<<endl;
// }


// // hollow diamond 
//  int i,j,k=0;
//  int n=4;
//  for(i=0;i<n;i++){
//     for(j=0;j<n-i-1;j++){
//         cout<<" ";
//     }
//     cout<<"*";
//     if(i!=0){
       
//         for(k=0;k<2*i-1;k++){
//             cout<<" ";
//         }
//          cout<<"*";
//     }
//     cout<<endl;
//  }
// for(int i=0;i<n-1;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<" ";
//     }
//     cout<<"*";
//     if(i!=n-2){
//         for(int k=0;k<2*(n-i)-5;k++){
//             cout<<" ";
//         }
//          cout<<"*";
//     }
//     cout<<endl;
//  }

// // // ================================ functions =====================================================================
// //factorial ------------
// cout<<fact(5);
// //sum of digits -----------
// cout<<sum(56729)<<endl;
// //nCrbinomial expressionn------------------
// cout<<computenCr(8,2)<<endl;
// function to check if the number is prime or not ----------------------------------
//     allPrime(13);
// // fibonacci-------------------------------------------------------------------------    
// nfibonacci(5);
// function for decimal to binary conversion -------------------------------
// cout<<decToBinary(8)<<endl;
// funvtion for bianry to dec =--------------------------------------------------
// cout<<binaTodec(111)<<endl;
// bitwise operators 
// bitwise and &
// cout<<(6&10)<<endl;
// //bitwise or |
// cout<<(6|10)<<endl;
// // bitwise xor ^
// cout<<(6^10)<<endl;
// // bitwise left shift << they shift the binary number to one bit left like (a<<b is equal to a*2^b in the memory) 
// cout<<(8 << 1)<<endl;
// // bitwise right shift >> , it shifts the bianry number to the right (a>>b is equal to a/2^b)in the memory
// cout<<(8>>1)<<endl;
// data type modifiers
// cout<<sizeof(int)<<endl;
// cout<<sizeof(long int)<<endl;
// cout<<sizeof(long long)<<endl;
// cout<<sizeof(short)<<endl;
// unsigned int a= -10;
// cout<<a<<endl;
// to check if the number  is a power of 2 
// int n;
//     cout << "Enter a number: ";
//     cin >> n;

// if (isPowerOfTwo(n))
//         cout << n << " is a power of 2." << endl;
//     else
//         cout << n << " is not a power of 2." << endl;
// // ====================================================================================================================================================
// //  ---------------------------------------------------------------- ARRAYS -----------------------------------------------------------------------------
// //=====================================================================================================================================================

// int ar[5]= {1, 34,16,8,14};
// cout<<ar[3]<<endl;
// // taking input in array 
// int inarray[3];
// for(int i=0;i<3;i++){
//     cout<<"enter the "<<i<<"th element : "<<endl;
//     cin>> inarray[i];
// }
// for(int i=0;i<3;i++){
//     cout<<inarray[i]<<endl;
// }
// to get the smallest element out of the array 
// int smallest = INT_MAX;
// int index=-1;
// for(int i=0;i<5;i++){
//     if(ar[i]<smallest){
//         smallest=ar[i];
//         index=i;
// }   
//     // smallest = min(ar[i],smallest); or we can use this single line using min function also

// }
// cout<<"smallest element is : "<<smallest<<endl;
// cout<<index<<endl;
// // largest element of the array 
// int largest = INT_MIN;
// for(int i=0;i<5;i++){
//     if(ar[i]>largest){
//         largest=ar[i];
//             index=i;

//     }
//     // largest=max(ar[i],largest); // or we can use this single line using max function also

// }
// cout<<"largest element is : "<<largest<<endl;
// cout<<index<<endl;
// // array ka naam apne starting element ke address ko store krata hai jo ki paas hojata hai (pass by reference) jb hm array ka namm call krte hain ya assign krte h

// // ============== linear search ==================================================================

// int ray[]={5,8,9,4,1,2,3};
// int item=8;
// int size=7;
// search_linear( ray, size, item);
// cout<<"the item is at position:"<< search_linear( ray, size, item)<<endl;

// // array reversal " two pointer method"======================================================================

// int start=0;
// int end = size-1;
// for(int i=0;i<size;i++){   // array before the swap
//     cout<<ray[i]<<" ";
// }
// cout<<endl;
// while(start<end){
//     swap(ray[start], ray[end]);
//     start++;
//     end--;
// }
// for(int i=0;i<size;i++){    // array after the swap
//     cout<<ray[i]<<" ";
// }
// cout<<endl;
// to write a function to print all the unique values ina na array

//    int arr[] = {1, 2, 3, 2, 4, 5, 5};
//     int n = sizeof(arr)/sizeof(arr[0]);

    // printUnique(arr, n);
// to print the intersection of two arrays 
int arr1[] = {1, 62, 3, 2, 4, 15, 5};
int arr2[] = {11, 2, 31, 62, 4, 5, 35};
int n= 7;
array_intersection(arr1,arr2,n);















return 0;
}
