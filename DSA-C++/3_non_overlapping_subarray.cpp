_class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> result;

        if (n < 3 * k) return result;

        vector<int> sum(n - k + 1, 0);
        int currentSum = 0;
        for (int i = 0; i < n; i++) {
            currentSum += nums[i];
            if (i >= k) currentSum -= nums[i - k];
            if (i >= k - 1) sum[i - k + 1] = currentSum;
        }

        vector<int> left(n - k + 1, 0), right(n - k + 1, n - k);
        for (int i = 1; i < sum.size(); i++) {
            left[i] = (sum[i] > sum[left[i - 1]]) ? i : left[i - 1];
        }
        for (int i = sum.size() - 2; i >= 0; i--) {
            right[i] = (sum[i] >= sum[right[i + 1]]) ? i : right[i + 1];
        }

        int maxSum = 0;
        for (int j = k; j <= n - 2 * k; j++) {
            int i = left[j - k];
            int l = right[j + k];
            int totalSum = sum[i] + sum[j] + sum[l];
            if (totalSum > maxSum) {
                maxSum = totalSum;
                result = {i, j, l};
            }
        }

        return result;
    }
};
