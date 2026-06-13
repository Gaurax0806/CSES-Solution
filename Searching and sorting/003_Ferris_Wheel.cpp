#include <bits/stdc++.h>
#define ll unsigned long long int

using namespace std;
int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> weights;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        weights.push_back(z);
    }
    sort(weights.begin(), weights.end(), greater<ll>());
    ll gondolas = 0;
    ll high = 0;
    ll low = n-1;
    while (high <= low)
    {
        if (weights[low] + weights[high] <= x)
        {
            gondolas++;
            high++;
            low--;
        }
        else
        {
            gondolas++;
            high++;
        }
    }
    cout << gondolas << endl;
}