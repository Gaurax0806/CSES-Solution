#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    int m = 1;
    for(int i = 1; i <= n; i++){
        m = m*i;
    }
    return m;
}

void f(map<char, int> &m, string &aux, int n)
{

    if (aux.size() == n)
    {
        cout << aux << '\n';
        return;
    }

    for (auto &it : m)
    {
        if (it.second > 0)
        {
            aux.push_back(it.first);
            it.second--;
            f(m, aux, n);
            it.second++;
            aux.pop_back();
        }
    }
}

int main()
{

    string s;
    cin >> s;

    map<char, int> m;
    int n = s.size();
    int res = fact(n);
    for (char c : s)
        m[c]++;

    string aux;
    for (auto it : m){
        res = res / fact(it.second);
    }
    cout << res << endl;
    f(m, aux, s.size());
}