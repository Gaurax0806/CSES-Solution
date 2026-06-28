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
    int minPathSum(vector<vector<int>> &grid)
    {
        int rows = grid.size();
        int columns = grid[0].size();
        vector<vector<int>> dp(rows, vector<int>(columns, 0));
        vector<int> prev(columns, 0);
        for (int r = 0; r < rows; r++)
        {
            vector<int> temp(columns, 0);
            for (int c = 0; c < columns; c++)
            {
                if (r == 0 && c == 0)
                {
                    temp[0] = grid[0][0];
                    continue;
                }

                int up = 1e9;
                int left = 1e9;

                if (r - 1 >= 0)
                {
                    up = grid[r][c] + prev[c];
                }
                if (c - 1 >= 0)
                {
                    left = grid[r][c] + temp[c - 1];
                }
                temp[c] = min(up, left);
            }
            prev = temp;
        }
        return prev[columns - 1];
    }
};