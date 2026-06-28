#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

static constexpr size_t max_align = alignof(max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static size_t pos = 0;

void *operator new(const size_t size)
{
    const size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}

void *operator new[](const size_t size) { return operator new(size); }
void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, size_t) noexcept {}
void operator delete[](void *, size_t) noexcept {}

class Solution
{
public:
    vector<vector<int>> dp;
    int f(vector<vector<int>> &triangle, int row, int column)
    {
        if (row == 0 && column == 0)
        {
            return dp[0][0] = triangle[0][0];
        }
        if (column > row)
            return 1e9;
        if (row < 0 || column < 0)
            return 1e9;
        if (dp[row][column] != -1)
            return dp[row][column];
        int up = triangle[row][column] + f(triangle, row - 1, column);
        int diag = triangle[row][column] + f(triangle, row - 1, column - 1);
        int minu = min(up, diag);
        return dp[row][column] = minu;
    }
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int row = triangle.size();
        int column = 0;
        dp.assign(row, vector<int>(row, -1));
        int mini = INT_MAX;
        for (int column = 0; column < triangle[row - 1].size(); column++)
        {
            mini = min(mini, f(triangle, row - 1, column));
        }
        return mini;
    }
};