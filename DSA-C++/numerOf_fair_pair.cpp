class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long  count = 0;

        for (int i = 0; i < n; ++i) {
            int low_j =
                lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]) -
                nums.begin();
            int high_j =
                upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]) -
                nums.begin() - 1;

            if (low_j <= high_j) {
                count += high_j - low_j + 1;
            }
        }

        return count;
    }
};