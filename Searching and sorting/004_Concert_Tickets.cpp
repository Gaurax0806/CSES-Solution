#include <bits/stdc++.h>
#define ll unsigned long long int

using namespace std;
// int resulttt(vector<ll> &t, ll target)
// {
//     int result = -1;
//     int low = 0;
//     int high = t.size() - 1;
//     while (high >= low)
//     {
//         int mid = low + (high - low) / 2;
//         if (t[mid] <= target)
//         {
//             result = mid;
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return result;
// }

int main()
{
    int n, m;
    cin >> n >> m;
    multiset<ll> map;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        map.insert(z);
    }
    for (int i = 0; i < m; i++)
    {
        ll target;
        cin >> target;
        auto answer = map.upper_bound(target);
        if (answer == map.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            answer--;
            cout << *answer << endl;
            map.erase(answer);
        }
    }
    for (auto it : map)
    {
        // cout << it << endl;
    }
}