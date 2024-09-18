#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() == 0 ) {
            return 0 ; 
        } 

        int  j = 0 ; 

        for (int i = 1 ; i<nums.size() ; i++) {

            if (nums[i] != nums[j]) {
            j++;
            nums[j] = nums[i];
        }
    }
    
    return j + 1;
        
    }
};


/*
362 / 362 test cases passed.
Status: Accepted
Runtime: 12 ms
Memory Usage: 21.3 MB
*/