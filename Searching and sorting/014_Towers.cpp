#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> thead;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        if (thead.size() == 0)
        {
            thead.push_back(z);
        }
        else
        {
            auto it = upper_bound(thead.begin(), thead.end(), z);
            if (it == thead.end())
            {
                thead.push_back(z);
            }
            else
            {
                thead[it - thead.begin()] = z;
            }
        }
    }
    int count = 0;
    for (auto it : thead)
    {
        count++;
    }
    cout << count;
}