#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;
int main()
{
	string word;
	cin >> word;
	int n = word.size();
	int high = 0, low = 0;
	int size = 0;
	int max_size = 0;
	while (high < n){
		if (word[high] == word[low]){
			high ++;
			size = high - low;
			max_size = max(max_size, size);
		}
		else {
			low = high;
		}
	}
	cout << max_size;
}