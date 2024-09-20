




#include<iostream>
#include<vector>
using namespace std;






class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size() ;

        vector <int> answer (n,1) ;

        int l_product = 1 ; 
        for (int i = 0 ; i <n ; i++ ){

            answer [i] = l_product ; 
            l_product  *= nums[i] ; 
        }

        int r_product = 1 ; 


            for (int  j = n-1  ; j >=0  ; j-- ){
               answer [j] *= r_product ; 
                r_product  *= nums [j] ; 

            }
           
         
        return answer ; 

    }
};




/*
Runtime
19
ms
Beats
94.82%

*/