#include <iostream>
using namespace std;
#include <limits.h>
#include <bits/stdc++.h>

int main()
{
    int a[5] = {2, 3, 4, 1, 6}; // 
    
    int b[5];
    int j = 0 ; 
   
    for (int i = 4 ; i<6 ; i--){
        
        b[j] = a[i];
        j= j+1;
    }
    
    for (int i = 0; i<6 ; i++){
        cout  << b[i]<< " ";
    }
    
   
   


}