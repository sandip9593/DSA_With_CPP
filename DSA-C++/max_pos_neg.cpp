class Solution {
public:
    int maximumCount(vector<int>& nums) {
         int pos=0; int neg=0;
        int ans=0;
        for(auto it:nums){
            if(it==0) continue;
            if(it>0) pos++;
            if(it<0) neg++;
            ans=max(ans,pos);
            ans=max(ans,neg);
        }
        return ans;
    }
};