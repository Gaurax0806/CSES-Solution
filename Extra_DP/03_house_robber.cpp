// SPACE OPTIMISED
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        int prev1, prev2;
        prev2 = nums[0];

        for (int i = 1; i < n; i++)
        {
            int take = nums[i];
            if (i > 1)
                take += prev1;
            int notake = prev2;
            prev1 = prev2;
            prev2 = max(take, notake);
        }
        return prev2;
    }
};


// ITERATIVE
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n + 1);
        dp[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            int take = nums[i];
            if (i > 1)
                take += dp[i - 2];
            int notake = dp[i - 1];

            dp[i] = max(take, notake);
        }
        return dp[n - 1];
    }
};

// RECURSIVE
class Solution
{
public:
    vector<int> dp;
    int f(int n, vector<int> &nums)
    {
        if (n == 0)
        {
            return nums[0];
        }
        if (n < 0)
        {
            return 0;
        }
        if (dp[n] != -1)
            return dp[n];
        int m1 = nums[n] + f(n - 2, nums);
        int m2 = f(n - 1, nums);
        return dp[n] = max(m1, m2);
    }
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        dp.assign(n + 1, -1);
        int out = f(n - 1, nums);
        if (n == 0)
            return 0;
        return out;
    }
};