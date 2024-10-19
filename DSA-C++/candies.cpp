

#include <iostream>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int max = 0; 
        vector<bool> result; 

        // Find the maximum number of candies
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > max) {
                max = candies[i]; 
            }
        }

        // Determine which kids can have the most candies
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= max) {
                result.push_back(true); // If the current kid can have the most candies
            } else {
                result.push_back(false); // Otherwise, the current kid cannot
            }
        }          

        return result; 
    }
};
