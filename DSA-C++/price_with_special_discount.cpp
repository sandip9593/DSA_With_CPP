class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
       int n = prices.size();
    vector<int> result(prices); // Initialize result with the original prices

    for (int i = 0; i < n; i++) {
        // Check all prices after the current item
        for (int j = i + 1; j < n; j++) {
            if (prices[j] <= prices[i]) {
                result[i] = prices[i] - prices[j];
                break; // Stop after finding the first eligible discount
            }
        }
    }

    return result;
    }a
};