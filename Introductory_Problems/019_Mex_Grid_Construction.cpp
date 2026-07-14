#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int mex(vector<vector<int>> grid, int row, int col){
    set<int> s;
    for(int i = 0; i < row; i++){
        s.insert(grid[i][col]);
    }
    for (int i = 0; i < col; i++){
        s.insert(grid[row][i]);
    }
    int missing_min = 0;
    for(auto it : s){
        if(it == missing_min){
            missing_min++;
            continue;
        }
        else{
            return missing_min;
        }
    }
    return missing_min;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n,0));
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++){
            if(row == 0){
                cout << col << " ";
                grid[row][col]= col;
                continue;
            }
            if(col == 0 && row != 0){
                cout << row << " ";
                grid[row][col] = row;
                continue;
            }
            grid[row][col] = mex(grid, row, col);
            cout << grid[row][col] << " ";
            

        }
        cout << endl;
    }
    cout << endl;
}