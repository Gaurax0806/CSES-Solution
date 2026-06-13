#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> nums;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        nums.push_back({z, i + 1});
    }
    sort(nums.begin(), nums.end());
    int low = 0;
    int high = n - 1;
    int result = -1;
    while (high > low)
    {
        if (nums[high].first + nums[low].first == x)
        {
            result = 1;
            break;
        }
        else if (nums[high].first + nums[low].first > x)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    if (result == 1)
    {
        cout << nums[low].second << " " << nums[high].second;
    }
    else
    {
        cout << "IMPOSSIBLE";
    }
}