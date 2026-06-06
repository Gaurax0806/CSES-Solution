#include <bits/stdc++.h>
#define ll unsigned long long int

using namespace std;
int main()
{
	string str;
	cin >> str;
	unordered_map<char, int> m;
	for (auto ch : str)
	{
		m[ch]++;
	}
	int no_of_odd = 0;
	int no_of_even = 0;
	// int n = str.size();
	for (auto i : m)
	{
		// 	cout << i.first << " " << i.second << endl;
		if (i.second % 2 != 0)
		{
			no_of_odd++;
		}
		else
		{
			no_of_even += i.second / 2;
		}
	}
	// cout << no_of_even;
	vector<char> cha;
	if (no_of_odd >= 2)
	{
		cout << "NO SOLUTION";
	}

	else
	{
		for (auto i : m)
		{
			if (i.second % 2 == 0)
			{
				for (int z = 0; z < i.second / 2; z++)
				{
					cha.push_back(i.first);
				}
			}
		}
		for (auto i : m)
		{
			if (i.second % 2 != 0)
			{
				for (int z = 0; z < i.second; z++)
				{
					cha.push_back(i.first);
				}
			}
		}
		char ex;
		vector<char> chann = cha;

		for (int w = no_of_even - 1; w >= 0; w--)
		{
			// cout << ex;
			chann.push_back(cha[w]);
		}
		for (auto i : chann)
		{
			cout << i;
		}
	}
}