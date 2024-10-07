#include <iostream>
#include <climits> 


class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0  , sumB = 0 ; 
        for (int candy : aliceSizes) sumA += candy ;
        for (int candy : bobSizes) sumB += candy ; 

        int delta = (sumA - sumB) / 2 ; 

        sort (bobSizes.begin(), bobSizes.end()) ; 

        for (int x : aliceSizes) {
            int target = x - delta ; 

            if (binary_search(bobSizes.begin() , bobSizes.end() , target)) {
                return {x , target} ; 
            }
        }
        return {} ; 

    }
};