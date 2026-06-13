#include <bits/stdc++.h>
#define ll unsigned long long int

using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> requirements;
    vector<int> appartments;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        requirements.push_back(z);
    }

    for (int i = 0; i < m; i++)
    {
        int z;
        cin >> z;
        appartments.push_back(z);
    }
    sort(requirements.begin(), requirements.end());
    sort(appartments.begin(), appartments.end());
    int j = 0;
    int i = 0;
    int count = 0;
    while (j < m && i < n)
    {
        if (appartments[j] < requirements[i] - k)
        {
            j++;
        }
        else if (appartments[j] > requirements[i] + k)
        {
            i++;
        }
        else
        {
            count++;
            i++;
            j++;
        }
    }
    cout << count << endl;
}