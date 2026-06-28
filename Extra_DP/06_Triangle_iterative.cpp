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
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int row = triangle.size();
        int column = triangle[row - 1].size();
        vector<int> prev;
        for (int r = 0; r < row; r++)
        {
            vector<int> temp(r + 1);
            for (int c = 0; c <= r; c++)
            {
                if (r == 0 && c == 0)
                {
                    temp[0] = triangle[0][0];
                    continue;
                }
                int up = 1e9;
                int dia = 1e9;
                if (c < r)
                    up = triangle[r][c] + prev[c];

                if (c > 0)
                    dia = triangle[r][c] + prev[c - 1];

                temp[c] = min(up, dia);
            }
            prev = temp;
        }
        int mini = INT_MAX;
        for (auto it : prev)
        {
            mini = min(mini, it);
        }
        return mini;
    }
};