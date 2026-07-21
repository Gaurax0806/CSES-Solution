#include <bits/stdc++.h>
using namespace std;
bool is_possible(map<char, int> &m, char cur)
{
    int total_left = 0;
    int mx = 0;

    for (auto it : m)
    {
        total_left += it.second;
        mx = max(mx, it.second);
    }

    return mx <= (total_left + 1) / 2;
}
int main()
{
    string s;
    cin >> s;
    map <char, int> m;
    for(auto it : s){
        m[it]++;
    }
    // for(auto it : m){
    //     cout << it.first<< " " << it.second << endl;
    // }
    int n = s.size();
    char last = '\0';
    string ans = "";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 26; j++){
            char ch = 'A' + j;
            if(m[ch] == 0 || ch == last) continue;

            m[ch]--;
            if (is_possible(m, ch)){
                ans.push_back(ch);
                last = ch;
                break;
            }
            else{
                m[ch]++;
            }
        }
    }
    if(ans.size() == n){
        cout << ans << endl;
    }
    else{
        cout << -1 << endl;
    }
}