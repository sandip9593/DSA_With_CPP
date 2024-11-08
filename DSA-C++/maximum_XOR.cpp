class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector <int > ans  ; 
        int n = nums.size() ; 
        int max_possible = (1 << maximumBit ) - 1  ; 
        int total_Xor = 0 ; 
        for (int num : nums) {
            total_Xor ^= num ; 

        }

        for (int i = 0 ; i< n ; i ++ ){
            ans.push_back(total_Xor ^ max_possible ) ; 

            total_Xor ^= nums[n-1-i] ; 
        }
        return ans ; 
        
    }
};