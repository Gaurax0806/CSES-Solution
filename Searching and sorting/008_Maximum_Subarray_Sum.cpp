#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll sum = INT_MIN;
    ll best = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        sum = max(sum + arr[i], arr[i]);
        best = max(best, sum);
    }
    cout << best;
}