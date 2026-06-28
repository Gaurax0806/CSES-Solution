class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][0] = 1;
        for (int row = 0; row < m; row++)
        {
            for (int column = 0; column < n; column++)
            {
                if (row == 0 && column == 0)
                    continue;
                int l = 0;
                int r = 0;
                if (row - 1 >= 0)
                    l = dp[row - 1][column];
                if (column - 1 >= 0)
                    r = dp[row][column - 1];
                dp[row][column] = l + r;
            }
        }
        return dp[m - 1][n - 1];
    }
};


// space optimisation
class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        vector<int> prev(n, 0);
        for (int row = 0; row < m; row++)
        {
            vector<int> temp(n, 0);
            for (int column = 0; column < n; column++)
            {
                if (row == 0 && column == 0)
                {
                    temp[0] = 1;
                    continue;
                }
                int l = 0;
                int r = 0;
                if (row - 1 >= 0)
                    l = prev[column];
                if (column - 1 >= 0)
                    r = temp[column - 1];
                temp[column] = l + r;
            }
            prev = temp;
        }
        return prev[n - 1];
    }
};