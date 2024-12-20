class Solution {
public:
    int specialArray(vector<int>& nums) {
      sort(nums.begin(), nums.end());

        int start = 0;
        int end = nums.size();

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int ans = 0;

            for (int num : nums) {
                if (num >= mid){
                    ans++; 
                } 
            }
            if (ans == mid){
                return mid;
            } 
            else if (ans > mid){
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
                
        }

        return -1;  
    }
}; 
