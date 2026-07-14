#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll f(ll index, vector<ll> &nums, ll sum, ll sum_1)
{
    if(index >= nums.size()){
        return abs(sum - (2*sum_1));
    }
    ll take = f(index+1, nums, sum, sum_1+nums[index]);
    ll not_take = f(index + 1, nums, sum, sum_1);
    return min(take,not_take);
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> nums;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        sum += z;
        nums.push_back(z);
    }
    vector<int> aux;
    cout << f(0, nums, sum, 0);
}