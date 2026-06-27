#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll N = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i >= j)
                dp[i] = (dp[i] + dp[i - j]) % N;
        }
    }
    cout << dp[n] << endl;
}