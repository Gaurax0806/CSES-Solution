class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][0] = 1;
        for (int row = 0; row < m; row++)
        {
            for (int column = 0; column < n; column++)
            {
                if (row >= 0 && column >= 0 && obstacleGrid[row][column] == 1)
                {
                    dp[row][column] = 0;
                    continue;
                }
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