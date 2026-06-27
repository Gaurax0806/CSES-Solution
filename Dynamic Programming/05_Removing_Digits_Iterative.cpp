#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, 1e6);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        while (x)
        {
            int a = x % 10;
            x = x / 10;
            if (a != 0)
                dp[i] = min(dp[i], 1 + dp[i - a]);
        }
    }
    cout << dp[n];
}