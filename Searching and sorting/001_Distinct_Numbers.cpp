#include <bits/stdc++.h>
#define ll unsigned long long int

using namespace std;
int main()
{
    int n;
    cin >> n;
    set<ll> m;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        m.insert(z);
    }
    cout << m.size();
}