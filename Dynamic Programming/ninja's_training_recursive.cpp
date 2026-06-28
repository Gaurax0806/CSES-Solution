#include <bits/stdc++.h>
using namespace std;

#define ll long long int
vector <vector<int>> dp;

int f(int n, int last, vector<vector<int>> &task)
{
    if (n == 0)
    {
        int maxi = 0;
        for (int i = 0; i < 3; i++)
        {
            if (i != last)
            {
                maxi = max(maxi, task[0][i]);
            }
        }
        return maxi;
    }
    if (dp[n][last] != -1) return dp[n][last];
    int maxi = 0;
    for (int i = 0; i < 3; i++){
        if(i != last){
            int point = task[n][i] + f(n-1, i, task);
            maxi = max(maxi, point);
        }
    }
    return dp[n][last] = maxi;
}

int main()
{
    int n;
    cin >> n;
    dp.assign(n, vector<int>(4, -1));
    vector<vector<int>> task(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; ++j)
        {
            int z;
            cin >> z;
            task[i].push_back(z);
        }
    }
    int result = f(n - 1, 3, task);
    cout << result;
}