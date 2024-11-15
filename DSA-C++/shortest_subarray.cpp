class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();
        int left = 0;
        
        // Find the longest non-decreasing subarray starting from the left
        while (left + 1 < n && arr[left + 1] >= arr[left]) {
            left++;
        }
        
        // If the whole array is non-decreasing, return 0
        if (left == n - 1) {
            return 0;
        }

        int right = n - 1;
        // Find the longest non-decreasing subarray starting from the right
        while (right > 0 && arr[right - 1] <= arr[right]) {
            right--;
        }

        // Initially, the shortest subarray to remove is either the left or right part
        int ans = min(n - left - 1, right);
        
        // Use two pointers to check the combination of both subarrays
        int i = 0, j = right;
        while (i <= left && j < n) {
            if (arr[i] <= arr[j]) {
                // Update the answer if we found a smaller subarray to remove
                ans = min(ans, j - i - 1);
                i++;
            } else {
                j++;
            }
        }

        return ans;
    }
};
