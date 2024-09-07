#include<iostream>
using namespace std;
#include<limits.h>

int findMax(int arr[], int n){

    int max = INT_MIN;

    for(int i =0; i<n;i++){

        if(arr[i] > max){

            max = arr[i];
        }
    }

    return max;
}

int main(){

    int arr[] ={1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int val = findMax(arr,n);
    cout<<val<<endl;
}

// =======================================
//    OR
//========================================

//  #include <iostream>
// using namespace std ;
// #include <limits.h>
// #include <bits/stdc++.h>

// int main() {
//     // Write C++ code here
//      int arr [10] = {54,67,43,98,56,24,56,68,34};
//      int mx = INT_MIN;
     
//      for (int i=0; i<10 ; i++){
//          if (arr[i] > mx){
//              mx =  arr[i] ; 
             
//          }
        
//      }
//       cout << "the max element is " << mx <<endl ; 

//     return 0;
// }
