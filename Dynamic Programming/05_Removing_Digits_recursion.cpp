#include <bits/stdc++.h>
using namespace std;

#define ll long long int

vector<int> dp;

int f(int n)
{
    if (dp[n] != -1)
        return dp[n];
    if (n == 0)
        return 0;

    int cost = INT_MAX;
    int m = n;
    int a = m % 10;
    while (m != 0)
    {
        a = m % 10;
        m = m / 10;
        if (a != 0)
        {
            cost = min(cost, 1 + f(n - a));
        }
    }
    return dp[n] = cost;
}

int main()
{
    int n;
    cin >> n;
    dp.assign(n + 1, -1);
    dp[0] = 0;
    int result = f(n);
    cout << result;
}