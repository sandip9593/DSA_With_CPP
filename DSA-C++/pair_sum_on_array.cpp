#include <iostream>
using namespace std ;
#include <limits.h>
#include <bits/stdc++.h>


int main (){
    int arr[5] = {1,4,5,0,3} ; 
    int value  = 5 ;
    int count  = 0 ; 

    for (int i = 0 ;  i <= 5 ; i ++ ){
        
        for (int j = i+1; j <= 5; j++)
        {
           if (arr[i]+arr[j] ==value)
           {
               count =  count + 1 ;

           }
          
           
        }
       
        

}
 cout << "my pair value is : " << count  <<endl ; 

}