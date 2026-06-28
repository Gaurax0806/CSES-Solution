#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector <int> dp;


int func(int n, vector<int> &h)
{
    if(dp[n] != -1){
        return dp[n];
    }
    int cost = INT_MAX;
    if(n == 0){
        return 0;
    }
    cost = min(cost, func(n-1, h) + abs(h[n] - h[n-1]));
    if (n > 1) cost = min(cost, func(n-2,h) + abs(h[n] - h[n-2]));
    return dp[n] = cost;
}

int main()
{

    int n;
    cin >> n;
    dp.assign(n, -1);
    dp[0] = 0;
    vector <int> h(n);
    for (int i =0; i < n; i++){
        cin >> h[i];
    }
    int a = func(n-1, h);
    cout << a;
}