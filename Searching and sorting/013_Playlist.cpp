#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    unordered_map<int, int> freq;
    int i = 0, j = 0, cur_len = 0, max_len = 0;
    while (j < n)
    {
        if (freq.find(nums[j]) == freq.end() || freq.find(nums[j])->second == 0)
        {
            freq[nums[j]]++;
            j++;
            cur_len++;
            max_len = max(max_len, cur_len);
        }
        else
        {
            cur_len--;
            freq[nums[i]]--;
            i++;
        }
    }
    cout << max_len;
}