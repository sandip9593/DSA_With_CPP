#include <iostream>
#include <climits> 



class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end()) ; 
        int n = lower_bound(nums.begin() , nums.end(), target)-nums.begin() ; 
        vector<int> result ; 

        for (int i = n ; i<nums.size() ; i++) {
            if(nums[i] == target ) {
                result.push_back(i) ; 
            }
            else {
                break ; 
            }
        }
        return result ;  
    }
};