#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<bool> allowed_row_wise(10);
vector<bool> allowed_diagonal_1(20);
vector<bool> allowed_diagonal_2(20);
void f(int col, vector<vector<char>> &grid, int &count)
{
    if (col == grid.size())
    {
        count++;
        return;
    }
    for (int row = 0; row < 8; row++)
    {
        if (grid[row][col] == '.')
        {
            if (allowed_row_wise[row] == 0 && allowed_diagonal_1[row + col] == 0 && allowed_diagonal_2[7 + row - col] == 0)
            {
                allowed_row_wise[row] = 1;
                allowed_diagonal_1[row + col] = 1;
                allowed_diagonal_2[7 + row - col] = 1;
                f(col + 1, grid, count);
                allowed_row_wise[row] = 0;
                allowed_diagonal_1[row + col] = 0;
                allowed_diagonal_2[7 + row - col] = 0;
            }
        }
    }
}
int main()
{
    vector<vector<char>> grid(8);
    for (int i = 0; i < 8; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < 8; j++)
        {
            grid[i].push_back(s[j]);
        }
    }
    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = 0; j < 8; j++)
    //     {
    //         cout << grid[i][j];
    //     }
    //     cout << endl;
    // }
    int col = 0;
    int count = 0;
    f(col, grid, count);
    cout << count;
}