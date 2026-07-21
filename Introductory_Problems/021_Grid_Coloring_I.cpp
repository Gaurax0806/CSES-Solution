#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            grid[i][j] = s[j];
        }
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            vector<int> not_allowed(4,0);
            if(i-1 >= 0){
                not_allowed[grid[i-1][j] - 'A'] = 1;
            }
            if(j-1 >= 0){
                not_allowed[grid[i][j-1] - 'A'] = 1;
            }
            not_allowed[grid[i][j] - 'A'] = 1;
            for(int z = 0; z < not_allowed.size(); z++){
                // cout << not_allowed[z] << " ";
                if(not_allowed[z] == 0){
                    grid[i][j] = z + 'A';
                    cout << grid[i][j];
                    break;
                }
            }
        }
        cout << endl;
    }
}