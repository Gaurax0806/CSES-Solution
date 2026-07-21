#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector < pair<int, int>> offset = {{1,2},{2,1},{-1,2},{2,-1},{1,-2},{-2,1},{-1,-2},{-2,-1}};
vector<pair<int, int>> is_valid(int u, int v, int n)
{
    vector<pair<int, int>>valid_pair;
    for (auto it : offset)
    {
        int i = u + it.first;
        int j = v + it.second;
        if(i >= 0 && i < n && j >= 0 && j < n){
            valid_pair.push_back({i,j});
        }
    }
    return valid_pair;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n,-1));
    queue<pair<int,int>> q;
    q.push({0,0});
    grid[0][0] = 0;
    while(!q.empty()){
        int u = q.front().first;
        int v = q.front().second;
        q.pop();
        vector<pair<int,int>> valid_ways = is_valid(u, v, n);
        for(auto it : valid_ways){
            if(grid[it.first][it.second] == -1){
                grid[it.first][it.second] = grid[u][v] + 1;
                q.push(it);
            }
        }

    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}