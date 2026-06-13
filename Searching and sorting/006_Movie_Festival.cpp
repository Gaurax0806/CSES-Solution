#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <pair<ll, ll>> v;
    for (int i = 0; i < n; i++){
        ll x, y;
        cin >> x >> y;
        v.push_back({y, x});
    }
    sort(v.begin(), v.end());
    ll no_of_watch = 1;
    int last_time = v[0].first;

    for(int i = 1; i < n; i++){
        if(v[i].second >= last_time){
            no_of_watch++;
            last_time = v[i].first;
        }
    }
    cout << no_of_watch << endl;
}