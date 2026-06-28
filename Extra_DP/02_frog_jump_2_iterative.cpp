#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; (i - j >= 0) && (j <= k); j++)
        {
            dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
        }
    }
    cout << dp[n - 1];
}