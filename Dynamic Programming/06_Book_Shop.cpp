#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<vector<int>> dp;
int f(int index, int money, vector<int> price, vector<int> pages)
{
    if (index == 0)
    {
        if (price[index] <= money)
        {
            return pages[index];
        }
        else
            return 0;
    }
    if (dp[index][money] != -1)
        return dp[index][money];
    int not_take = 0 + f(index - 1, money, price, pages);
    int take = INT_MIN;
    if (price[index] <= money)
    {
        take = pages[index] + f(index - 1, money - price[index], price, pages);
    }
    return dp[index][money] = max(take, not_take);
}
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> price(n);
    vector<int> pages(n);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> pages[i];
    }
    dp.assign(n, vector<int>(x + 1, 0));
    // price upto x and maximise no of pages
    // cout << f(n - 1, x, price, pages);
    // doing it in tabulation way
    for (int i = price[0]; i < x; i++)
    {
        dp[0][i] = pages[0];
    }
    vector<int> maxx(x+1);
    for (int i = 1; i < n; i++)
    {
        
        for (int j = 0; j <= x; j++)
        {
            int not_take = dp[i - 1][j];

            int take = 0;
            if (price[i] <= j){
                take = pages[i] + dp[i - 1][j - price[i]];
            }
            dp[i][j] = max(take, not_take);
        }
    }
    cout << dp[n - 1][x];
}