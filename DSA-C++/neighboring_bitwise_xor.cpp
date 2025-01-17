

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int sum = 0;
        
        for (int num : derived) {
            sum ^= num;  // XOR each element in the array
        }
        
        return sum == 0;
    }
};
