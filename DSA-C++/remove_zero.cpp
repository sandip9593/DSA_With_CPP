

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> arr(n, 0);
        int j = 0 ;

        for (int i = 0 ; i < n ; i++){
            if (nums [i] != 0 ) {
                arr[j] = nums[i] ; 
                j++ ; 
            }
        }
        for ( int i = 0 ; i< n ; i++){

            nums[i] = arr[i] ;
        }
        
    }
    
};

// runtime 18 ms // 