class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() ; 
        int m = nums2.size() ; 

        vector<int> marg ; 
        for (int i  = 0 ; i<n ; i++) {
            marg.push_back(nums1[i]); 
        }
        for (int j = 0 ; j< m ; j++) {
            marg.push_back(nums2[j]) ; 
        }
        sort(marg.begin(), marg.end());

        int sum = marg.size() ; 
        if(sum % 2 == 1) {
            return static_cast<double> (marg[sum/2]) ; 

        }
        else {
            int mid1 = marg[sum/2 - 1] ; 
            int mid2 = marg[sum/2] ; 
            return(static_cast<double>(mid1) + static_cast<double>(mid2)) / 2.0;
        }
    }
};