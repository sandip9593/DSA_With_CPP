class Solution {

private:
    const int MOD = 1e9 + 7;

public:
    int countGoodStrings(int low, int high, int zero, int one) {
        if (zero > one)
            return countGoodStrings(low, high, one, zero);

        vector<int> dp(high + 1, 0);
        dp[0] = 1;
        int res = 0;

        for (int i = 1; i <= high; ++i) {
            if (i >= zero)
                dp[i] = (dp[i] + dp[i - zero]) % MOD;
            if (i >= one)
                dp[i] = (dp[i] + dp[i - one]) % MOD;
            if (i >= low)
                res = (res + dp[i]) % MOD;
        }

        return res;
    }
};

 