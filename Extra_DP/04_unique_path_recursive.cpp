class Solution
{
public:
    vector<vector<int>> dp;
    int f(int row, int column)
    {
        if (row == 0 && column == 0)
        {
            return 1;
        }
        if (dp[row][column] != -1)
            return dp[row][column];
        int l = 0;
        int r = 0;
        if (row - 1 >= 0)
            l = f(row - 1, column);
        if (column - 1 >= 0)
            r = f(row, column - 1);
        return dp[row][column] = l + r;
    }

    int uniquePaths(int m, int n)
    {
        dp.assign(m, vector<int>(n, -1));
        dp[0][0] = 1;
        return f(m - 1, n - 1);
    }
};