#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, 1});
        v.push_back({y, -1});
    }
    sort(v.begin(), v.end());
    ll max_customer = 0;
    ll customer = 0;
    // cout << v.size();
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].second == 1)
        {
            customer++;
        }
        else if (v[i].second == -1)
        {
            customer--;
        }
        max_customer = max(customer, max_customer);
    }
    cout << max_customer;
}