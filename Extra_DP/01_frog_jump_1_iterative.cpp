#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    vector <int> dp(n+1, 1e9);
    dp[0] = 0;
    int last = 0;
    int second_last = 0;
    for (int i = 1; i < n; i++){
        int result = 1e9;
        result = min(result, second_last + abs(h[i] - h[i-1]));
        if(i > 1) result = min(result, last + abs(h[i] - h[i - 2]));
        last = second_last;
        second_last = result;
    }
    cout << second_last;
}