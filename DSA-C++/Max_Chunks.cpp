class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
       int result = 0 ; 
       int maximum = 0 ; 

       for (int i = 0 ; i< arr.size() ; i++) {
        maximum = max(maximum, arr[i]) ; 
        if( maximum ==i) 
        result += 1 ; 
       } 
       return result ; 
    }
};