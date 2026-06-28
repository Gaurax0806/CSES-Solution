#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector <int> dp;

int func(int n, vector<int> &h, int &k)
{
    if(dp[n] != -1){
        return dp[n];
    }
    int cost = INT_MAX;
    if (n == 0)
    {
        return 0;
    }
    for (int i = 1; i <= k; i++)
    {
        if (n-i >= 0) cost = min(cost, func(n - i, h, k) + abs(h[n] - h[n - i]));
    }
    return dp[n] = cost;
}

int main()
{
    int n, k;
    cin >> n >> k;
    dp.assign(n, -1);
    dp[0] = 0;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    int a = func(n - 1, h, k);
    cout << a;
}