#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<ll> length;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        length.push_back(z);
    }
    sort(length.begin(), length.end());
    int mid = n / 2;
    ll mid_len = length[mid];
    for (auto it : length)
    {
        sum += abs(it - mid_len);
    }
    cout << sum;
}