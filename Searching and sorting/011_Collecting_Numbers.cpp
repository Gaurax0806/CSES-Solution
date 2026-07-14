#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    map<ll,ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        m[z] = i;
    }

    ll round = 1;
    for(int i = 2; i <= n; i++){
        if(m[i] < m[i-1]) round ++;
    }
    cout << round << endl;

}